class CfgPatches
{
	class FT_G2A4
	{
		units[] = {"FT_G2A4_w"};
		weapons[] = {"FT_G2A4"};
		requiRedVersion = 0.1;
		requiRedAddons[] = {"A3_Data_F","A3_Weapons_F"};
		magazines[] = {"FT_40Rnd_G2A4_Mag","FT_40Rnd_HE_G2A4_Mag"};
		ammo[] = {"FT_G2A4_ammo","FT_G2A4_ammo_HE"};
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
		displayName = "War on the Frontier weapons";
		author = "Leba";
	};
};
class CfgEditorCategories
{
	class FT_EditorCategory_Weapons
	{
		displayName = "War on the Frontier weapons";
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
	class B_762x51_Ball;
	class FT_G2A4_ammo:B_762x51_Ball
	{
		hit=6;
	};
};
class CfgMagazines
{
	class SmokeShell;
	class CA_LauncherMagazine;
	class CA_Magazine;
	class FT_14Rnd_G2A4_Mag: CA_Magazine
	{
		author = "Leba";
		scope = 2;
		displayName = "14Rnd G2A4 Mag";
		picture = "\A3\weapons_F\data\UI\m_20stanag_ca.paa";
		ammo = "FT_G2A4_ammo";
		count = 14;
		type = 16;
		initSpeed = 800;
		mass = 8;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		aiAmmoUsageFlags = "64";
	};
	class FT_14Rnd_G2A4_Mag_Tracer: FT_14Rnd_G2A4_Mag
	{
		author = "Leba";
		scope = 2;
		displayName = "14Rnd G2A4 Mag(Tracer)";
		picture = "\A3\weapons_F\data\UI\m_20stanag_ca.paa";
		ammo = "FT_G2A4_ammo";
		tracersEvery = 0;
		lastRoundsTracer = 14;
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
	class FT_G2A4: FT_Rifle_Base
	{
		scope = 2;
		author = "Leba";
		FT_Weapon = "G2A4";
		FT_Ammo1 = "FT_14Rnd_G2A4_Mag";
		FT_Ammo2 = "FT_14Rnd_G2A4_Mag_Tracer";
		_generalMacro = "FT_G2A4";
		model = "\War_on_the_Frontier\FT_Weapons\FT_G2A4\FT_G2A4.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\War_on_the_Frontier\FT_Weapons\FT_G2A4\data\ft_g2a4_camo1_co.paa","\War_on_the_Frontier\FT_Weapons\FT_G2A4\data\ft_g2a4_camo2_co.paa","\War_on_the_Frontier\FT_Weapons\FT_G2A4\data\ft_g2a4_camo3_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\War_on_the_Frontier\FT_Weapons\FT_G2A4\animations\FT_G2A4_Hold.rtm"};
		reloadAction = "GestureReloadDMR06";//needs to have one for itself but i don't have time to make it
		picture = "";
		magazines[] = {"FT_14Rnd_G2A4_Mag","FT_14Rnd_G2A4_Mag_Tracer"};
		displayname = "G2A4";
		descriptionShort = "G2A4";
		selectionFireAnim = "muzzleFlash";
		recoil = "recoil_dmr_06";
		recoilProne = "assaultRifleBase";
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
		//reloadMagazineSound[] = {"\FT_Titan_weapons\FT_G2A4\sound\FT_G2A4_reload.ogg",1,1,10};
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
			dispersion = 0.00087;
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
		inertia = 0.5;
		aimTransitionSpeed = 1;
		dexterity = 1.5;
		initSpeed = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 6;
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source = "ammorandom";
				weapon = "FT_G2A4";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class FT_G2A4_1: Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "FT_G2A4";
		vehicleClass = "FT_weap_class";
		editorCategory = "FT_EditorCategory_Weapons";
		editorSubcategory = "FT_EditorSubcategory_Weap_AR";
		class TransportWeapons
		{
			class FT_G2A4_1
			{
				weapon = "FT_G2A4";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class FT_G2A4_mag
			{
				magazine = "FT_40Rnd_G2A4_Mag";
				count = 4;
			};
		};
	};
};
