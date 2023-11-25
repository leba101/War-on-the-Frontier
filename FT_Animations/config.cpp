class CfgPatches {
	class FT_animations {
		author = "Leba";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_anims_f"};
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{
		class FT_G2_ReloadGest: Default
		{
			file = "War_on_the_frontier\FT_animations\weapons\g2\FT_G2_reload.rtm";
			looped = 0;
			speed = -2.8;
			mask = "handsWeapon";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = { 0, 1, 0.050000, 0, 0.950000, 0, 1, 1 };
		};
	};
};

class CfgMovesBasic
{
	class Default;
	class StandBase;
	class BlendAnims;
	class ManActions
	{
		FT_G2_ReloadGest[]=
		{
			"FT_G2_ReloadGest",
			"Gesture"
		};
	};
	class Actions
	{
		class Default;
		class NoActions;
		class Acts_CarFixingWheel_actions;
		class FT_stalker_execution_facepunch_v_actions: Acts_CarFixingWheel_actions
		{
			Default="FT_stalker_execution_facepunch_v";
		};
		class FT_Launcher_Wallrun: NoActions
		{
			turnSpeed=4;
			LimpF="";
			LimpLF="";
			LimpRF="";
			LimpL="";
			LimpR="";
			LimpB="";
			LimpLB="";
			LimpRB="";
		    stop="";
			default="";
			stopRelaxed="";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			WalkF="";
			PlayerWalkF="";
			WalkLF="";
			PlayerWalkLF="";
			WalkRF="";
			PlayerWalkRF="";
			WalkL="";
			PlayerWalkL="";
			WalkR="";
			PlayerWalkR="";
			WalkB="";
			PlayerWalkB="";
			WalkLB="";
			PlayerWalkLB="";
			WalkRB="";
			PlayerWalkRB="";
			SlowF="";
			SlowFL="";
			SlowFR="";
			PlayerSlowF="";
			SlowB="";
			PlayerSlowB="";
			PlayerFastF="";
			Combat="";
			Civil = "";
			PrimaryWeapon = "";
			up="";
			down="";
			gear="";
			upDegree = "ManPosWeapon";
			PlayerSlowLF="";
			PlayerSlowRF="";
			PlayerSlowL="";
			PlayerSlowR="";
			PlayerSlowLB="";
			PlayerSlowRB="";
			FastF="";
			FastLF="";
			FastRF="";
			FastL="";
			FastR="";
			FastLB="";
			FastRB="";
			TactF="";
			TactLF="";
			TactRF="";
			TactL="";
			TactR="";
			TactLB="";
			TactRB="";
			TactB="";
			PlayerTactF="";
			PlayerTactLF="";
			PlayerTactRF="";
			PlayerTactL="";
			PlayerTactR="";
			PlayerTactLB="L";
			PlayerTactRB="";
			PlayerTactB="";
			Die="";
			stance = "ManStanceStand";

			PlayerStand = "";
			Stand="";
			Crouch="";
			PlayerCrouch="";
		};
		class FT_Pistol_Wallrun: NoActions
		{
			turnSpeed=4;
			LimpF="";
			LimpLF="";
			LimpRF="";
			LimpL="";
			LimpR="";
			LimpB="";
			LimpLB="";
			LimpRB="";
		    stop="";
			default="";
			stopRelaxed="";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			WalkF="";
			PlayerWalkF="";
			WalkLF="";
			PlayerWalkLF="";
			WalkRF="";
			PlayerWalkRF="";
			WalkL="";
			PlayerWalkL="";
			WalkR="";
			PlayerWalkR="";
			WalkB="";
			PlayerWalkB="";
			WalkLB="";
			PlayerWalkLB="";
			WalkRB="";
			PlayerWalkRB="";
			SlowF="";
			SlowFL="";
			SlowFR="";
			PlayerSlowF="";
			SlowB="";
			PlayerSlowB="";
			PlayerFastF="";
			Combat="";
			Civil = "";
			PrimaryWeapon = "";
			up="";
			down="";
			gear="";
			upDegree = "ManPosHandGunStand";
			PlayerSlowLF="";
			PlayerSlowRF="";
			PlayerSlowL="";
			PlayerSlowR="";
			PlayerSlowLB="";
			PlayerSlowRB="";
			FastF="";
			FastLF="";
			FastRF="";
			FastL="";
			FastR="";
			FastLB="";
			FastRB="";
			TactF="";
			TactLF="";
			TactRF="";
			TactL="";
			TactR="";
			TactLB="";
			TactRB="";
			TactB="";
			PlayerTactF="";
			PlayerTactLF="";
			PlayerTactRF="";
			PlayerTactL="";
			PlayerTactR="";
			PlayerTactLB="L";
			PlayerTactRB="";
			PlayerTactB="";
			Die="";
			stance = "ManStanceStand";

			PlayerStand = "";
			Stand="";
			Crouch="";
			PlayerCrouch="";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{	
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class HubShootingRangeKneel_move1;
		class FT_ogre_embark_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_airgrab: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_airgrab.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_kneel_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_kneel_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.2;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_kneel_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_kneel_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_kneel_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_kneel_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_kneel_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_kneel_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_kneel_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_kneel_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_embark_kneel_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_embark_kneel_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_airgrab: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_airgrab.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_kneel_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_kneel_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_kneel_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_kneel_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_kneel_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_kneel_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -2.8;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_kneel_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_kneel_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_kneel_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_kneel_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_embark_kneel_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_embark_kneel_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_kneel_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_kneel_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_kneel_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_kneel_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_kneel_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_kneel_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_kneel_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_kneel_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_kneel_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_kneel_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_kneel_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_kneel_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_airgrab: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_airgrab.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_embark_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_embark_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_airgrab: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_airgrab.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -2.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_kneel_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_kneel_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_kneel_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_kneel_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_kneel_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_kneel_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_kneel_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_kneel_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.9;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_kneel_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_kneel_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_embark_kneel_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_embark_kneel_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_kneel_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_kneel_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_kneel_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_kneel_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_kneel_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_kneel_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_kneel_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_kneel_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.1;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_kneel_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_kneel_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_kneel_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_kneel_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_airgrab: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_airgrab.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_embark_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_embark_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.2;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_airgrab: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_airgrab.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_above_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_above_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_above_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_above_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_kneel_front: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_kneel_front.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_kneel_back: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_kneel_back.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_kneel_left: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_kneel_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_embark_kneel_right: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_embark_kneel_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_disembark: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_embark\FT_atlas_disembark.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_disembark: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_embark\FT_ogre_disembark.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_disembark: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_embark\FT_stryder_disembark.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_class_disembark: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\atlas_class_embark\FT_atlas_class_disembark.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_ogre_class_disembark: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\ogre_class_embark\FT_ogre_class_disembark.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1.2;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stryder_class_disembark: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\stryder_class_embark\FT_stryder_class_disembark.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1.3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stalker_execution_facepunch_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_stalker_execution_facepunch_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -6.23;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stalker_execution_human_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_stalker_execution_human_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_melee_F_punch_a: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_melee_F_punch_a.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWrflDnon",
				0.01,
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stalker_crawl_execution_soldier_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_stalker_crawl_execution_soldier_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -4;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stalker_execution_human_left_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_stalker_execution_human_left_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -5.33;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_stalker_execution_human_behind_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_stalker_execution_human_behind_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -5.66;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_melee_L_tackle_a: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_melee_L_tackle_a.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -5.66;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWrflDnon",
				0.01,
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_melee_L_tackle_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_melee_L_tackle_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -5.66;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_melee_F_punch_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_melee_F_punch_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_gmod_looking_ragdoll: StandBase
		{
			boundingSphere = 5;
			//file = "War_on_the_frontier\FT_animations\human\FT_stalker_execution_human_v.rtm";
			file = "War_on_the_frontier\FT_animations\human\FT_gmod_looking_ragdoll.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_melee_b_neckSnap_a: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_melee_B_neckSnap_a.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1.8;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWrflDnon",
				0.01,
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_melee_b_neckSnap_v: StandBase
		{
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_melee_B_neckSnap_v.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -1.8;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			enableDirectControl=0;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_pilot_wallrun_right: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_right.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_right",
				0.01,
				"FT_pilot_wallrun_right_jump",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_right",
				0.01,
				"FT_pilot_jump",
				0.01,
				"FT_pilot_double_jump_f",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_left: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_left.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_left_jump",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_jump",
				0.01,
				"FT_pilot_double_jump_f",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_fall: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_fall.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_fall",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_fall",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_jump: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_land_f",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_b",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_land_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_b",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_l",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_land_l",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_l",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_r",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_land_r",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_r",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_static1: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump",
				0.01,
				"FT_pilot_jump_r",
				0.01,
				"FT_pilot_jump_l",
				0.01,
				"FT_pilot_jump_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_static1: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump",
				0.01,
				"FT_pilot_jump_r",
				0.01,
				"FT_pilot_jump_l",
				0.01,
				"FT_pilot_jump_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_static1: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump",
				0.01,
				"FT_pilot_jump_r",
				0.01,
				"FT_pilot_jump_l",
				0.01,
				"FT_pilot_jump_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_static1: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump",
				0.01,
				"FT_pilot_jump_r",
				0.01,
				"FT_pilot_jump_l",
				0.01,
				"FT_pilot_jump_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_static2: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_land_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_b",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_static2: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_land_l",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_l",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_static2: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_land_r",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_r",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_static2: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_land_f",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_double_jump_f: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_f.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_static",
				0.01,
				"FT_pilot_land_f",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f",
				0.01,
				"FT_pilot_jump_r_static2",
				0.01,
				"FT_pilot_jump_b_static2",
				0.01,
				"FT_pilot_jump_l_static2",
				0.01,
				"FT_pilot_jump_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_b: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_b.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_b_static",
				0.01,
				"FT_pilot_land_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b",
				0.01,
				"FT_pilot_jump_r_static2",
				0.01,
				"FT_pilot_jump_b_static2",
				0.01,
				"FT_pilot_jump_l_static2",
				0.01,
				"FT_pilot_jump_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_l: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_l.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_l_static",
				0.01,
				"FT_pilot_land_l",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l",
				0.01,
				"FT_pilot_jump_r_static2",
				0.01,
				"FT_pilot_jump_b_static2",
				0.01,
				"FT_pilot_jump_l_static2",
				0.01,
				"FT_pilot_jump_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_r: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_r.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_r_static",
				0.01,
				"FT_pilot_land_r",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r",
				0.01,
				"FT_pilot_jump_r_static2",
				0.01,
				"FT_pilot_jump_b_static2",
				0.01,
				"FT_pilot_jump_l_static2",
				0.01,
				"FT_pilot_jump_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_f_static: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_f_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_b_static: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_b_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_b",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_l_static: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_l_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_l",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_r_static: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_r_static.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_r",
				0.01,
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_f: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_f.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.3;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f_static",
				0.01,
				"FT_pilot_wallrun_left_jump",
				0.01,
				"FT_pilot_wallrun_right_jump",
				0.01,
				"FT_pilot_jump_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_b: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_b.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_b",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b_static",
				0.01,
				"FT_pilot_jump_b_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_l: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_l.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_l",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l_static",
				0.01,
				"FT_pilot_jump_l_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_r: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_r.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_r",
				0.01,
				"AmovPercMstpSrasWrflDnon",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnL",
				0.01,
				"AmovPercMstpSrasWrflDnon_turnR",
				0.01,
				"AmovPercMevaSrasWrflDf",
				0.01,
				"AmovPercMevaSrasWrflDfl",
				0.01,
				"AmovPercMevaSrasWrflDfr",
				0.01,
				"AmovPercMevaSrasWrflDl",
				0.01,
				"AmovPercMevaSrasWrflDr",
				0.01,
				"AmovPercMevaSrasWrflDb",
				0.01,
				"AmovPercMevaSrasWrflDbr",
				0.01,
				"AmovPercMevaSrasWrflDbl",
				0.01,
				"AmovPercMevaSrasWrflDf_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDfr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDl_ldst",
				0.01,
				"AmovPercMevaSrasWrflDr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDb_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbr_ldst",
				0.01,
				"AmovPercMevaSrasWrflDbl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDf",
				0.01,
				"AmovPercMrunSrasWrflDfl",
				0.01,
				"AmovPercMrunSrasWrflDfr",
				0.01,
				"AmovPercMrunSrasWrflDl",
				0.01,
				"AmovPercMrunSrasWrflDr",
				0.01,
				"AmovPercMrunSrasWrflDb",
				0.01,
				"AmovPercMrunSrasWrflDbr",
				0.01,
				"AmovPercMrunSrasWrflDbl",
				0.01,
				"AmovPercMrunSrasWrflDf_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDl_ldst",
				0.01,
				"AmovPercMrunSrasWrflDr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDb_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbr_ldst",
				0.01,
				"AmovPercMrunSrasWrflDbl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDf",
				0.01,
				"AmovPercMtacSrasWrflDfl",
				0.01,
				"AmovPercMtacSrasWrflDfr",
				0.01,
				"AmovPercMtacSrasWrflDl",
				0.01,
				"AmovPercMtacSrasWrflDr",
				0.01,
				"AmovPercMtacSrasWrflDb",
				0.01,
				"AmovPercMtacSrasWrflDbr",
				0.01,
				"AmovPercMtacSrasWrflDbl",
				0.01,
				"AmovPercMtacSrasWrflDf_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDfr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDl_ldst",
				0.01,
				"AmovPercMtacSrasWrflDr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDb_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbr_ldst",
				0.01,
				"AmovPercMtacSrasWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDf",
				0.01,
				"AmovPercMwlkSrasWrflDfl",
				0.01,
				"AmovPercMwlkSrasWrflDfr",
				0.01,
				"AmovPercMwlkSrasWrflDl",
				0.01,
				"AmovPercMwlkSrasWrflDr",
				0.01,
				"AmovPercMwlkSrasWrflDb",
				0.01,
				"AmovPercMwlkSrasWrflDbr",
				0.01,
				"AmovPercMwlkSrasWrflDbl",
				0.01,
				"AmovPercMwlkSrasWrflDf_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDl_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDb_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWrflDbl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDf",
				0.01,
				"AmovPercMevaSlowWrflDfl",
				0.01,
				"AmovPercMevaSlowWrflDfr",
				0.01,
				"AmovPercMevaSlowWrflDl",
				0.01,
				"AmovPercMevaSlowWrflDr",
				0.01,
				"AmovPercMevaSlowWrflDb",
				0.01,
				"AmovPercMevaSlowWrflDbr",
				0.01,
				"AmovPercMevaSlowWrflDbl",
				0.01,
				"AmovPercMevaSlowWrflDf_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDfr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDl_ldst",
				0.01,
				"AmovPercMevaSlowWrflDr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDb_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbr_ldst",
				0.01,
				"AmovPercMevaSlowWrflDbl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDf",
				0.01,
				"AmovPercMrunSlowWrflDfl",
				0.01,
				"AmovPercMrunSlowWrflDfr",
				0.01,
				"AmovPercMrunSlowWrflDl",
				0.01,
				"AmovPercMrunSlowWrflDr",
				0.01,
				"AmovPercMrunSlowWrflDb",
				0.01,
				"AmovPercMrunSlowWrflDbr",
				0.01,
				"AmovPercMrunSlowWrflDbl",
				0.01,
				"AmovPercMrunSlowWrflDf_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDfr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDl_ldst",
				0.01,
				"AmovPercMrunSlowWrflDr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDb_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbr_ldst",
				0.01,
				"AmovPercMrunSlowWrflDbl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDf",
				0.01,
				"AmovPercMtacSlowWrflDfl",
				0.01,
				"AmovPercMtacSlowWrflDfr",
				0.01,
				"AmovPercMtacSlowWrflDl",
				0.01,
				"AmovPercMtacSlowWrflDr",
				0.01,
				"AmovPercMtacSlowWrflDb",
				0.01,
				"AmovPercMtacSlowWrflDbr",
				0.01,
				"AmovPercMtacSlowWrflDbl",
				0.01,
				"AmovPercMtacSlowWrflDf_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDfr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDl_ldst",
				0.01,
				"AmovPercMtacSlowWrflDr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDb_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbr_ldst",
				0.01,
				"AmovPercMtacSlowWrflDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDf",
				0.01,
				"AmovPercMwlkSlowWrflDfl",
				0.01,
				"AmovPercMwlkSlowWrflDfr",
				0.01,
				"AmovPercMwlkSlowWrflDl",
				0.01,
				"AmovPercMwlkSlowWrflDr",
				0.01,
				"AmovPercMwlkSlowWrflDb",
				0.01,
				"AmovPercMwlkSlowWrflDbr",
				0.01,
				"AmovPercMwlkSlowWrflDbl",
				0.01,
				"AmovPercMwlkSlowWrflDf_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDl_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDb_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWrflDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r_static",
				0.01,
				"FT_pilot_jump_r_static2",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_left_jump: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_left_jump.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.8;
			minPlayTime = 0.8;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f",
				0.01,
				"FT_pilot_wallrun_left_jump",
				0.01,
				"FT_pilot_jump_static2",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left",
				0.01,
				"FT_pilot_jump",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_right_jump: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_right_jump.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -0.8;
			minPlayTime = 0.8;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f",
				0.01,
				"FT_pilot_wallrun_right_jump",
				0.01,
				"FT_pilot_jump_static2",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_right",
				0.01,
				"FT_pilot_jump",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_right_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_right_pistol.rtm";//FT_Pistol_Wallrun  actions = "LauncherStandActions";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_right_pistol",
				0.01,
				"FT_pilot_wallrun_right_jump_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_right_pistol",
				0.01,
				"FT_pilot_jump_pistol",
				0.01,
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_wallrun_right",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_left_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_left_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_left_jump_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_jump_pistol",
				0.01,
				"FT_pilot_double_jump_f_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_fall_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_fall_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_fall_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_jump_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_land_f_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_b_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_land_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_b_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_land_l_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_l_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_land_r_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_r_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_static1_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_pistol",
				0.01,
				"FT_pilot_jump_r_pistol",
				0.01,
				"FT_pilot_jump_l_pistol",
				0.01,
				"FT_pilot_jump_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_static1_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_pistol",
				0.01,
				"FT_pilot_jump_r_pistol",
				0.01,
				"FT_pilot_jump_l_pistol",
				0.01,
				"FT_pilot_jump_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_static1_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_pistol",
				0.01,
				"FT_pilot_jump_r_pistol",
				0.01,
				"FT_pilot_jump_l_pistol",
				0.01,
				"FT_pilot_jump_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_static1_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_pistol",
				0.01,
				"FT_pilot_jump_r_pistol",
				0.01,
				"FT_pilot_jump_l_pistol",
				0.01,
				"FT_pilot_jump_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_static2_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_land_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_b_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_static2_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_land_l_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_l_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_static2_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_land_r_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_r_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_static2_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_land_f_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_pistol",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_double_jump_f_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_f_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_static_pistol",
				0.01,
				"FT_pilot_land_f_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f_pistol",
				0.01,
				"FT_pilot_jump_r_static2_pistol",
				0.01,
				"FT_pilot_jump_b_static2_pistol",
				0.01,
				"FT_pilot_jump_l_static2_pistol",
				0.01,
				"FT_pilot_jump_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_b_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_b_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_b_static_pistol",
				0.01,
				"FT_pilot_land_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b_pistol",
				0.01,
				"FT_pilot_jump_r_static2_pistol",
				0.01,
				"FT_pilot_jump_b_static2_pistol",
				0.01,
				"FT_pilot_jump_l_static2_pistol",
				0.01,
				"FT_pilot_jump_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_l_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_l_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_l_static_pistol",
				0.01,
				"FT_pilot_land_l_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l_pistol",
				0.01,
				"FT_pilot_jump_r_static2_pistol",
				0.01,
				"FT_pilot_jump_b_static2_pistol",
				0.01,
				"FT_pilot_jump_l_static2_pistol",
				0.01,
				"FT_pilot_jump_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_r_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_r_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_r_static_pistol",
				0.01,
				"FT_pilot_land_r_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r_pistol",
				0.01,
				"FT_pilot_jump_r_static2_pistol",
				0.01,
				"FT_pilot_jump_b_static2_pistol",
				0.01,
				"FT_pilot_jump_l_static2_pistol",
				0.01,
				"FT_pilot_jump_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_f_static_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_f_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_b_static_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_b_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_b_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_l_static_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_l_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_l_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_r_static_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_r_static_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_r_pistol",
				0.01,
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_wallrun_right_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_f_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_f_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.3;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f_static_pistol",
				0.01,
				"FT_pilot_wallrun_left_jump_pistol",
				0.01,
				"FT_pilot_wallrun_right_jump_pistol",
				0.01,
				"FT_pilot_jump_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_b_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_b_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_b_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b_static_pistol",
				0.01,
				"FT_pilot_jump_b_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_l_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_l_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_l_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l_static_pistol",
				0.01,
				"FT_pilot_jump_l_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_r_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_r_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_r_pistol",
				0.01,
				"AmovPercMstpSrasWpstDnon",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.01,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.01,
				"AmovPercMevaSrasWpstDf",
				0.01,
				"AmovPercMevaSrasWpstDfl",
				0.01,
				"AmovPercMevaSrasWpstDfr",
				0.01,
				"AmovPercMevaSrasWpstDl",
				0.01,
				"AmovPercMevaSrasWpstDr",
				0.01,
				"AmovPercMevaSrasWpstDb",
				0.01,
				"AmovPercMevaSrasWpstDbr",
				0.01,
				"AmovPercMevaSrasWpstDbl",
				0.01,
				"AmovPercMevaSrasWpstDf_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDfr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDl_ldst",
				0.01,
				"AmovPercMevaSrasWpstDr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDb_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbr_ldst",
				0.01,
				"AmovPercMevaSrasWpstDbl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDf",
				0.01,
				"AmovPercMrunSrasWpstDfl",
				0.01,
				"AmovPercMrunSrasWpstDfr",
				0.01,
				"AmovPercMrunSrasWpstDl",
				0.01,
				"AmovPercMrunSrasWpstDr",
				0.01,
				"AmovPercMrunSrasWpstDb",
				0.01,
				"AmovPercMrunSrasWpstDbr",
				0.01,
				"AmovPercMrunSrasWpstDbl",
				0.01,
				"AmovPercMrunSrasWpstDf_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDfr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDl_ldst",
				0.01,
				"AmovPercMrunSrasWpstDr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDb_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbr_ldst",
				0.01,
				"AmovPercMrunSrasWpstDbl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDf",
				0.01,
				"AmovPercMtacSrasWpstDfl",
				0.01,
				"AmovPercMtacSrasWpstDfr",
				0.01,
				"AmovPercMtacSrasWpstDl",
				0.01,
				"AmovPercMtacSrasWpstDr",
				0.01,
				"AmovPercMtacSrasWpstDb",
				0.01,
				"AmovPercMtacSrasWpstDbr",
				0.01,
				"AmovPercMtacSrasWpstDbl",
				0.01,
				"AmovPercMtacSrasWpstDf_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDfr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDl_ldst",
				0.01,
				"AmovPercMtacSrasWpstDr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDb_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbr_ldst",
				0.01,
				"AmovPercMtacSrasWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDf",
				0.01,
				"AmovPercMwlkSrasWpstDfl",
				0.01,
				"AmovPercMwlkSrasWpstDfr",
				0.01,
				"AmovPercMwlkSrasWpstDl",
				0.01,
				"AmovPercMwlkSrasWpstDr",
				0.01,
				"AmovPercMwlkSrasWpstDb",
				0.01,
				"AmovPercMwlkSrasWpstDbr",
				0.01,
				"AmovPercMwlkSrasWpstDbl",
				0.01,
				"AmovPercMwlkSrasWpstDf_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDl_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDb_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWpstDbl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDf",
				0.01,
				"AmovPercMevaSlowWpstDfl",
				0.01,
				"AmovPercMevaSlowWpstDfr",
				0.01,
				"AmovPercMevaSlowWpstDl",
				0.01,
				"AmovPercMevaSlowWpstDr",
				0.01,
				"AmovPercMevaSlowWpstDb",
				0.01,
				"AmovPercMevaSlowWpstDbr",
				0.01,
				"AmovPercMevaSlowWpstDbl",
				0.01,
				"AmovPercMevaSlowWpstDf_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDfr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDl_ldst",
				0.01,
				"AmovPercMevaSlowWpstDr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDb_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbr_ldst",
				0.01,
				"AmovPercMevaSlowWpstDbl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDf",
				0.01,
				"AmovPercMrunSlowWpstDfl",
				0.01,
				"AmovPercMrunSlowWpstDfr",
				0.01,
				"AmovPercMrunSlowWpstDl",
				0.01,
				"AmovPercMrunSlowWpstDr",
				0.01,
				"AmovPercMrunSlowWpstDb",
				0.01,
				"AmovPercMrunSlowWpstDbr",
				0.01,
				"AmovPercMrunSlowWpstDbl",
				0.01,
				"AmovPercMrunSlowWpstDf_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDfr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDl_ldst",
				0.01,
				"AmovPercMrunSlowWpstDr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDb_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbr_ldst",
				0.01,
				"AmovPercMrunSlowWpstDbl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDf",
				0.01,
				"AmovPercMtacSlowWpstDfl",
				0.01,
				"AmovPercMtacSlowWpstDfr",
				0.01,
				"AmovPercMtacSlowWpstDl",
				0.01,
				"AmovPercMtacSlowWpstDr",
				0.01,
				"AmovPercMtacSlowWpstDb",
				0.01,
				"AmovPercMtacSlowWpstDbr",
				0.01,
				"AmovPercMtacSlowWpstDbl",
				0.01,
				"AmovPercMtacSlowWpstDf_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDfr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDl_ldst",
				0.01,
				"AmovPercMtacSlowWpstDr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDb_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbr_ldst",
				0.01,
				"AmovPercMtacSlowWpstDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDf",
				0.01,
				"AmovPercMwlkSlowWpstDfl",
				0.01,
				"AmovPercMwlkSlowWpstDfr",
				0.01,
				"AmovPercMwlkSlowWpstDl",
				0.01,
				"AmovPercMwlkSlowWpstDr",
				0.01,
				"AmovPercMwlkSlowWpstDb",
				0.01,
				"AmovPercMwlkSlowWpstDbr",
				0.01,
				"AmovPercMwlkSlowWpstDbl",
				0.01,
				"AmovPercMwlkSlowWpstDf_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDl_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDb_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWpstDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r_static_pistol",
				0.01,
				"FT_pilot_jump_r_static2_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_left_jump_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_left_jump_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.8;
			minPlayTime = 0.8;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_pistol",
				0.01,
				"FT_pilot_wallrun_left_jump_pistol",
				0.01,
				"FT_pilot_jump_static2_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_pistol",
				0.01,
				"FT_pilot_jump_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_right_jump_pistol: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_right_jump_pistol.rtm";
			actions = "FT_Pistol_Wallrun";
			duty = -1;
			speed = -0.8;
			minPlayTime = 0.8;
			weaponLowered=0;
			showHandGun=1;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 2;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_pistol",
				0.01,
				"FT_pilot_wallrun_right_jump_pistol",
				0.01,
				"FT_pilot_jump_static2_pistol",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_right_pistol",
				0.01,
				"FT_pilot_jump_pistol",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_right_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_right_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_right_launcher",
				0.01,
				"FT_pilot_wallrun_right_jump_launcer",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_right_launcher",
				0.01,
				"FT_pilot_jump_launcher",
				0.01,
				"FT_pilot_double_jump_f_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_left_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_left_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_left_jump_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_jump_launcher",
				0.01,
				"FT_pilot_double_jump_f_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_fall_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_fall_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.53;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = true;
			InterpolateTo[]=
			{
				"FT_pilot_wallrun_fall_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_fall_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_jump_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_land_f_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_b_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_land_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_b_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_land_l_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_l_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			minPlayTime = 0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_land_r_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_r_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_static1_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_launcher",
				0.01,
				"FT_pilot_jump_r_launcher",
				0.01,
				"FT_pilot_jump_l_launcher",
				0.01,
				"FT_pilot_jump_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_static1_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_launcher",
				0.01,
				"FT_pilot_jump_r_launcher",
				0.01,
				"FT_pilot_jump_l_launcher",
				0.01,
				"FT_pilot_jump_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_static1_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_launcher",
				0.01,
				"FT_pilot_jump_r_launcher",
				0.01,
				"FT_pilot_jump_l_launcher",
				0.01,
				"FT_pilot_jump_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_static1_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_jump_launcher",
				0.01,
				"FT_pilot_jump_r_launcher",
				0.01,
				"FT_pilot_jump_l_launcher",
				0.01,
				"FT_pilot_jump_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_b_static2_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_b_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_land_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_b_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_l_static2_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_l_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_land_l_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_l_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_r_static2_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_r_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_land_r_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_r_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_jump_static2_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_land_f_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_jump_launcher",
				0.01,
				//AmovPercMevaSrasWrflDf//sprint
				//AmovPercMrunSrasWrflDf
			};
			preload = 1;
		};
		class FT_pilot_double_jump_f_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_f_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_f_static_launcher",
				0.01,
				"FT_pilot_land_f_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f_launcher",
				0.01,
				"FT_pilot_jump_r_static2_launcher",
				0.01,
				"FT_pilot_jump_b_static2_launcher",
				0.01,
				"FT_pilot_jump_l_static2_launcher",
				0.01,
				"FT_pilot_jump_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_b_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_b_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_b_static_launcher",
				0.01,
				"FT_pilot_land_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b_launcher",
				0.01,
				"FT_pilot_jump_r_static2_launcher",
				0.01,
				"FT_pilot_jump_b_static2_launcher",
				0.01,
				"FT_pilot_jump_l_static2_launcher",
				0.01,
				"FT_pilot_jump_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_l_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_l_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_l_static_launcher",
				0.01,
				"FT_pilot_land_l_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l_launcher",
				0.01,
				"FT_pilot_jump_r_static2_launcher",
				0.01,
				"FT_pilot_jump_b_static2_launcher",
				0.01,
				"FT_pilot_jump_l_static2_launcher",
				0.01,
				"FT_pilot_jump_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_r_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_r_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.6;
			minPlayTime = 0.6;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_double_jump_r_static_launcher",
				0.01,
				"FT_pilot_land_r_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r_launcher",
				0.01,
				"FT_pilot_jump_r_static2_launcher",
				0.01,
				"FT_pilot_jump_b_static2_launcher",
				0.01,
				"FT_pilot_jump_l_static2_launcher",
				0.01,
				"FT_pilot_jump_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_f_static_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_f_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_b_static_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_b_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_b_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_l_static_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_l_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_l_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_double_jump_r_static_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_double_jump_r_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.33;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_r_launcher",
				0.01,
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_wallrun_right_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_f_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_f_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.3;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_f_static_launcher",
				0.01,
				"FT_pilot_wallrun_left_jump_launcher",
				0.01,
				"FT_pilot_wallrun_right_jump_launcher",
				0.01,
				"FT_pilot_jump_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_b_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_b_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_b_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_b_static_launcher",
				0.01,
				"FT_pilot_jump_b_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_l_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_l_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_l_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_l_static_launcher",
				0.01,
				"FT_pilot_jump_l_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_land_r_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_land_r_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.5;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_r_launcher",
				0.01,
				"AmovPercMstpSrasWlnrDnon",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnL",
				0.01,
				"AmovPercMstpSrasWlnrDnon_turnR",
				0.01,
				"AmovPercMevaSrasWlnrDf",
				0.01,
				"AmovPercMevaSrasWlnrDfl",
				0.01,
				"AmovPercMevaSrasWlnrDfr",
				0.01,
				"AmovPercMevaSrasWlnrDl",
				0.01,
				"AmovPercMevaSrasWlnrDr",
				0.01,
				"AmovPercMevaSrasWlnrDb",
				0.01,
				"AmovPercMevaSrasWlnrDbr",
				0.01,
				"AmovPercMevaSrasWlnrDbl",
				0.01,
				"AmovPercMevaSrasWlnrDf_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDl_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDb_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDf",
				0.01,
				"AmovPercMrunSrasWlnrDfl",
				0.01,
				"AmovPercMrunSrasWlnrDfr",
				0.01,
				"AmovPercMrunSrasWlnrDl",
				0.01,
				"AmovPercMrunSrasWlnrDr",
				0.01,
				"AmovPercMrunSrasWlnrDb",
				0.01,
				"AmovPercMrunSrasWlnrDbr",
				0.01,
				"AmovPercMrunSrasWlnrDbl",
				0.01,
				"AmovPercMrunSrasWlnrDf_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDl_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDb_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDf",
				0.01,
				"AmovPercMtacSrasWlnrDfl",
				0.01,
				"AmovPercMtacSrasWlnrDfr",
				0.01,
				"AmovPercMtacSrasWlnrDl",
				0.01,
				"AmovPercMtacSrasWlnrDr",
				0.01,
				"AmovPercMtacSrasWlnrDb",
				0.01,
				"AmovPercMtacSrasWlnrDbr",
				0.01,
				"AmovPercMtacSrasWlnrDbl",
				0.01,
				"AmovPercMtacSrasWlnrDf_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDl_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDb_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDf",
				0.01,
				"AmovPercMwlkSrasWlnrDfl",
				0.01,
				"AmovPercMwlkSrasWlnrDfr",
				0.01,
				"AmovPercMwlkSrasWlnrDl",
				0.01,
				"AmovPercMwlkSrasWlnrDr",
				0.01,
				"AmovPercMwlkSrasWlnrDb",
				0.01,
				"AmovPercMwlkSrasWlnrDbr",
				0.01,
				"AmovPercMwlkSrasWlnrDbl",
				0.01,
				"AmovPercMwlkSrasWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSrasWlnrDbl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDf",
				0.01,
				"AmovPercMevaSlowWlnrDfl",
				0.01,
				"AmovPercMevaSlowWlnrDfr",
				0.01,
				"AmovPercMevaSlowWlnrDl",
				0.01,
				"AmovPercMevaSlowWlnrDr",
				0.01,
				"AmovPercMevaSlowWlnrDb",
				0.01,
				"AmovPercMevaSlowWlnrDbr",
				0.01,
				"AmovPercMevaSlowWlnrDbl",
				0.01,
				"AmovPercMevaSlowWlnrDf_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDl_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDb_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMevaSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDf",
				0.01,
				"AmovPercMrunSlowWlnrDfl",
				0.01,
				"AmovPercMrunSlowWlnrDfr",
				0.01,
				"AmovPercMrunSlowWlnrDl",
				0.01,
				"AmovPercMrunSlowWlnrDr",
				0.01,
				"AmovPercMrunSlowWlnrDb",
				0.01,
				"AmovPercMrunSlowWlnrDbr",
				0.01,
				"AmovPercMrunSlowWlnrDbl",
				0.01,
				"AmovPercMrunSlowWlnrDf_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDl_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDb_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMrunSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDf",
				0.01,
				"AmovPercMtacSlowWlnrDfl",
				0.01,
				"AmovPercMtacSlowWlnrDfr",
				0.01,
				"AmovPercMtacSlowWlnrDl",
				0.01,
				"AmovPercMtacSlowWlnrDr",
				0.01,
				"AmovPercMtacSlowWlnrDb",
				0.01,
				"AmovPercMtacSlowWlnrDbr",
				0.01,
				"AmovPercMtacSlowWlnrDbl",
				0.01,
				"AmovPercMtacSlowWlnrDf_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDl_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDb_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMtacSlowWlnrDbl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDf",
				0.01,
				"AmovPercMwlkSlowWlnrDfl",
				0.01,
				"AmovPercMwlkSlowWlnrDfr",
				0.01,
				"AmovPercMwlkSlowWlnrDl",
				0.01,
				"AmovPercMwlkSlowWlnrDr",
				0.01,
				"AmovPercMwlkSlowWlnrDb",
				0.01,
				"AmovPercMwlkSlowWlnrDbr",
				0.01,
				"AmovPercMwlkSlowWlnrDbl",
				0.01,
				"AmovPercMwlkSlowWlnrDf_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDfr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDl_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDb_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbr_ldst",
				0.01,
				"AmovPercMwlkSlowWlnrDbl_ldst",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_double_jump_r_static_launcher",
				0.01,
				"FT_pilot_jump_r_static2_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_left_jump_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_left_jump_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.8;
			minPlayTime = 0.8;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_launcher",
				0.01,
				"FT_pilot_wallrun_left_jump_launcher",
				0.01,
				"FT_pilot_jump_static2_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_left_launcher",
				0.01,
				"FT_pilot_jump_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_wallrun_right_jump_launcher: StandBase
		{
			boundingSphere = 1;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_jump_static_launcher.rtm";
			actions = "FT_Launcher_Wallrun";
			duty = -1;
			speed = -0.8;
			minPlayTime = 0.8;
			weaponLowered=0;
			showHandGun=0;
			weaponIK = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 4;
			leaning="empty";
			aiming = "aimingDefault";
		    aimingBody = "aimingUpDefault";
			head = "noHead";
			variantsAI[] = {};
			looped = false;
			InterpolateTo[]=
			{
				"FT_pilot_land_f_launcher",
				0.01,
				"FT_pilot_wallrun_right_jump_launcher",
				0.01,
				"FT_pilot_jump_static2_launcher",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_pilot_wallrun_right_launcher",
				0.01,
				"FT_pilot_jump_launcher",
				0.01,
			};
			preload = 1;
		};
		class FT_pilot_demeter_crash_A: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\demeter\FT_pilot_demeter_crash_A.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -19.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_pilot_demeter_crash_B: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\demeter\FT_pilot_demeter_crash_B.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -19.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_pilot_demeter_crash_C: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\demeter\FT_pilot_demeter_crash_C.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -19.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_pilot_demeter_crash_D: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\demeter\FT_pilot_demeter_crash_D.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -19.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_grunt_trapped_dropGun: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\grunt_reactions\FT_grunt_trapped_dropGun.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -3;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_grunt_trapped_throwGun: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\grunt_reactions\FT_grunt_trapped_throwGun.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -17.5;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_grunt_trapped_kneel: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\grunt_reactions\FT_grunt_trapped_kneel.rtm";
			actions = "NoActions";
			duty = -1;
			speed = -21.6;
			headBobStrength=-1;
			headBobMode=1;
			enableMissile = 1;
			enableOptics = 0;
			forceAim=1;
			limitGunMovement=9.1000004;
			weaponLowered=0;
			showHandGun=0;
			disableWeapons=1;
            disableWeaponsLong=1;
			weaponIK = 0;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "noHead";
			variantsAI[] = {};
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 0;
		};
		class FT_atlas_static_1: StandBase
		{
			enableDirectControl=0;
			boundingSphere = 5;
			file = "War_on_the_frontier\FT_animations\human\FT_pilot_wallrun_right_jump.rtm";
			duty = -6.2;
			actions = "NoActions";
			leaning="empty";
			aiming = "empty";
		    aimingBody = "empty";
			head = "empty";
			variantsAI[] = {};
			speed = -3;
			disableWeapons = 1;
			relSpeedMin = 1;
			relSpeedMax = 1;
			looped = false;
			InterpolateTo[]=
			{
			};
			InterpolateFrom[]=
			{
			};
			preload = 1;
		};
		class FT_atlas_static_2: FT_atlas_static_1
		{};
		class FT_atlas_static_3: FT_atlas_static_1
		{};
		class FT_atlas_static_4: FT_atlas_static_1
		{};
		class FT_atlas_static_5: FT_atlas_static_1
		{};
		class FT_atlas_static_6: FT_atlas_static_1
		{};
		class FT_atlas_static_7: FT_atlas_static_1
		{};
		class FT_atlas_static_8: FT_atlas_static_1
		{};
		class FT_atlas_static_9: FT_atlas_static_1
		{};
		class FT_atlas_static_10: FT_atlas_static_1
		{};
		class FT_atlas_static_11: FT_atlas_static_1
		{};
		class FT_atlas_static_12: FT_atlas_static_1
		{};
		class FT_atlas_static_13: FT_atlas_static_1
		{};
		class FT_atlas_static_14: FT_atlas_static_1
		{};
		class FT_atlas_static_15: FT_atlas_static_1
		{};
		class FT_atlas_static_16: FT_atlas_static_1
		{};
		class FT_atlas_static_17: FT_atlas_static_1
		{};
		class FT_atlas_static_18: FT_atlas_static_1
		{};
		class FT_atlas_static_19: FT_atlas_static_1
		{};
		class FT_atlas_static_20: FT_atlas_static_1
		{};
		class FT_atlas_static_21: FT_atlas_static_1
		{};
		class FT_atlas_static_22: FT_atlas_static_1
		{};
		class FT_atlas_static_23: FT_atlas_static_1
		{};
		class FT_atlas_static_24: FT_atlas_static_1
		{};
		class FT_atlas_static_25: FT_atlas_static_1
		{};
		class FT_atlas_static_26: FT_atlas_static_1
		{};
		class FT_atlas_static_27: FT_atlas_static_1
		{};
		class FT_atlas_static_28: FT_atlas_static_1
		{};
		class FT_atlas_static_29: FT_atlas_static_1
		{};
		class FT_atlas_static_30: FT_atlas_static_1
		{};
		class FT_atlas_static_31: FT_atlas_static_1
		{};
		class FT_atlas_static_32: FT_atlas_static_1
		{};
		class FT_atlas_static_33: FT_atlas_static_1
		{};
		class FT_atlas_static_34: FT_atlas_static_1
		{};
		class FT_atlas_static_35: FT_atlas_static_1
		{};
		class FT_atlas_static_36: FT_atlas_static_1
		{};
		class FT_atlas_static_37: FT_atlas_static_1
		{};
		class FT_atlas_static_38: FT_atlas_static_1
		{};
		class FT_atlas_static_39: FT_atlas_static_1
		{};
		class FT_atlas_static_40: FT_atlas_static_1
		{};
		class FT_atlas_static_41: FT_atlas_static_1
		{};
		class FT_atlas_static_42: FT_atlas_static_1
		{};
		class FT_atlas_static_43: FT_atlas_static_1
		{};
		class FT_atlas_static_44: FT_atlas_static_1
		{};
		class FT_atlas_static_45: FT_atlas_static_1
		{};
		class FT_atlas_static_46: FT_atlas_static_1
		{};
		class FT_atlas_static_47: FT_atlas_static_1
		{};
		class FT_atlas_static_48: FT_atlas_static_1
		{};
		class FT_atlas_static_49: FT_atlas_static_1
		{};
		class FT_atlas_static_50: FT_atlas_static_1
		{};
		class FT_atlas_static_51: FT_atlas_static_1
		{};
		class FT_Atlas_Titanfall_Static_1: FT_atlas_static_1
		{};
		class FT_Atlas_Titanfall_Static_2: FT_atlas_static_1
		{};
		class FT_Atlas_Titanfall_Static_3: FT_atlas_static_1
		{};
		class FT_Atlas_Titanfall_Static_4: FT_atlas_static_1
		{};
		class FT_Atlas_Static_embark_above_left_20: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_above_left_20.rtm";
		};
		class FT_Atlas_Static_embark_above_left_50: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_above_left_50.rtm";
		};
		class FT_Atlas_Static_embark_above_right_20: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_above_right_20.rtm";
		};
		class FT_Atlas_Static_embark_above_right_50: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_above_right_50.rtm";
		};
		class FT_Atlas_Static_embark_above_20: FT_atlas_static_1
		{};
		class FT_Atlas_Static_embark_above_50: FT_atlas_static_1
		{};
		class FT_Atlas_Static_embark_airgrab_27: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_airgrab_27.rtm";
		};
		class FT_Atlas_Static_embark_airgrab_45: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_airgrab_45.rtm";
		};
		class FT_Atlas_Static_embark_airgrab_72: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_airgrab_72.rtm";
		};
		class FT_Atlas_Static_embark_back_23: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_back_23.rtm";
		};
		class FT_Atlas_Static_embark_back_42: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_back_42.rtm";
		};
		class FT_Atlas_Static_embark_back_51: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_back_51.rtm";
		};
		class FT_Atlas_Static_embark_back_69: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_back_69.rtm";
		};
		class FT_Atlas_Static_embark_back_85: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_back_85.rtm";
		};
		class FT_Atlas_Static_embark_front_25: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_front_25.rtm";
		};
		class FT_Atlas_Static_embark_front_33: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_front_33.rtm";
		};
		class FT_Atlas_Static_embark_front_46: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_front_46.rtm";
		};
		class FT_Atlas_Static_embark_front_69: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_front_69.rtm";
		};
		class FT_Atlas_Static_embark_kneel_back_29: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_back_29.rtm";
		};
		class FT_Atlas_Static_embark_kneel_back_57: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_back_57.rtm";
		};
		class FT_Atlas_Static_embark_kneel_back_70: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_back_70.rtm";
		};
		class FT_Atlas_Static_embark_kneel_front_20: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_front_20.rtm";
		};
		class FT_Atlas_Static_embark_kneel_front_41: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_front_41.rtm";
		};
		class FT_Atlas_Static_embark_kneel_front_57: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_front_57.rtm";
		};
		class FT_Atlas_Static_embark_kneel_left_16: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_left_16.rtm";
		};
		class FT_Atlas_Static_embark_kneel_left_30: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_left_30.rtm";
		};
		class FT_Atlas_Static_embark_kneel_left_43: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_left_43.rtm";
		};
		class FT_Atlas_Static_embark_kneel_left_55: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_left_55.rtm";
		};
		class FT_Atlas_Static_embark_kneel_left_72: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_left_72.rtm";
		};
		class FT_Atlas_Static_embark_kneel_right_23: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_right_23.rtm";
		};
		class FT_Atlas_Static_embark_kneel_right_34: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_right_34.rtm";
		};
		class FT_Atlas_Static_embark_kneel_right_49: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_right_49.rtm";
		};
		class FT_Atlas_Static_embark_kneel_right_69: FT_atlas_static_1
		{
			file = "War_on_the_frontier\FT_animations\static\FT_Atlas_Static_embark_kneel_right_69.rtm";
		};
		class FT_ogre_static_demeter_gateSmash_6: FT_atlas_static_1
		{};
		class FT_ogre_static_demeter_gateSmash_20: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_34: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_66: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_69: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_72: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_77: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_103: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_126: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_141: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_150: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_195: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_240: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_gateSmash_279: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_peptalk_53: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_peptalk_70: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_peptalk_79: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_peptalk_86: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_peptalk_91: FT_ogre_static_demeter_gateSmash_6
		{};
		class FT_ogre_static_demeter_peptalk_102: FT_ogre_static_demeter_gateSmash_6
		{};
		/*
		class FT_stalker_execution_facepunch_v: HubShootingRangeKneel_move1
		{
			actions="FT_stalker_execution_facepunch_v_actions";
			file="\FT_Stalker\animations\FT_stalker_execution_facepunch_v.rtm";	
			boundingSphere=6;
			speed=-6.23;
			looped=0;
			showHandGun=0;
			mask="BodyFull";
			leftHandIKBeg=0;
			leftHandIKCurve[]={};
			leftHandIKEnd=0;
			rightHandIKBeg=0;
			rightHandIKCurve[]={};
			rightHandIKEnd=0;
			weaponIK=0;
			enableOptics=0;
			showWeaponAim=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			leaning="empty";
			aimingBody="empty";
			aiming="empty";
			forceAim=1;
			limitGunMovement=9.1000004;
			head="headNo";
			headBobMode=2;
			headBobStrength=-1;
			canPullTrigger=0;
			enableDirectControl=0;
			weaponLowered=0;
			variantsPlayer[]={};
			variantsAI[]={};
			InterpolateTo[]={};
			ConnectTo[]={};
			preload = 1;
		};
		*/
	};
};