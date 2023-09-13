class CfgPatches {
	class FT_Healthbar {
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
		displayName="Project Titanfall Stuff";
	};
};
class CfgEditorSubcategories
{
	class FT_Titans_Healthbar
	{
		displayName="Titan Healtbar";
	};
};

class CfgVehicleClasses
{
        class FT_Objects_wc
        {
            displayName = "FT_Objects";
        };
};
class CfgVehicles 
{
	class Bag_Base;
 
	class House;
	class House_F: House
	{
	};
	class FT_Ogre_Class_Healthbar: House_F
	{
		displayName="Ogre Class Healtbar";
		model="War_on_the_Frontier\FT_Healthbar\FT_Ogre_Class_Healthbar.p3d";
		editorCategory="FT_stuff";
		editorSubcategory="FT_Titans_Healthbar";
		scope=2;
		mapSize=20.27;
		vehicleClass="FT_Objects";
		destrType="DestructNo";
		accuracy=0.2;
		animated=0;
		armor=20000;
		cost=0;
		class UVAnimations
		{
			// You can name it whatever you like since it is not working with animationPhase or animate command
			class Health_1
			{
				type= translation;
				source= FT_Ogre_Class_Health;
				section= pov_health1;
				minValue= 0;
				maxValue= 300;
				offset0[]= {0,0};
				offset1[]= {0.51,0};
			};
			class Health_2
			{
				type= translation;
				source= FT_Ogre_Class_Health;
				section= pov_health2;
				minValue= 300;
				maxValue= 600;
				offset0[]= {0,0};
				offset1[]= {0.51,0};
			};
			class Health_3
			{
				type= translation;
				source= FT_Ogre_Class_Health;
				section= pov_health3;
				minValue= 600;
				maxValue= 900;
				offset0[]= {0,0};
				offset1[]= {0.51,0};
			};
			class Health_4
			{
				type= translation;
				source= FT_Ogre_Class_Health;
				section= pov_health4;
				minValue= 900;
				maxValue= 1200;
				offset0[]= {0,0};
				offset1[]= {0.51,0};
			};
			class Health_5
			{
				type= translation;
				source= FT_Ogre_Class_Health;
				section= pov_health5;
				minValue= 1200;
				maxValue= 1500;
				offset0[]= {0,0};
				offset1[]= {0.51,0};
			};
		};
		class AnimationSources
		{
			class FT_Ogre_Class_Health
			{
				source			= user;
				initPhase		= 0;
				animPeriod		= 1500;
			};
		};
	};
	class FT_Atlas_Class_Healthbar: FT_Ogre_Class_Healthbar
	{
		displayName="Atlas Class Healtbar";
		model="War_on_the_Frontier\FT_Healthbar\FT_Atlas_Class_Healthbar.p3d";
	};
	class FT_Stryder_Class_Healthbar: FT_Ogre_Class_Healthbar
	{
		displayName="Stryder Class Healtbar";
		model="War_on_the_Frontier\FT_Healthbar\FT_Stryder_Class_Healthbar.p3d";
	};
};