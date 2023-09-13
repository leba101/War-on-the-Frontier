class CfgPatches
{
	class FT_XO16
	{
		units[] = {"FT_XO16_w"};
		weapons[] = {"FT_XO16"};
		requiRedVersion = 0.1;
		requiRedAddons[] = {"A3_Data_F","A3_Weapons_F"};
		magazines[] = {"FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag"};
		ammo[] = {"FT_XO16_ammo","FT_XO16_ammo_HE"};
		author = "Leba";
	};
};
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;

class CfgVehicleClasses
{
	class FT_weap_class
	{
		displayName = "Project Titanfall weapons";
		author = "Leba";
	};
};
class CfgEditorCategories
{
	class FT_EditorCategory_Weapons
	{
		displayName = "Project Titanfall weapons";
	};
};
class CfgEditorSubcategories
{
	class FT_EditorSubcategory_Weap_AR
	{
		displayName = "Assault rifles";
	};
	class FT_EditorSubcategory_Weap_Pistols
	{
		displayName = "Pistols";
	};
	class FT_EditorSubcategory_Weap_DMR
	{
		displayName = "Designated Marksman Rifles";
	};
	class FT_EditorSubcategory_Weap_LMG
	{
		displayName = "Light Machine Guns";
	};
	class FT_EditorSubcategory_Weap_STG
	{
		displayName = "Shotguns";
	};
	class FT_EditorSubcategory_Weap_Grenadier
	{
		displayName = "Grenadier weapons";
	};
};


class CfgAmmo
{
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class B_12Gauge_Slug;
	class BulletBase;
	class G_40mm_HE;
	class B_30mm_HE;
	class B_30mm_APFSDS_Tracer_Red;
	class FT_XO16_ammo:B_30mm_APFSDS_Tracer_Red
	{
		//explosionAngle = 30;
		hit=100;
		caliber = 11.111;
		//explosive = 0.3;
	};
	class FT_XO16_ammo_HE:B_30mm_HE
	{
		explosionAngle = 70;
		hit=100;
		caliber = 2.8;
		explosive = 0.6;
	};
};
class CfgMagazines
{
	class SmokeShell;
	class CA_LauncherMagazine;
	class CA_Magazine;
	class FT_40Rnd_XO16_Mag: CA_Magazine
	{
		author = "Leba";
		scope = 2;
		displayName = "60Rnd XO16 Drum";
		picture = "\A3\weapons_F\data\UI\m_20stanag_ca.paa";
		ammo = "FT_XO16_ammo";
		count = 60;
		type = 16;
		initSpeed = 400;
		mass = 8;
		tracersEvery = 0;
		lastRoundsTracer = 60;
		aiAmmoUsageFlags = "64 + 128";
	};
	class FT_40Rnd_HE_XO16_Mag: CA_Magazine
	{
		author = "Leba";
		scope = 2;
		displayName = "60Rnd(HE) XO16 Drum";
		picture = "\A3\weapons_F\data\UI\m_20stanag_ca.paa";
		ammo = "FT_XO16_ammo_HE";
		count = 60;
		type = 16;
		initSpeed = 400;
		mass = 8;
		tracersEvery = 0;
		lastRoundsTracer = 60;
		aiAmmoUsageFlags = "64 + 128";
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Base_F;
	class FT_Rifle_Base: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class FT_XO16: FT_Rifle_Base
	{
		scope = 2;
		author = "Leba";
		FT_Weapon = "XO16";
		FT_Ammo1 = "FT_40Rnd_XO16_Mag";
		FT_Ammo2 = "FT_40Rnd_HE_XO16_Mag";
		_generalMacro = "FT_XO16";
		model = "\War_on_the_Frontier\FT_XO16\FT_XO16.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\War_on_the_Frontier\FT_XO16\data\xo16_co.paa"};
		//handAnim[] = {"atlas_class_Skeleton","\FT_Titans\animations\atlas_class\splitter_rifle\FT_Atlas_class_splitter_rifle_idle.rtm"};
		reloadAction = "FT_40mm_ReloadGests";
		picture = "";
		magazines[] = {"FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag"};
		displayname = "XOTBR-16 Chaingun";
		descriptionShort = "XOTBR-16";
		selectionFireAnim = "muzzleFlash";
		recoil = "FT_Titan_Recoil";
		recoilProne = "FT_Titan_Recoil";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.25118864,1,5};
		class GunParticles
		{
			class SecondEffect
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "RifleAssaultCloud";
			};
		};
		class Library
		{
			libTextDesc = "none";
		};
		//reloadMagazineSound[] = {"\FT_Titan_weapons\FT_XO16\sound\FT_XO16_reload.ogg",1,1,10};
		soundBullet[] = {};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireLightDiffuse[] = {0.13,0.1,0.1};
		fireLightAmbient[] = {0.05,0.05,0.05};
		modes[] = {"Single","single_medium_optics1","single_far_optics2","FullAuto","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",0.56234133,1,30};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",0.56234133,1.2,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.99526,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.99526,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.99526,1,1500};
				soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33,};
				/*
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.5848932,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				*/
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.0087;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",0.8,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",0.8,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.99526,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.99526,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.99526,1,1500};
				soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33,};
				/*
				class SoundTails
				{
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",1.5848932,1,2000};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",1,1,2000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
				*/
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.8912509,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.8912509,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.1;
			dispersion = 0.0087;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 6;
			aiBurstTerminable = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		inertia = 0.5;
		aimTransitionSpeed = 1;
		dexterity = 1.5;
		initSpeed = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source = "ammorandom";
				weapon = "FT_XO16";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class FT_XO16_1: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "FT_XO16";
		vehicleClass = "FT_weap_class";
		editorCategory = "FT_EditorCategory_Weapons";
		editorSubcategory = "FT_EditorSubcategory_Weap_AR";
		class TransportWeapons
		{
			class FT_XO16_1
			{
				weapon = "FT_XO16";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class FT_XO16_mag
			{
				magazine = "FT_40Rnd_XO16_Mag";
				count = 4;
			};
		};
	};
};
