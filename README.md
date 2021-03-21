# Virtual Production Playground

Unreal Engine 4 plugin for virtual production scenes that adds in-game props, effects, etc. Use the plugin's components both in the Editor and Sequencer to add flair and extra functionality to your scenes.

## Adding Plugin to UE4 Project

Clone the repository, then copy the contents of **VPPlayground** directory into the **Plugins** directory located in your desired UE4 project. Open your UE4 project start using the plugin for your virtual production needs.

## Quick Guide

Below are brief instructions on how to utilize this plugin.

### Setting Up Characters

While all of the components in this plugin can be used on any **Actor** subclass with collision volumes that generate overlap events, it is recommended to use the **Character** class for any model that requires animations to be played. Below are steps on how to properly configure a character to use with this plugin:

- Create a default Character blueprint anywhere in your Content directory. Open up the blueprint editor to begin configuration.
- Edit **CapsuleComponent** as follows:
	- **Collision->Generate Overlap Events**->Disable
- Edit **Mesh** as follows:
	- **Mesh->Skeletal Mesh**->Add desired mesh from dropdown
	- **Transform->Location**->Adjust so that the bottom of mesh aligns with bottom of capsule
	- **Transform->Rotation**->Adjust so that the front of mesh is facing forward (ie. same direction as the inherited ArrowComponent)
	- **Physics->Physics Asset Override**->Add desired physics asset from dropdown
	- **Collision->Generate Overlap Events**->Enable
	- **Collision->Collision Presets**->Set to PhysicsActor

### Grab Components

Components that allow an actor to grab another actor, leaving the actor with the **Grabbable** component attached to the **Grabber** component owned by the other.

- Add **Grabber** component to actor that you want to do the grabbing.
	- If this actor has a SkeletalMesh, you can attach the Grabber component to the character's mesh socket that you desire. This will ensure that the component moves relative to the socket instead of the character's world location.
		- **NOTE**: In order for this step to work, you MUST add the component from within the actor's blueprint and make the Grabber component a direct child of the mesh component.
	- Adjust size (either via **Shape->Sphere Radius** or **Transform->Scale**) and location of component as you see fit.
- Add **Grabbable** component to any actor that you want to grab.

You can delete the current file by clicking the **Remove** button in the file explorer. The file will be moved into the **Trash** folder and automatically deleted after 7 days of inactivity.

### Launch Components

An actor with a **Launchable** component can be be flung across a direction relative to itself. An actor with a **Launcher** component can trigger the launch of actors that have Launchable components.

- Add **Launcher** component to actor that you want to initiate the launching.
- Add **Launchable** component to actor that you want to launch.
	- Methods to trigger launch:
		- Have the actor **overlap** with another actor with a **Launcher** component. Launch effects are played automatically.
		- From a **Launchable** instance in a blueprint event graph, call **Launch Owner->Launch** function to launch parent actor programmatically.
			- OPTIONAL: Call **Launch Effects->Play Effects** function to play launch effects programmatically.
	- **Settings**:
		- General
			- *Remove Actor After Launch*: Enable to remove actor from world after some duration.
			- *Remove Delay*: Time (in seconds) to wait before removing actor from play (if above setting is enabled).
			- *Enable Ragdoll*: (Applicable only if actor has a SkeletalMesh) Enable ragdoll after launch triggers.
		- Direction
			- *Launch Angle*: Rotation (in degrees) of Z-axis, relative to actor's forward vector, to launch actor. (eg. 0&deg; launches actor forward, 180&deg; backward.)
			- *Velocity*: Value used to multiply the launch vector. (ie. The higher the number, the further the actor is launched.)
			- *Upward Force*: Value added to the launch vector's Z-axis. This addition is applied **after** vector is multiplied by velocity value.
		- Effects
			- *Hit Particle*: Visual to be played at actor's location when launched.
			- *Hit Sound*: Audio to be played at actor's location when launched.
