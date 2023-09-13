class CfgPatches {
	class FT_Stryder_Hitbox {
		author = "Leba";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_anims_f"};
	};
};


class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgEditorCategories
{
	class FT_stuff
	{
		displayName="War on the Frontier Stuff";
	};
};
class CfgEditorSubcategories
{
	class FT_Titans_class_Stryder_Hitbox
	{
		displayName="Stryder Hitbox";
	};
};

class CfgVehicleClasses
{
        class FT_Objects_wc
        {
            displayName = "FT_Objects";
        };
};
class CfgVehicles {
	class Bag_Base;
 
	class House;
	class House_F: House
	{
	};
	class FT_Stryder_hip: House_F
	{
		displayName="Stryder Hitbox";
		model="War_on_the_Frontier\FT_Stryder_Hitbox\FT_Stryder_hip.p3d";
		editorCategory="FT_stuff";
		editorSubcategory="FT_Titans_class_Stryder_Hitbox";
		scope=2;
		mapSize=20.27;
		vehicleClass="FT_Objects";
		destrType="DestructNo";
		accuracy=0.2;
		animated=0;
		armor=20000;
		cost=0;
		class AnimationSources
		{
			class FT_Stryder_xo16_walk_f {
				source = "user";
				animPeriod = 1.254;
				initPhase = 0;
			};
			class FT_Stryder_xo16_walk_b {
				source = "user";
				animPeriod = 1.254;
				initPhase = 0;
			};
			class FT_Stryder_xo16_idle {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class FT_Stryder_xo16_run {
				source = "user";
				animPeriod = 0.957;
				initPhase = 0;
			};
			class FT_Stryder_xo16_crouch_walk_f {
				source = "user";
				animPeriod = 1.254;
				initPhase = 0;
			};
			class FT_Stryder_xo16_crouch_walk_b {
				source = "user";
				animPeriod = 1.254;
				initPhase = 0;
			};
			class FT_Stryder_xo16_crouch_idle {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	class FT_Stryder_spineC: FT_Stryder_hip
	{
		model="War_on_the_Frontier\FT_Stryder_Hitbox\FT_Stryder_spineC.p3d";
	};
};