class CfgPatches {
	class FT_Titans_Stryder {
		author = "Leba";
		units[] = {"FT_Stryder","FT_Stryder_MCOR"};
		weapons[] = {
			"FT_Stryder_form",
			"FT_Stryder_MCOR_form",
			"FT_Stryder_lights_blue".
			"FT_Stryder_lights_red".
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_anims_f",};
	};
};

class CfgMovesBasic
{
	class Default;
	class StandBase;
	class BlendAnims;
	class ManActions
	{
		Ion_ReloadGest[]=
		{
			"Ion_ReloadGest",
			"Gesture"
		};
		FT_40mm_ReloadGest[]=
		{
			"FT_40mm_ReloadGest",
			"Gesture"
		};
	};
	class Actions
	{
		class Default;
		class NoActions;
		class Acts_CarFixingWheel_actions;
		class FT_Stryder_xo16_moveSet: NoActions
		{
			turnSpeed=4;
			LimpF="FT_Stryder_xo16_walk_F";
			LimpLF="FT_Stryder_xo16_walk_FL";
			LimpRF="FT_Stryder_xo16_walk_FR";
			LimpL="FT_Stryder_xo16_walk_L";
			LimpR="FT_Stryder_xo16_walk_R";
			LimpB="FT_Stryder_xo16_walk_B";
			LimpLB="FT_Stryder_xo16_walk_BL";
			LimpRB="FT_Stryder_xo16_walk_BR";
		    stop="FT_Stryder_xo16_idle";
			default="FT_Stryder_xo16_idle";
			stopRelaxed="FT_Stryder_xo16_idle";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			WalkF="FT_Stryder_xo16_walk_F";
			PlayerWalkF="FT_Stryder_xo16_walk_F";
			WalkLF="FT_Stryder_xo16_walk_FL";
			PlayerWalkLF="FT_Stryder_xo16_walk_FL";
			WalkRF="FT_Stryder_xo16_walk_FR";
			PlayerWalkRF="FT_Stryder_xo16_walk_FR";
			WalkL="FT_Stryder_xo16_walk_L";
			PlayerWalkL="FT_Stryder_xo16_walk_L";
			WalkR="FT_Stryder_xo16_walk_R";
			PlayerWalkR="FT_Stryder_xo16_walk_R";
			WalkB="FT_Stryder_xo16_walk_B";
			PlayerWalkB="FT_Stryder_xo16_walk_B";
			WalkLB="FT_Stryder_xo16_walk_BL";
			PlayerWalkLB="FT_Stryder_xo16_walk_BL";
			WalkRB="FT_Stryder_xo16_walk_BR";
			PlayerWalkRB="FT_Stryder_xo16_walk_BR";
			SlowF="FT_Stryder_xo16_walk_Fast";
			SlowFL="FT_Stryder_xo16_walk_Fast_FL";
			SlowFR="FT_Stryder_xo16_walk_Fast_FR";
			PlayerSlowF="FT_Stryder_xo16_walk_Fast";
			SlowB="FT_Stryder_xo16_walk_B";
			PlayerSlowB="FT_Stryder_xo16_walk_B";
			PlayerFastF="FT_Stryder_xo16_walk_Fast";
			Combat="FT_Stryder_xo16_idle";
			Civil = "";
			PrimaryWeapon = "FT_Stryder_xo16_idle";
			up="FT_Stryder_xo16_crouch_idle";
			down="FT_Stryder_xo16_crouch_idle";
			gear="FT_Stryder_xo16_idle";
			upDegree = "ManPosCombat";
			PlayerSlowLF="FT_Stryder_xo16_walk_Fast_FL";
			PlayerSlowRF="FT_Stryder_xo16_walk_Fast_FR";
			PlayerSlowL="FT_Stryder_xo16_walk_L";
			PlayerSlowR="FT_Stryder_xo16_walk_R";
			PlayerSlowLB="FT_Stryder_xo16_walk_BL";
			PlayerSlowRB="FT_Stryder_xo16_walk_BR";
			FastF="FT_Stryder_xo16_walk_Fast";
			FastLF="FT_Stryder_xo16_walk_Fast_FL";
			FastRF="FT_Stryder_xo16_walk_Fast_FR";
			FastL="FT_Stryder_xo16_walk_L";
			FastR="FT_Stryder_xo16_walk_R";
			FastLB="FT_Stryder_xo16_walk_BL";
			FastRB="FT_Stryder_xo16_walk_BR";
			TactF="FT_Stryder_xo16_walk_F";
			TactLF="FT_Stryder_xo16_walk_FL";
			TactRF="FT_Stryder_xo16_walk_FR";
			TactL="FT_Stryder_xo16_walk_L";
			TactR="FT_Stryder_xo16_walk_R";
			TactLB="FT_Stryder_xo16_walk_BL";
			TactRB="FT_Stryder_xo16_walk_BR";
			TactB="FT_Stryder_xo16_walk_B";
			PlayerTactF="FT_Stryder_xo16_walk_F";
			PlayerTactLF="FT_Stryder_xo16_walk_FL";
			PlayerTactRF="FT_Stryder_xo16_walk_FR";
			PlayerTactL="FT_Stryder_xo16_walk_L";
			PlayerTactR="FT_Stryder_xo16_walk_R";
			PlayerTactLB="FT_Stryder_xo16_walk_BL";
			PlayerTactRB="FT_Stryder_xo16_walk_BR";
			PlayerTactB="FT_Stryder_xo16_walk_B";
			Die="FT_Stryder_xo16_Death";
			//Stand="FT_Stryder_xo16_idle";
			//stance = "ManStanceStand";

			PlayerStand = "";
			Stand="FT_Stryder_xo16_crouch_idle";
			Crouch="FT_Stryder_xo16_crouch_idle";
			PlayerCrouch="FT_Stryder_xo16_crouch_idle";
			stance = "ManStanceStand";
			//Stand="Stryder_crouch_idle";
			//up="Stryder_crouch_idle";
			//PlayerStand="Stryder_stand_idle";
			//PlayerCrouch="Stryder_crouch_idle";
			//Stand="Stryder_stand_idle";
			//Crouch="FT_Stryder_xo16_crouch_idle";
			//StartFreefall="";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Walk_R: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_R";
			Up="FT_Stryder_xo16_walk_R";
			Crouch="FT_Stryder_xo16_walk_R";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Walk_L: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_L";
			Up="FT_Stryder_xo16_walk_L";
			Crouch="FT_Stryder_xo16_walk_L";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Fast: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_Fast";
			Up="FT_Stryder_xo16_walk_Fast";
			Crouch="FT_Stryder_xo16_walk_Fast";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Fast_FL: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_Fast_FL";
			Up="FT_Stryder_xo16_walk_Fast_FL";
			Crouch="FT_Stryder_xo16_walk_Fast_FL";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Fast_FR: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_Fast_FL";
			Up="FT_Stryder_xo16_walk_Fast_FL";
			Crouch="FT_Stryder_xo16_walk_Fast_FL";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Walk_FL: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_FL";
			Up="FT_Stryder_xo16_walk_FL";
			Crouch="FT_Stryder_xo16_walk_FL";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Walk_FR: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_FR";
			Up="FT_Stryder_xo16_walk_FR";
			Crouch="FT_Stryder_xo16_walk_FR";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Walk_BL: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_BL";
			Up="FT_Stryder_xo16_walk_BL";
			Crouch="FT_Stryder_xo16_walk_BL";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};
		class FT_Stryder_xo16_moveSet_ActionStances_Walk_BR: FT_Stryder_xo16_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_BR";
			Up="FT_Stryder_xo16_walk_BR";
			Crouch="FT_Stryder_xo16_walk_BR";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle";
		};

		class FT_Stryder_xo16_crouch_moveSet: NoActions
		{
			turnSpeed=4;
			LimpF="FT_Stryder_xo16_crouch_walk";
			LimpLF="FT_Stryder_xo16_crouch_walk_FL";
			LimpRF="FT_Stryder_xo16_crouch_walk_FR";
			LimpL="FT_Stryder_xo16_crouch_walk_L";
			LimpR="FT_Stryder_xo16_crouch_walk_R";
			LimpB="FT_Stryder_xo16_crouch_walk_B";
			LimpLB="FT_Stryder_xo16_crouch_walk_BL";
			LimpRB="FT_Stryder_xo16_crouch_walk_BR";
		    stop="FT_Stryder_xo16_crouch_idle";
			default="FT_Stryder_xo16_crouch_idle";
			stopRelaxed="FT_Stryder_xo16_crouch_idle";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			WalkF="FT_Stryder_xo16_crouch_walk_F";
			PlayerWalkF="FT_Stryder_xo16_crouch_walk_F";
			WalkLF="FT_Stryder_xo16_crouch_walk_FL";
			PlayerWalkLF="FT_Stryder_xo16_crouch_walk_FL";
			WalkRF="FT_Stryder_xo16_crouchwalk_FR";
			PlayerWalkRF="FT_Stryder_xo16_crouch_walk_FR";
			WalkL="FT_Stryder_xo16_crouch_walk_L";
			PlayerWalkL="FT_Stryder_xo16_crouch_walk_L";
			WalkR="FT_Stryder_xo16_crouch_walk_R";
			PlayerWalkR="FT_Stryder_xo16_crouch_walk_R";
			WalkB="FT_Stryder_xo16_crouch_walk_B";
			PlayerWalkB="FT_Stryder_xo16_crouch_walk_B";
			WalkLB="FT_Stryder_xo16_crouch_walk_BL";
			PlayerWalkLB="FT_Stryder_xo16_crouch_walk_BL";
			WalkRB="FT_Stryder_xo16_crouch_walk_BR";
			PlayerWalkRB="FT_Stryder_xo16_crouch_walk_BR";
			SlowF="FT_Stryder_xo16_crouch_walk_F";
			SlowFL="FT_Stryder_xo16_crouch_walk_FL";
			SlowFR="FT_Stryder_xo16_crouch_walk_FR";
			PlayerSlowF="FT_Stryder_xo16_crouch_walk_F";
			SlowB="FT_Stryder_xo16_crouch_walk_B";
			PlayerSlowB="FT_Stryder_xo16_crouch_walk_B";
			PlayerFastF="FT_Stryder_xo16_crouch_walk_F";
			Combat="FT_Stryder_xo16_crouch_idle";
			Civil = "";
			PrimaryWeapon = "FT_Stryder_xo16_crouch_idle";
			up="FT_Stryder_xo16_idle";
			down="FT_Stryder_xo16_idle";
			gear="FT_Stryder_xo16_crouch_idle";
			upDegree = "ManPosCrouch";	
			PlayerSlowLF="FT_Stryder_xo16_crouch_walk_FL";
			PlayerSlowRF="FT_Stryder_xo16_crouch_walk_FR";
			PlayerSlowL="FT_Stryder_xo16_crouch_walk_L";
			PlayerSlowR="FT_Stryder_xo16_crouch_walk_R";
			PlayerSlowLB="FT_Stryder_xo16_crouch_walk_BL";
			PlayerSlowRB="FT_Stryder_xo16_crouch_walk_BR";
			FastF="FT_Stryder_xo16_crouch_walk_F";
			FastLF="FT_Stryder_xo16_crouch_walk_FL";
			FastRF="FT_Stryder_xo16_crouch_walk_FR";
			FastL="FT_Stryder_xo16_crouch_walk_L";
			FastR="FT_Stryder_xo16_crouch_walk_R";
			FastLB="FT_Stryder_xo16_crouch_walk_BL";
			FastRB="FT_Stryder_xo16_crouch_walk_BR";
			TactF="FT_Stryder_xo16_crouch_walk_F";
			TactLF="FT_Stryder_xo16_crouch_walk_FL";
			TactRF="FT_Stryder_xo16_crouch_walk_FR";
			TactL="FT_Stryder_xo16_crouch_walk_L";
			TactR="FT_Stryder_xo16_crouch_walk_R";
			TactLB="FT_Stryder_xo16_crouch_walk_BL";
			TactRB="FT_Stryder_xo16_crouch_walk_BR";
			TactB="FT_Stryder_xo16_crouch_walk_B";
			PlayerTactF="FT_Stryder_xo16_crouch_walk_F";
			PlayerTactLF="FT_Stryder_xo16_crouch_walk_FL";
			PlayerTactRF="FT_Stryder_xo16_crouch_walk_FR";
			PlayerTactL="FT_Stryder_xo16_crouch_walk_L";
			PlayerTactR="FT_Stryder_xo16_crouch_walk_R";
			PlayerTactLB="FT_Stryder_xo16_crouch_walk_BL";
			PlayerTactRB="FT_Stryder_xo16_crouch_walk_BR";
			PlayerTactB="FT_Stryder_xo16_crouch_walk_B";
			Die="FT_Stryder_xo16_crouch_Death";
			//Stand="FT_Stryder_xo16_crouch_idle";
			stance = "ManStanceCrouch";

			//Stand="FT_Stryder_xo16_idle";
			//Crouch="FT_Stryder_xo16_crouch_idle";
			PlayerStand = "FT_Stryder_xo16_idle";
			Stand="FT_Stryder_xo16_idle";
			Crouch="FT_Stryder_xo16_crouch_idle";
			PlayerCrouch="FT_Stryder_xo16_crouch_idle";
			//stance = "ManStanceStand";
			//StartFreefall="";
		};
		class FT_Stryder_xo16_crouch_moveSet_ActionStances_Walk_R: FT_Stryder_xo16_crouch_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_crouch_walk_R";
			Up="FT_Stryder_xo16_crouch_walk_R";
			Crouch="FT_Stryder_xo16_crouch_walk_R";
			AdjustB="";
			Stand="FT_Stryder_xo16_crouch_idle";
		};
		class FT_Stryder_xo16_crouch_moveSet_ActionStances_Walk_L: FT_Stryder_xo16_crouch_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_crouch_walk_L";
			Up="FT_Stryder_xo16_crouch_walk_L";
			Crouch="FT_Stryder_xo16_crouch_walk_L";
			AdjustB="";
			Stand="FT_Stryder_xo16_crouch_idle";
		};
		class FT_Stryder_xo16_moveSet_crouch_ActionStances_Walk_FL: FT_Stryder_xo16_crouch_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_crouch_walk_FL";
			Up="FT_Stryder_xo16_crouch_walk_FL";
			Crouch="FT_Stryder_xo16_crouch_walk_FL";
			AdjustB="";
			Stand="FT_Stryder_xo16_crouch_idle";
		};
		class FT_Stryder_xo16_moveSet_crouch_ActionStances_Walk_FR: FT_Stryder_xo16_crouch_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_crouch_walk_FR";
			Up="FT_Stryder_xo16_crouch_walk_FR";
			Crouch="FT_Stryder_xo16_crouch_walk_FR";
			AdjustB="";
			Stand="FT_Stryder_xo16_crouch_idle";
		};
		class FT_Stryder_xo16_moveSet_crouch_ActionStances_Walk_BL: FT_Stryder_xo16_crouch_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_crouch_walk_BL";
			Up="FT_Stryder_xo16_crouch_walk_BL";
			Crouch="FT_Stryder_xo16_crouch_walk_BL";
			AdjustB="";
			Stand="FT_Stryder_xo16_crouch_idle";
		};
		class FT_Stryder_xo16_moveSet_crouch_ActionStances_Walk_BR: FT_Stryder_xo16_crouch_moveSet
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_crouch_walk_BR";
			Up="FT_Stryder_xo16_crouch_walk_BR";
			Crouch="FT_Stryder_xo16_crouch_walk_BR";
			AdjustB="";
			Stand="FT_Stryder_xo16_crouch_idle";
		};
		class FT_Stryder_xo16_moveSet_AI: NoActions
		{
			turnSpeed=4;
			LimpF="FT_Stryder_xo16_walk_F_AI";
			LimpLF="FT_Stryder_xo16_walk_FL_AI";
			LimpRF="FT_Stryder_xo16_walk_FR_AI";
			LimpL="FT_Stryder_xo16_walk_L_AI";
			LimpR="FT_Stryder_xo16_walk_R_AI";
			LimpB="FT_Stryder_xo16_walk_B_AI";
			LimpLB="FT_Stryder_xo16_walk_BL_AI";
			LimpRB="FT_Stryder_xo16_walk_BR_AI";
		    stop="FT_Stryder_xo16_idle_AI";
			default="FT_Stryder_xo16_idle_AI";
			stopRelaxed="FT_Stryder_xo16_idle_AI";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			WalkF="FT_Stryder_xo16_walk_F_AI";
			PlayerWalkF="FT_Stryder_xo16_walk_F_AI";
			WalkLF="FT_Stryder_xo16_walk_FL_AI";
			PlayerWalkLF="FT_Stryder_xo16_walk_FL_AI";
			WalkRF="FT_Stryder_xo16_walk_FR_AI";
			PlayerWalkRF="FT_Stryder_xo16_walk_FR_AI";
			WalkL="FT_Stryder_xo16_walk_L_AI";
			PlayerWalkL="FT_Stryder_xo16_walk_L_AI";
			WalkR="FT_Stryder_xo16_walk_R_AI";
			PlayerWalkR="FT_Stryder_xo16_walk_R_AI";
			WalkB="FT_Stryder_xo16_walk_B_AI";
			PlayerWalkB="FT_Stryder_xo16_walk_B_AI";
			WalkLB="FT_Stryder_xo16_walk_BL_AI";
			PlayerWalkLB="FT_Stryder_xo16_walk_BL_AI";
			WalkRB="FT_Stryder_xo16_walk_BR_AI";
			PlayerWalkRB="FT_Stryder_xo16_walk_BR_AI";
			SlowF="FT_Stryder_xo16_walk_Fast_AI";
			SlowFL="FT_Stryder_xo16_walk_Fast_FL_AI";
			SlowFR="FT_Stryder_xo16_walk_Fast_FR_AI";
			PlayerSlowF="FT_Stryder_xo16_walk_Fast_AI";
			SlowB="FT_Stryder_xo16_walk_B_AI";
			PlayerSlowB="FT_Stryder_xo16_walk_B_AI";
			PlayerFastF="FT_Stryder_xo16_walk_Fast_AI";
			Combat="FT_Stryder_xo16_idle_AI";
			Civil = "";
			PrimaryWeapon = "FT_Stryder_xo16_idle_AI";
			up="FT_Stryder_xo16_crouch_idle_AI";
			down="FT_Stryder_xo16_crouch_idle_AI";
			gear="FT_Stryder_xo16_idle_AI";
			upDegree = "ManPosCombat";
			PlayerSlowLF="FT_Stryder_xo16_walk_Fast_FL_AI";
			PlayerSlowRF="FT_Stryder_xo16_walk_Fast_FR_AI";
			PlayerSlowL="FT_Stryder_xo16_walk_L_AI";
			PlayerSlowR="FT_Stryder_xo16_walk_R_AI";
			PlayerSlowLB="FT_Stryder_xo16_walk_BL_AI";
			PlayerSlowRB="FT_Stryder_xo16_walk_BR_AI";
			FastF="FT_Stryder_xo16_walk_Fast_AI";
			FastLF="FT_Stryder_xo16_walk_Fast_FL_AI";
			FastRF="FT_Stryder_xo16_walk_Fast_FR_AI";
			FastL="FT_Stryder_xo16_walk_L_AI";
			FastR="FT_Stryder_xo16_walk_R_AI";
			FastLB="FT_Stryder_xo16_walk_BL_AI";
			FastRB="FT_Stryder_xo16_walk_BR_AI";
			TactF="FT_Stryder_xo16_walk_F_AI";
			TactLF="FT_Stryder_xo16_walk_FL_AI";
			TactRF="FT_Stryder_xo16_walk_FR_AI";
			TactL="FT_Stryder_xo16_walk_L_AI";
			TactR="FT_Stryder_xo16_walk_R_AI";
			TactLB="FT_Stryder_xo16_walk_BL_AI";
			TactRB="FT_Stryder_xo16_walk_BR_AI";
			TactB="FT_Stryder_xo16_walk_B_AI";
			PlayerTactF="FT_Stryder_xo16_walk_F_AI";
			PlayerTactLF="FT_Stryder_xo16_walk_FL_AI";
			PlayerTactRF="FT_Stryder_xo16_walk_FR_AI";
			PlayerTactL="FT_Stryder_xo16_walk_L_AI";
			PlayerTactR="FT_Stryder_xo16_walk_R_AI";
			PlayerTactLB="FT_Stryder_xo16_walk_BL_AI";
			PlayerTactRB="FT_Stryder_xo16_walk_BR_AI";
			PlayerTactB="FT_Stryder_xo16_walk_B_AI";
			Die="FT_Stryder_xo16_Death_AI";
			stance = "ManStanceStand";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Walk_R: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_R_AI";
			Up="FT_Stryder_xo16_walk_R_AI";
			Crouch="FT_Stryder_xo16_walk_R_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Walk_L: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_L_AI";
			Up="FT_Stryder_xo16_walk_L_AI";
			Crouch="FT_Stryder_xo16_walk_L_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Fast: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_Fast_AI";
			Up="FT_Stryder_xo16_walk_Fast_AI";
			Crouch="FT_Stryder_xo16_walk_Fast_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Fast_FL: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_Fast_FL_AI";
			Up="FT_Stryder_xo16_walk_Fast_FL_AI";
			Crouch="FT_Stryder_xo16_walk_Fast_FL_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Fast_FR: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_Fast_FL_AI";
			Up="FT_Stryder_xo16_walk_Fast_FL_AI";
			Crouch="FT_Stryder_xo16_walk_Fast_FL_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Walk_FL: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_FL_AI";
			Up="FT_Stryder_xo16_walk_FL_AI";
			Crouch="FT_Stryder_xo16_walk_FL_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Walk_FR: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_FR_AI";
			Up="FT_Stryder_xo16_walk_FR_AI";
			Crouch="FT_Stryder_xo16_walk_FR_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Walk_BL: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_BL_AI";
			Up="FT_Stryder_xo16_walk_BL_AI";
			Crouch="FT_Stryder_xo16_walk_BL_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
		class FT_Stryder_xo16_moveSet_AI_ActionStances_Walk_BR: FT_Stryder_xo16_moveSet_AI
		{
			turnSpeed=4.5;
			PlayerCrouch="FT_Stryder_xo16_walk_BR_AI";
			Up="FT_Stryder_xo16_walk_BR_AI";
			Crouch="FT_Stryder_xo16_walk_BR_AI";
			AdjustB="";
			Stand="FT_Stryder_xo16_idle_AI";
		};
	};
};
class CfgGesturesMale;
class CfgGesturesStryder: CfgGesturesMale
{
	skeletonName = "FT_Stryder_Skeleton";
	class ManActions
	{
	};
	class Actions
	{
		class NoActions
		{
			turnSpeed=0;
			upDegree=0;
			limitFast=1;
			useFastMove=0;
			stance="ManStanceUndefined";
		};
	};
	class Default
	{
		actions="NoActions";
		file="";
		looped=1;
		speed=0.5;
		static=0;
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled=0;
		soundOverride="";
		soundEdge[]={0.5,1};
		terminal=0;
		ragdoll=0;
		equivalentTo="";
		connectAs="";
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		mask="empty";
		interpolationSpeed=6;
		interpolationRestart=0;
		preload=0;
		disableWeapons=1;
		enableOptics=0;
		showWeaponAim=1;
		enableMissile=1;
		enableBinocular=1;
		showItemInHand=0;
		showItemInRightHand=0;
		showHandGun=0;
		canPullTrigger=1;
		Walkcycles=1;
		headBobMode=0;
		headBobStrength=0;
		leftHandIKBeg=0;
		leftHandIKEnd=0;
		rightHandIKBeg=0;
		rightHandIKEnd=0;
		leftHandIKCurve[]={1};
		rightHandIKCurve[]={1};
		forceAim=0;
	};
	class Interpolations
	{
	};
	transitionsInterpolated[]={};
	transitionsSimple[]={};
	transitionsDisabled[]={};
	class States
	{
	};
	class BlendAnims
	{
		headTitan[]=
		{
			"def_chest_laser",
			0.01
		};
		legsTitan[]=
		{
			"def_l_hip",
			0.2,
			"def_l_thigh",
			0.4,
			"def_l_thighLow",
			0.8,
			"def_l_leg_jiggle_1",
			0.8,
			"def_l_knee",
			0.7,
			"def_l_foot_shock_5_end",
			1,
			"def_l_ankle",
			1,
			"def_l_foot_shock_4_end",
			1,
			"def_l_foot_shock_5",
			1,
			"def_l_foot_shock_3_end",
			1,
			"def_l_foot_shock_2_end",
			1,
			"def_l_foot_shock_1_end",
			1,
			"def_l_leg_jiggle_2",
			1,
			"def_l_leg_jiggle_3",
			1,
			"def_l_foot_shock_4",
			1,
			"def_l_foot_shock_3",
			1,
			"def_l_foot_shock_2",
			1,
			"def_l_foot_shock_1",
			1,
			"def_l_ball",
			1,
			"def_r_hip",
			0.2,
			"def_r_thigh",
			0.4,
			"def_r_thighLow",
			0.8,
			"def_r_leg_jiggle_1",
			0.8,
			"def_r_knee",
			0.7,
			"def_r_foot_shock_5_end",
			1,
			"def_r_ankle",
			1,
			"def_r_foot_shock_4_end",
			1,
			"def_r_foot_shock_5",
			1,
			"def_r_foot_shock_3_end",
			1,
			"def_r_foot_shock_2_end",
			1,
			"def_r_foot_shock_1_end",
			1,
			"def_r_leg_jiggle_2",
			1,
			"def_r_leg_jiggle_3",
			1,
			"def_r_foot_shock_4",
			1,
			"def_r_foot_shock_3",
			1,
			"def_r_foot_shock_2",
			1,
			"def_r_foot_shock_1",
			1,
			"def_r_ball",
			1,
		};
		aimingDefaultStryder[]=
		{
			"Spine_A",
			0,
			"Spine_B",
			0.9,
			"Spine_C",
			1,
			"MainGun",
			1,
			"Hatch",
			1,
			"Hatch_Low",
			1,
			"Stryder_Head_A",
			1,
			"Stryder_Head_B",
			1,
			"Stryder_Head_C",
			1,
			"Servo_1_up",
			1,
			"Servo_2_up",
			1,
			"Servo_3_up",
			1,
			"Servo_4_up",
			1,
			"Servo_5_up",
			1,
			"Servo_6_up",
			1,
			"Servo_7_up",
			1,
			"Servo_8_up",
			1,
			"Clav_R",
			1,
			"Shoulder_R",
			1,
			"Elbow_R",
			1,
			"Wrist_R",
			1,
			"Thumb_A_R",
			1,
			"Thumb_B_R",
			1,
			"Thumb_C_R",
			1,
			"Ring_A_R",
			1,
			"Ring_B_R",
			1,
			"Ring_C_R",
			1,
			"Mid_A_R",
			1,
			"Mid_B_R",
			1,
			"Mid_C_R",
			1,
			"Index_A_R",
			1,
			"Index_B_R",
			1,
			"Index_C_R",
			1,
			"Clav_L",
			1,
			"Shoulder_L",
			1,
			"Elbow_L",
			1,
			"Wrist_L",
			1,
			"Thumb_A_L",
			1,
			"Thumb_B_L",
			1,
			"Thumb_C_L",
			1,
			"Ring_A_L",
			1,
			"Ring_B_L",
			1,
			"Ring_C_L",
			1,
			"Mid_A_L",
			1,
			"Mid_B_L",
			1,
			"Mid_C_L",
			1,
			"Index_A_L",
			1,
			"Index_B_L",
			1,
			"Index_C_L",
			1,
			"Pov_Spine_A",
			0,
			"Pov_Spine_B",
			0.9,
			"Pov_Spine_C",
			1,
			"Pov_MainGun",
			1,
			"Pov_Hatch",
			1,
			"Pov_Hatch_Low",
			1,
			"Pov_Stryder_Head_A",
			1,
			"Pov_Stryder_Head_B",
			1,
			"Pov_Stryder_Head_C",
			1,
			"Pov_Servo_1_up",
			1,
			"Pov_Servo_2_up",
			1,
			"Pov_Servo_3_up",
			1,
			"Pov_Servo_4_up",
			1,
			"Pov_Servo_5_up",
			1,
			"Pov_Servo_6_up",
			1,
			"Pov_Servo_7_up",
			1,
			"Pov_Servo_8_up",
			1,
			"Pov_Clav_R",
			1,
			"Pov_Shoulder_R",
			1,
			"Pov_Elbow_R",
			1,
			"Pov_Wrist_R",
			1,
			"Pov_Thumb_A_R",
			1,
			"Pov_Thumb_B_R",
			1,
			"Pov_Thumb_C_R",
			1,
			"Pov_Ring_A_R",
			1,
			"Pov_Ring_B_R",
			1,
			"Pov_Ring_C_R",
			1,
			"Pov_Mid_A_R",
			1,
			"Pov_Mid_B_R",
			1,
			"Pov_Mid_C_R",
			1,
			"Pov_Index_A_R",
			1,
			"Pov_Index_B_R",
			1,
			"Pov_Index_C_R",
			1,
			"Pov_Clav_L",
			1,
			"Pov_Shoulder_L",
			1,
			"Pov_Elbow_L",
			1,
			"Pov_Wrist_L",
			1,
			"Pov_Thumb_A_L",
			1,
			"Pov_Thumb_B_L",
			1,
			"Pov_Thumb_C_L",
			1,
			"Pov_Ring_A_L",
			1,
			"Pov_Ring_B_L",
			1,
			"Pov_Ring_C_L",
			1,
			"Pov_Mid_A_L",
			1,
			"Pov_Mid_B_L",
			1,
			"Pov_Mid_C_L",
			1,
			"Pov_Index_A_L",
			1,
			"Pov_Index_B_L",
			1,
			"Pov_Index_C_L",
			1,
			"Pov_Hip",
			1,
			"Pov_Hip_R",
			1,
			"Pov_Thigh_R",
			1,
			"Pov_ThighLow_R",
			1,
			"Pov_Knee_R",
			1,
			"Pov_Ankle_R",
			1,
			"Pov_Ball_R",
			1,
			"Pov_Servo_R_1_down",
			1,
			"Pov_Servo_R_2_down",
			1,
			"Pov_Servo_R_1_up",
			1,
			"Pov_Servo_R_2_up",
			1,
			"Pov_Hip_L",
			1,
			"Pov_Thigh_L",
			1,
			"Pov_ThighLow_L",
			1,
			"Pov_Knee_L",
			1,
			"Pov_Ankle_L",
			1,
			"Pov_Ball_L",
			1,
			"Pov_Servo_L_1_down",
			1,
			"Pov_Servo_L_2_down",
			1,
			"Pov_Servo_L_1_up",
			1,
			"Pov_Servo_L_2_up",
			1,
			"Cockpit_Pov",
			1,
			"Cockpit_Cockpit",
			1,
		};
		aimingUpDefaultStryder[]=
		{
			"Spine_A",
			0,
			"Spine_B",
			0.9,
			"Spine_C",
			1,
			"MainGun",
			1,
			"Hatch",
			1,
			"Hatch_Low",
			1,
			"Stryder_Head_A",
			1,
			"Stryder_Head_B",
			1,
			"Stryder_Head_C",
			1,
			"Servo_1_up",
			1,
			"Servo_2_up",
			1,
			"Servo_3_up",
			1,
			"Servo_4_up",
			1,
			"Servo_5_up",
			1,
			"Servo_6_up",
			1,
			"Servo_7_up",
			1,
			"Servo_8_up",
			1,
			"Clav_R",
			1,
			"Shoulder_R",
			1,
			"Elbow_R",
			1,
			"Wrist_R",
			1,
			"Thumb_A_R",
			1,
			"Thumb_B_R",
			1,
			"Thumb_C_R",
			1,
			"Ring_A_R",
			1,
			"Ring_B_R",
			1,
			"Ring_C_R",
			1,
			"Mid_A_R",
			1,
			"Mid_B_R",
			1,
			"Mid_C_R",
			1,
			"Index_A_R",
			1,
			"Index_B_R",
			1,
			"Index_C_R",
			1,
			"Clav_L",
			1,
			"Shoulder_L",
			1,
			"Elbow_L",
			1,
			"Wrist_L",
			1,
			"Thumb_A_L",
			1,
			"Thumb_B_L",
			1,
			"Thumb_C_L",
			1,
			"Ring_A_L",
			1,
			"Ring_B_L",
			1,
			"Ring_C_L",
			1,
			"Mid_A_L",
			1,
			"Mid_B_L",
			1,
			"Mid_C_L",
			1,
			"Index_A_L",
			1,
			"Index_B_L",
			1,
			"Index_C_L",
			1,
			"Pov_Spine_A",
			0,
			"Pov_Spine_B",
			0.9,
			"Pov_Spine_C",
			1,
			"Pov_MainGun",
			1,
			"Pov_Hatch",
			1,
			"Pov_Hatch_Low",
			1,
			"Pov_Stryder_Head_A",
			1,
			"Pov_Stryder_Head_B",
			1,
			"Pov_Stryder_Head_C",
			1,
			"Pov_Servo_1_up",
			1,
			"Pov_Servo_2_up",
			1,
			"Pov_Servo_3_up",
			1,
			"Pov_Servo_4_up",
			1,
			"Pov_Servo_5_up",
			1,
			"Pov_Servo_6_up",
			1,
			"Pov_Servo_7_up",
			1,
			"Pov_Servo_8_up",
			1,
			"Pov_Clav_R",
			1,
			"Pov_Shoulder_R",
			1,
			"Pov_Elbow_R",
			1,
			"Pov_Wrist_R",
			1,
			"Pov_Thumb_A_R",
			1,
			"Pov_Thumb_B_R",
			1,
			"Pov_Thumb_C_R",
			1,
			"Pov_Ring_A_R",
			1,
			"Pov_Ring_B_R",
			1,
			"Pov_Ring_C_R",
			1,
			"Pov_Mid_A_R",
			1,
			"Pov_Mid_B_R",
			1,
			"Pov_Mid_C_R",
			1,
			"Pov_Index_A_R",
			1,
			"Pov_Index_B_R",
			1,
			"Pov_Index_C_R",
			1,
			"Pov_Clav_L",
			1,
			"Pov_Shoulder_L",
			1,
			"Pov_Elbow_L",
			1,
			"Pov_Wrist_L",
			1,
			"Pov_Thumb_A_L",
			1,
			"Pov_Thumb_B_L",
			1,
			"Pov_Thumb_C_L",
			1,
			"Pov_Ring_A_L",
			1,
			"Pov_Ring_B_L",
			1,
			"Pov_Ring_C_L",
			1,
			"Pov_Mid_A_L",
			1,
			"Pov_Mid_B_L",
			1,
			"Pov_Mid_C_L",
			1,
			"Pov_Index_A_L",
			1,
			"Pov_Index_B_L",
			1,
			"Pov_Index_C_L",
			1,
			"Pov_Hip",
			1,
			"Pov_Hip_R",
			1,
			"Pov_Thigh_R",
			1,
			"Pov_ThighLow_R",
			1,
			"Pov_Knee_R",
			1,
			"Pov_Ankle_R",
			1,
			"Pov_Ball_R",
			1,
			"Pov_Servo_R_1_down",
			1,
			"Pov_Servo_R_2_down",
			1,
			"Pov_Servo_R_1_up",
			1,
			"Pov_Servo_R_2_up",
			1,
			"Pov_Hip_L",
			1,
			"Pov_Thigh_L",
			1,
			"Pov_ThighLow_L",
			1,
			"Pov_Knee_L",
			1,
			"Pov_Ankle_L",
			1,
			"Pov_Ball_L",
			1,
			"Pov_Servo_L_1_down",
			1,
			"Pov_Servo_L_2_down",
			1,
			"Pov_Servo_L_1_up",
			1,
			"Pov_Servo_L_2_up",
			1,
			"Cockpit_Pov",
			1,
			"Cockpit_Cockpit",
			1,
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
};

class CfgMovesFT_Stryder: CfgMovesMaleSdr
{
	gestures="CfgGesturesStryder";
	skeletonName = "FT_Stryder_Skeleton";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
    {
        actions = "NoAction";
		//file = "FT_Titans_Stryder\animations\Stryder\thermite_launcher\FT_Stryder_thermite_launcher_idle.rtm";
		file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_idle.rtm";
		collisionShape="War_on_the_Frontier\FT_Stryder\FT_Titan_CollisionAnim.p3d";
		collisionShapeSafe="War_on_the_Frontier\FT_Stryder\FT_Titan_CollisionAnim.p3d";
    };
	class StandBase: StandBase
    {
		actions = "NoAction";
		//actions = "FT_Stryder_xo16_moveSet";
		file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_idle.rtm";
		collisionShape="War_on_the_Frontier\FT_Stryder\FT_Titan_CollisionAnim.p3d";
		collisionShapeSafe="War_on_the_Frontier\FT_Stryder\FT_Titan_CollisionAnim.p3d";
    };
	class DefaultDie: Default
	{
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge[]={0.44999999};
		soundEnabled=0;
	};
	class States
	{
		class FT_Stryder_xo16_idle: StandBase
		{
			boundingSphere = 5;
			interpolationSpeed = 2;
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_idle.rtm";
			duty = -1;
			actions = "FT_Stryder_xo16_moveSet";
			variantsAI[] = {};
			speed = -2;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			headBobStrength=-1;
			headBobMode=1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			aiming="aimingDefaultStryder";
		    aimingBody="aimingUpDefaultStryder";
			head = "noHead";
			legs="FT_Titan_legsDefault";
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_Fast",
				0.01,
				"FT_Stryder_xo16_walk_B",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_Fast",
				0.01,
				"FT_Stryder_xo16_walk_B",
				0.01,
			};
			preload = 1;
		};
		class FT_Stryder_xo16_walk_F: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_f.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_FR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_FR",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_FL: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_fl.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_L",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FL",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_L",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FL",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_L: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_l.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_L",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_L",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_FR: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_fr.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FR",
				0.01,
				"FT_Stryder_xo16_walk_R",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FR",
				0.01,
				"FT_Stryder_xo16_walk_L",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FR",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_R: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_r.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_FR",
				0.01,
				"FT_Stryder_xo16_walk_R",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_FR",
				0.01,
				"FT_Stryder_xo16_walk_R",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_FAST: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_run_f.rtm";
			speed = -0.83;
			soundOverride = "run";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FL",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_walk_F",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FL",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FR",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_FAST_FL: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_run_fl.rtm";
			speed = -0.83;
			soundOverride = "run";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FL",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_FL",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FL",
				0.01,
			};
		};
		class FT_Stryder_xo16_walk_FAST_FR: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_run_fr.rtm";
			speed = -0.83;
			soundOverride = "run";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_FR",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_FR",
				0.01,
				"FT_Stryder_xo16_walk_FAST",
				0.01,
				"FT_Stryder_xo16_walk_FAST_FR",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_B: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_b.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_walk_B",
				0.01,
				"FT_Stryder_xo16_walk_BL",
				0.01,
				"FT_Stryder_xo16_walk_BR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_walk_B",
				0.01,
				"FT_Stryder_xo16_walk_BL",
				0.01,
				"FT_Stryder_xo16_walk_BR",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_BL: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_bl.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_B",
				0.01,
				"FT_Stryder_xo16_walk_BL",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_B",
				0.01,
				"FT_Stryder_xo16_walk_BL",
				0.01,
			};
		};

		class FT_Stryder_xo16_walk_BR: FT_Stryder_xo16_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_walk_br.rtm";
			speed = -1.13;
			soundOverride = "walk";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_walk_B",
				0.01,
				"FT_Stryder_xo16_walk_BR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_walk_B",
				0.01,
				"FT_Stryder_xo16_walk_BR",
				0.01,
			};
		};
		class FT_Stryder_xo16_crouch_idle: StandBase
		{
			boundingSphere = 5;
			interpolationSpeed = 2;
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_idle.rtm";
			collisionShape="War_on_the_Frontier\FT_Stryder\FT_Titan_crouch_CollisionAnim.p3d";
			collisionShapeSafe="War_on_the_Frontier\FT_Stryder\FT_Titan_crouch_CollisionAnim.p3d";
			duty = -1;
			actions = "FT_Stryder_xo16_crouch_moveSet";
			variantsAI[] = {};
			speed = -1.5;
			relSpeedMin = 1;
			relSpeedMax = 1;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 1;
			headBobStrength=-1;
			headBobMode=1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			aiming="aimingDefaultStryder";
		    aimingBody="aimingUpDefaultStryder";
			head = "noHead";
			legs="FT_Titan_legsDefault";
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_idle",
				0.01,
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
			};
			preload = 1;
		};

		class FT_Stryder_xo16_crouch_walk_F: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_f.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FR",
				0.01,
			};
		};

		class FT_Stryder_xo16_crouch_walk_FL: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_fl.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_L",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_L",
				0.01,
			};
		};

		class FT_Stryder_xo16_crouch_walk_L: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_l.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_walk_FL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_L",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_walk_FL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_L",
				0.01,
			};
		};

		class FT_Stryder_xo16_crouch_walk_FR: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_fr.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FR",
				0.01,
				"FT_Stryder_xo16_crouch_walk_R",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_walk_F",
				0.01,
				"FT_Stryder_xo16_crouch_walk_FR",
				0.01,
				"FT_Stryder_xo16_crouch_walk_L",
				0.01,
			};
		};

		class FT_Stryder_xo16_crouch_walk_R: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_r.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_walk_FR",
				0.01,
				"FT_Stryder_xo16_crouch_walk_R",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_walk_FR",
				0.01,
				"FT_Stryder_xo16_crouch_walk_R",
				0.01,
			};
		};

		class FT_Stryder_xo16_crouch_walk_B: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_b.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_idle",
				0.01,
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BL",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BR",
				0.01,
			};
		};

		class FT_Stryder_xo16_crouch_walk_BL: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_bl.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BL",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BL",
				0.01,
			};
		};

		class FT_Stryder_xo16_crouch_walk_BR: FT_Stryder_xo16_crouch_idle
		{
			file = "War_on_the_Frontier\FT_Stryder\animations\xo16\FT_Stryder_xo16_crouch_walk_br.rtm";
			speed = -1.13;
			soundOverride = "crouch";
			soundEdge[] = {0.2, 0.7};  
			soundEnabled = 1;
			InterpolateTo[]=
			{
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BR",
				0.01,
			};
			InterpolateFrom[]=
			{
				"FT_Stryder_xo16_crouch_walk_B",
				0.01,
				"FT_Stryder_xo16_crouch_walk_BR",
				0.01,
			};
		};
	};
	class BlendAnims: BlendAnims
	{
		headTitan[]=
		{
			"def_chest_laser",
			0.01
		};
		legsTitan[]=
		{
			"def_l_hip",
			0.2,
			"def_l_thigh",
			0.4,
			"def_l_thighLow",
			0.8,
			"def_l_leg_jiggle_1",
			0.8,
			"def_l_knee",
			0.7,
			"def_l_foot_shock_5_end",
			1,
			"def_l_ankle",
			1,
			"def_l_foot_shock_4_end",
			1,
			"def_l_foot_shock_5",
			1,
			"def_l_foot_shock_3_end",
			1,
			"def_l_foot_shock_2_end",
			1,
			"def_l_foot_shock_1_end",
			1,
			"def_l_leg_jiggle_2",
			1,
			"def_l_leg_jiggle_3",
			1,
			"def_l_foot_shock_4",
			1,
			"def_l_foot_shock_3",
			1,
			"def_l_foot_shock_2",
			1,
			"def_l_foot_shock_1",
			1,
			"def_l_ball",
			1,
			"def_r_hip",
			0.2,
			"def_r_thigh",
			0.4,
			"def_r_thighLow",
			0.8,
			"def_r_leg_jiggle_1",
			0.8,
			"def_r_knee",
			0.7,
			"def_r_foot_shock_5_end",
			1,
			"def_r_ankle",
			1,
			"def_r_foot_shock_4_end",
			1,
			"def_r_foot_shock_5",
			1,
			"def_r_foot_shock_3_end",
			1,
			"def_r_foot_shock_2_end",
			1,
			"def_r_foot_shock_1_end",
			1,
			"def_r_leg_jiggle_2",
			1,
			"def_r_leg_jiggle_3",
			1,
			"def_r_foot_shock_4",
			1,
			"def_r_foot_shock_3",
			1,
			"def_r_foot_shock_2",
			1,
			"def_r_foot_shock_1",
			1,
			"def_r_ball",
			1,
		};
		aimingDefaultStryder[]=
		{
			"Spine_A",
			0,
			"Spine_B",
			0.9,
			"Spine_C",
			1,
			"MainGun",
			1,
			"Hatch",
			1,
			"Hatch_Low",
			1,
			"Stryder_Head_A",
			1,
			"Stryder_Head_B",
			1,
			"Stryder_Head_C",
			1,
			"Servo_1_up",
			1,
			"Servo_2_up",
			1,
			"Servo_3_up",
			1,
			"Servo_4_up",
			1,
			"Servo_5_up",
			1,
			"Servo_6_up",
			1,
			"Servo_7_up",
			1,
			"Servo_8_up",
			1,
			"Clav_R",
			1,
			"Shoulder_R",
			1,
			"Elbow_R",
			1,
			"Wrist_R",
			1,
			"Thumb_A_R",
			1,
			"Thumb_B_R",
			1,
			"Thumb_C_R",
			1,
			"Ring_A_R",
			1,
			"Ring_B_R",
			1,
			"Ring_C_R",
			1,
			"Mid_A_R",
			1,
			"Mid_B_R",
			1,
			"Mid_C_R",
			1,
			"Index_A_R",
			1,
			"Index_B_R",
			1,
			"Index_C_R",
			1,
			"Clav_L",
			1,
			"Shoulder_L",
			1,
			"Elbow_L",
			1,
			"Wrist_L",
			1,
			"Thumb_A_L",
			1,
			"Thumb_B_L",
			1,
			"Thumb_C_L",
			1,
			"Ring_A_L",
			1,
			"Ring_B_L",
			1,
			"Ring_C_L",
			1,
			"Mid_A_L",
			1,
			"Mid_B_L",
			1,
			"Mid_C_L",
			1,
			"Index_A_L",
			1,
			"Index_B_L",
			1,
			"Index_C_L",
			1,
			"Pov_Spine_A",
			0,
			"Pov_Spine_B",
			0.9,
			"Pov_Spine_C",
			1,
			"Pov_MainGun",
			1,
			"Pov_Hatch",
			1,
			"Pov_Hatch_Low",
			1,
			"Pov_Stryder_Head_A",
			1,
			"Pov_Stryder_Head_B",
			1,
			"Pov_Stryder_Head_C",
			1,
			"Pov_Servo_1_up",
			1,
			"Pov_Servo_2_up",
			1,
			"Pov_Servo_3_up",
			1,
			"Pov_Servo_4_up",
			1,
			"Pov_Servo_5_up",
			1,
			"Pov_Servo_6_up",
			1,
			"Pov_Servo_7_up",
			1,
			"Pov_Servo_8_up",
			1,
			"Pov_Clav_R",
			1,
			"Pov_Shoulder_R",
			1,
			"Pov_Elbow_R",
			1,
			"Pov_Wrist_R",
			1,
			"Pov_Thumb_A_R",
			1,
			"Pov_Thumb_B_R",
			1,
			"Pov_Thumb_C_R",
			1,
			"Pov_Ring_A_R",
			1,
			"Pov_Ring_B_R",
			1,
			"Pov_Ring_C_R",
			1,
			"Pov_Mid_A_R",
			1,
			"Pov_Mid_B_R",
			1,
			"Pov_Mid_C_R",
			1,
			"Pov_Index_A_R",
			1,
			"Pov_Index_B_R",
			1,
			"Pov_Index_C_R",
			1,
			"Pov_Clav_L",
			1,
			"Pov_Shoulder_L",
			1,
			"Pov_Elbow_L",
			1,
			"Pov_Wrist_L",
			1,
			"Pov_Thumb_A_L",
			1,
			"Pov_Thumb_B_L",
			1,
			"Pov_Thumb_C_L",
			1,
			"Pov_Ring_A_L",
			1,
			"Pov_Ring_B_L",
			1,
			"Pov_Ring_C_L",
			1,
			"Pov_Mid_A_L",
			1,
			"Pov_Mid_B_L",
			1,
			"Pov_Mid_C_L",
			1,
			"Pov_Index_A_L",
			1,
			"Pov_Index_B_L",
			1,
			"Pov_Index_C_L",
			1,
			"Pov_Hip",
			1,
			"Pov_Hip_R",
			1,
			"Pov_Thigh_R",
			1,
			"Pov_ThighLow_R",
			1,
			"Pov_Knee_R",
			1,
			"Pov_Ankle_R",
			1,
			"Pov_Ball_R",
			1,
			"Pov_Servo_R_1_down",
			1,
			"Pov_Servo_R_2_down",
			1,
			"Pov_Servo_R_1_up",
			1,
			"Pov_Servo_R_2_up",
			1,
			"Pov_Hip_L",
			1,
			"Pov_Thigh_L",
			1,
			"Pov_ThighLow_L",
			1,
			"Pov_Knee_L",
			1,
			"Pov_Ankle_L",
			1,
			"Pov_Ball_L",
			1,
			"Pov_Servo_L_1_down",
			1,
			"Pov_Servo_L_2_down",
			1,
			"Pov_Servo_L_1_up",
			1,
			"Pov_Servo_L_2_up",
			1,
			"Cockpit_Pov",
			1,
			"Cockpit_Cockpit",
			1,
		};
		aimingUpDefaultStryder[]=
		{
			"Spine_A",
			0,
			"Spine_B",
			0.9,
			"Spine_C",
			1,
			"MainGun",
			1,
			"Hatch",
			1,
			"Hatch_Low",
			1,
			"Stryder_Head_A",
			1,
			"Stryder_Head_B",
			1,
			"Stryder_Head_C",
			1,
			"Servo_1_up",
			1,
			"Servo_2_up",
			1,
			"Servo_3_up",
			1,
			"Servo_4_up",
			1,
			"Servo_5_up",
			1,
			"Servo_6_up",
			1,
			"Servo_7_up",
			1,
			"Servo_8_up",
			1,
			"Clav_R",
			1,
			"Shoulder_R",
			1,
			"Elbow_R",
			1,
			"Wrist_R",
			1,
			"Thumb_A_R",
			1,
			"Thumb_B_R",
			1,
			"Thumb_C_R",
			1,
			"Ring_A_R",
			1,
			"Ring_B_R",
			1,
			"Ring_C_R",
			1,
			"Mid_A_R",
			1,
			"Mid_B_R",
			1,
			"Mid_C_R",
			1,
			"Index_A_R",
			1,
			"Index_B_R",
			1,
			"Index_C_R",
			1,
			"Clav_L",
			1,
			"Shoulder_L",
			1,
			"Elbow_L",
			1,
			"Wrist_L",
			1,
			"Thumb_A_L",
			1,
			"Thumb_B_L",
			1,
			"Thumb_C_L",
			1,
			"Ring_A_L",
			1,
			"Ring_B_L",
			1,
			"Ring_C_L",
			1,
			"Mid_A_L",
			1,
			"Mid_B_L",
			1,
			"Mid_C_L",
			1,
			"Index_A_L",
			1,
			"Index_B_L",
			1,
			"Index_C_L",
			1,
			"Pov_Spine_A",
			0,
			"Pov_Spine_B",
			0.9,
			"Pov_Spine_C",
			1,
			"Pov_MainGun",
			1,
			"Pov_Hatch",
			1,
			"Pov_Hatch_Low",
			1,
			"Pov_Stryder_Head_A",
			1,
			"Pov_Stryder_Head_B",
			1,
			"Pov_Stryder_Head_C",
			1,
			"Pov_Servo_1_up",
			1,
			"Pov_Servo_2_up",
			1,
			"Pov_Servo_3_up",
			1,
			"Pov_Servo_4_up",
			1,
			"Pov_Servo_5_up",
			1,
			"Pov_Servo_6_up",
			1,
			"Pov_Servo_7_up",
			1,
			"Pov_Servo_8_up",
			1,
			"Pov_Clav_R",
			1,
			"Pov_Shoulder_R",
			1,
			"Pov_Elbow_R",
			1,
			"Pov_Wrist_R",
			1,
			"Pov_Thumb_A_R",
			1,
			"Pov_Thumb_B_R",
			1,
			"Pov_Thumb_C_R",
			1,
			"Pov_Ring_A_R",
			1,
			"Pov_Ring_B_R",
			1,
			"Pov_Ring_C_R",
			1,
			"Pov_Mid_A_R",
			1,
			"Pov_Mid_B_R",
			1,
			"Pov_Mid_C_R",
			1,
			"Pov_Index_A_R",
			1,
			"Pov_Index_B_R",
			1,
			"Pov_Index_C_R",
			1,
			"Pov_Clav_L",
			1,
			"Pov_Shoulder_L",
			1,
			"Pov_Elbow_L",
			1,
			"Pov_Wrist_L",
			1,
			"Pov_Thumb_A_L",
			1,
			"Pov_Thumb_B_L",
			1,
			"Pov_Thumb_C_L",
			1,
			"Pov_Ring_A_L",
			1,
			"Pov_Ring_B_L",
			1,
			"Pov_Ring_C_L",
			1,
			"Pov_Mid_A_L",
			1,
			"Pov_Mid_B_L",
			1,
			"Pov_Mid_C_L",
			1,
			"Pov_Index_A_L",
			1,
			"Pov_Index_B_L",
			1,
			"Pov_Index_C_L",
			1,
			"Pov_Hip",
			1,
			"Pov_Hip_R",
			1,
			"Pov_Thigh_R",
			1,
			"Pov_ThighLow_R",
			1,
			"Pov_Knee_R",
			1,
			"Pov_Ankle_R",
			1,
			"Pov_Ball_R",
			1,
			"Pov_Servo_R_1_down",
			1,
			"Pov_Servo_R_2_down",
			1,
			"Pov_Servo_R_1_up",
			1,
			"Pov_Servo_R_2_up",
			1,
			"Pov_Hip_L",
			1,
			"Pov_Thigh_L",
			1,
			"Pov_ThighLow_L",
			1,
			"Pov_Knee_L",
			1,
			"Pov_Ankle_L",
			1,
			"Pov_Ball_L",
			1,
			"Pov_Servo_L_1_down",
			1,
			"Pov_Servo_L_2_down",
			1,
			"Pov_Servo_L_1_up",
			1,
			"Pov_Servo_L_2_up",
			1,
			"Cockpit_Pov",
			1,
			"Cockpit_Cockpit",
			1,
		};
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
class cfgWeapons {
	class ItemCore;	// External class reference
	class UniformItem;	// External class reference
	class Uniform_Base;	// External class reference
	class HeadgearItem;	// External class reference
	class Vest_Camo_Base;	// External class reference
	class VestItem;	// External class reference
    class ToolKit;
	//class FT_Ion_lights_blue;

	class FT_Titan_Base_form: Uniform_Base
	{
		displayname="Titan_Base";
		model = "War_on_the_Frontier\FT_Stryder\FT_Stryder.p3d";
		scope=0;
		picture="";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		//hiddenSelectionsTextures[] = {"FT_titans\data\ion\t_m_ion_warpaint_skin01_col.paa","FT_titans\data\common\titan_cockpit_col.paa","FT_titans\data\common\t_cockpit_atlas_01_col.paa","FT_titans\data\common\ajax_cockpit_console_pov_col.paa"};
		class ItemInfo: UniformItem
		{
			containerclass="Supply200";
			mass=30;
			uniformclass="FT_Titan_Base";
			uniformmodel="-";
		};
	};

	class FT_Stryder_form: Uniform_Base
	{
		displayname="Stryder(IMC)";
		model = "War_on_the_Frontier\FT_Stryder\FT_Stryder.p3d";
		scope=2;
		picture="";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"War_on_the_Frontier\FT_Stryder\data\imc\upper_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\arm_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\lower_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\interior_co.paa",
									};
		class ItemInfo: UniformItem
		{
			containerclass="Supply200";
			mass=30;
			uniformclass="FT_Stryder";
			uniformmodel="-";
		};
	};

	class FT_Stryder_MCOR_form: FT_Stryder_form
	{
		displayname="Stryder(MCOR)";
		picture="";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"War_on_the_Frontier\FT_Stryder\data\mcor\mcor_upper_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\mcor\mcor_arm_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\mcor\mcor_lower_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\interior_co.paa",
									};
		class ItemInfo: UniformItem
		{
			containerclass="Supply200";
			mass=30;
			uniformclass="FT_Stryder_MCOR";
			uniformmodel="-";
		};
	};
	/*
	class FT_Stryder_Indep_form: FT_Stryder_form
	{
		displayname="Stryder(Indep)";
		picture="";
		class ItemInfo: UniformItem
		{
			containerclass="Supply200";
			mass=30;
			uniformclass="FT_Stryder_Indep";
			uniformmodel="-";
		};
	};
	class FT_Stryder_lights_blue: FT_Ion_lights_blue
	{
		displayName = "Stryder lights(blue)";
		model = "FT_Titans_Stryder\FT_Stryder_lights_blue.p3d";
		class ItemInfo
 		{
			type = 616;
			hmdType = 0;
			uniformModel = "FT_Titans_Stryder\FT_Stryder_lights_blue.p3d";
			modelOff = "FT_Titans_Stryder\FT_Stryder_lights_blue.p3d";
			mass = 4;
 		};
	};
	class FT_Stryder_lights_red: FT_Ion_lights_blue
	{
		displayName = "Stryder lights(red)";
		model = "FT_Titans_Stryder\FT_Stryder_lights_red.p3d";
		class ItemInfo
 		{
			type = 616;
			hmdType = 0;
			uniformModel = "FT_Titans_Stryder\FT_Stryder_lights_red.p3d";
			modelOff = "FT_Titans_Stryder\FT_Stryder_lights_red.p3d";
			mass = 4;
 		};
	};
	*/
};

class CfgFactionClasses {
	class FT_titans {
		displayName = "Titans";
		author = "Leba";
		icon = "";
		priority = 3;
	};
	class FT_IMC {
		displayName = "IMC";
		author = "Leba";
		icon = "";
		priority = 3;
	};
	class FT_Militia {
		displayName = "Militia";
		author = "Leba";
		icon = "";
		priority = 3;
	};
};
class CfgEditorSubcategories
{
	class FT_Titans_class_Titans
	{
		displayName="Titans";
	};
};

class CfgVehicles {
	class Bag_Base;
 
	class House;
	class House_F: House
	{
	};
	class B_Soldier_base_F;	// External class reference
	class B_fieldpack_base;

    class FT_Titan_Backpack: B_FieldPack_Base
    {
        author = "Leba";
        scope = 2;
        model = "War_on_the_Frontier\FT_Stryder\FT_Titan_Backpack.p3d";
        displayName = "Titan Backpack";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
        maximumLoad = 6000;
        mass = 3;
        FT_Jumpkit=0;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
    };

	class FT_Titan_Base : B_Soldier_base_F 
	{
		author = "Leba";
		camouflage = 40;	
		irTarget = true;
		threat[] = {1, 1, 0.8};
		//cost = 500;
		type = VSoft;
		preferRoads = true;//just in case
		modelSides[] = {0,1,2,3};
		canBleed = 0;
		identityTypes[] = {"empty_Face"};
		extCameraPosition[] = {5,2,-10};
		handGunBone = "MainGun";
		oxygenCapacity = "40,000";
		airCapacity = 4000000;
		dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		
		uniformClass = "FT_Titan_Base_form";
		nakedUniform = "FT_Titan_Base_form";
		faction = "FT_titans";
		editorSubcategory = "FT_Titans_class_Titans";
		_generalMacro = "FT_titans";
		gestures = "CfgGesturesStryder";
		moves = "CfgMovesFT_Stryder";
		model = "War_on_the_Frontier\FT_Stryder\FT_Stryder.p3d";
		vehicleclass = "Men";
		displayName = "Titan Base";
		//moves = "CfgMovesFT_Atlas_class";
		//movesFatigue = "CfgMovesFatigueTitans";
		//model = "FT_Titans\FT_ion.p3d";
		armor = 7;
		scope = 0;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		memoryPointPilot = "Cockpit_Pov";
		weaponBone = "MainGun";
	
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		//hiddenSelectionsTextures[] = {"FT_titans\data\ion\t_m_ion_warpaint_skin01_col.paa","FT_titans\data\common\titan_cockpit_col.paa","FT_titans\data\common\t_cockpit_atlas_01_col.paa","FT_titans\data\common\ajax_cockpit_console_pov_col.paa"};
		maxGunElev = 80;
		minGunElev = -80;
		/*
		class SoundEnvironExt {		
			generic[] = {
             {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_01.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_02.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_03.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_04.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_05.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_06.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_07.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_08.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_09.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_10.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_11.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_12.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_13.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_14.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_15.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_01.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_02.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_03.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_04.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_05.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_06.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_07.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_08.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_09.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_10.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_11.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_12.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_13.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_14.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_15.ogg", 2, 1, 500}},
			};
		};
		class SoundEquipment {	
		    soldier[] = {
             {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_01.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_02.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_03.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_04.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_05.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_06.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_07.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_08.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_09.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_10.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_11.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_12.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_13.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_14.ogg", 2, 1, 500}},
			 {"run", {"\FT_Titans\sounds\FT_atlas_class_footstep_15.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_01.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_02.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_03.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_04.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_05.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_06.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_07.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_08.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_09.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_10.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_11.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_12.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_13.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_14.ogg", 2, 1, 500}},
			 {"walk", {"\FT_Titans\sounds\FT_atlas_class_footstep_15.ogg", 2, 1, 500}},
            };
		};
		*/
		//rightShoulder = "def_r_shoulder";
		//rightArmPoints[] = {"def_r_elbow_axis","def_r_wrist_Axis"};
		//rightArmToElbow[] = {"def_r_elbow",0.5,"def_r_wrist",0};
		//rightArmFromElbow[] = {"def_r_elbow",0,"def_r_wrist",0.5};
		//rightHand[] = {"def_r_shoulder","def_r_elbow","def_r_wrist"};

		//rightShoulder = "DT_C_RShoulder";
		//rightArmPoints[] = {"DR_C_RHand_axis","DR_C_RHandGun_Axis"};
		//rightArmToElbow[] = {"DR_C_RHand",0.5,"DR_C_RHand_Gun",0};
		//rightArmFromElbow[] = {"DR_C_RHand",0,"DR_C_RHand_Gun",0.5};
		//rightHand[] = {"DT_C_RShoulder","DR_C_RHand","DR_C_RHand_Gun"};

		/*
		leftArmFromElbow[] = {"def_l_wrist",0,"def_l_wrist",0.5};
		leftArmPoints[] = {"def_l_clav","def_l_shoulder","def_l_shoulderTwist","def_l_shoulderMid","def_l_elbow","def_l_wrist"};
		leftArmToElbow[] = {"def_l_wrist",0.5,"def_l_elbow",0};
		leftDustEffects[] = {["GdtKLDirt","LDustEffectsMan"],["GdtKLGrass1","LDustEffectsMan"],["GdtKLGrass2","LDustEffectsMan"],["GdtKLForestCon","LDustEffectsMan"],["GdtKLForestDec","LDustEffectsMan"],["GdtKlMud","LDustEffectsMan"],["GdtKlSoil","LDustEffectsMan"],["GdtKlTarmac","LDustEffectsMan"],["GdtKlStubble","LDustEffectsMan"],["GdtKlStones","LDustEffectsMan"],["SurfRoadDirt_Enoch","LDustEffectsMan"],["SurfTrailDirt_Enoch","LDustEffectsMan"],["SurfRoadTarmac3_Enoch","LDustEffectsMan"],["SurfRoadTarmac1_Enoch","LDustEffectsMan"],["SurfRoadTarmac2_Enoch","LDustEffectsMan"],["GdtGrassShort","LDustEffectsMan"],["GdtGrassTall","LDustEffectsMan"],["GdtRedDirt","LDustEffectsManRed"],["GdtField","LDustEffectsMan"],["GdtForest","LDustEffectsMan"],["GdtVolcano","LDustEffectsMan"],["GdtCliff","LDustEffectsMan"],["GdtVolcanoBeach","LDustEffectsMan"],["SurfRoadDirt_exp","LDustEffectsManRed"],["SurfRoadConcrete_exp","LDustEffectsMan"],["SurfRoadTarmac_exp","LDustEffectsMan"],["GdtStratisConcrete","LDustEffectsMan"],["GdtStratisBeach","LDustEffectsMan"],["GdtStratisDirt","LDustEffectsMan"],["GdtStratisSeabedCluttered","LDustEffectsMan"],["GdtStratisSeabed","LDustEffectsMan"],["GdtStratisDryGrass","LDustEffectsMan"],["GdtStratisGreenGrass","LDustEffectsMan"],["GdtStratisRocky","LDustEffectsMan"],["GdtStratisThistles","LDustEffectsMan"],["GdtConcrete","LDustEffectsMan"],["GdtAsphalt","LDustEffectsMan"],["GdtRubble","LDustEffectsMan"],["GdtSoil","LDustEffectsMan"],["GdtBeach","LDustEffectsMan"],["GdtRock","LDustEffectsMan"],["GdtDead","LDustEffectsMan"],["Default","LDustEffectsMan"],["GdtDesert","LDustEffectsMan"],["GdtDesert1","LDustEffectsMan"],["GdtDesert2","LDustEffectsMan"],["GdtDirt","LDustEffectsMan"],["GdtGrassGreen","LDustEffectsMan"],["GdtGrassDry","LDustEffectsMan"],["GdtGrassWild","LDustEffectsMan"],["GdtWildField","LDustEffectsMan"],["GdtWeed1","LDustEffectsMan"],["GdtWeed2","LDustEffectsMan"],["GdtThorn","LDustEffectsMan"],["GdtStony","LDustEffectsMan"],["GdtStonyGreen","LDustEffectsMan"],["GdtStonyThistle","LDustEffectsMan"],["GdtSeabedDeep","LDustEffectsMan"],["GdtSeabed","LDustEffectsMan"],["SurfRoadDirt","LDustEffectsMan"],["SurfRoadConcrete","LDustEffectsMan"],["SurfRoadTarmac","LDustEffectsMan"],["SurfWood","LDustEffectsMan"],["SurfMetal","LDustEffectsMan"],["SurfRoofTin","LDustEffectsMan"],["SurfRoofTiles","LDustEffectsMan"],["SurfIntWood","LDustEffectsMan"],["SurfIntConcrete","LDustEffectsMan"],["SurfIntTiles","LDustEffectsMan"],["SurfIntMetal","LDustEffectsMan"]};
		leftFoot[] = {"def_l_ball"};
		leftHand[] = {"def_l_finThumbA","def_l_finThumbB","def_l_finThumbC","def_l_finIndexA","def_l_finIndexB","def_l_finIndexC","def_l_finMidA","def_l_finMidB","def_l_finMidC","def_l_finRingA","def_l_finRingB","def_l_finRingC","def_l_finRingCarpal"};
		leftHeel = "def_l_ankle";
		leftHip = "def_l_hip";
		leftLegFromKnee[] = {"LeftLeg",0,"LeftLegRoll",0.5};
		leftLegPoints[] = {"def_l_hip","def_l_thigh","def_l_thighLow","def_l_knee","def_l_ankle","def_l_ball"};
		leftLegToKnee[] = {"LeftUpLeg",0.5,"LeftUpLegRoll",0};
		leftShoulder = "def_l_shoulder";
		leftWrist = "def_l_wrist";

		rightArmFromElbow[] = {"rightForeArm",0,"rightForeArmRoll",0.5};
		rightArmPoints[] = {"rightShoulder","relbow","relbow_axis","rwrist"};
		rightArmToElbow[] = {"rightArm",0.5,"rightArmRoll",0};
		rightDustEffects[] = {["GdtKLDirt","RDustEffectsMan"],["GdtKLGrass1","RDustEffectsMan"],["GdtKLGrass2","RDustEffectsMan"],["GdtKLForestCon","RDustEffectsMan"],["GdtKLForestDec","RDustEffectsMan"],["GdtKlMud","RDustEffectsMan"],["GdtKlSoil","RDustEffectsMan"],["GdtKlTarmac","RDustEffectsMan"],["GdtKlStubble","RDustEffectsMan"],["GdtKlStones","RDustEffectsMan"],["SurfRoadDirt_Enoch","RDustEffectsMan"],["SurfTrailDirt_Enoch","RDustEffectsMan"],["SurfRoadTarmac1_Enoch","RDustEffectsMan"],["SurfRoadTarmac2_Enoch","RDustEffectsMan"],["SurfRoadTarmac3_Enoch","RDustEffectsMan"],["GdtGrassShort","RDustEffectsMan"],["GdtGrassTall","RDustEffectsMan"],["GdtRedDirt","RDustEffectsManRed"],["GdtField","RDustEffectsMan"],["GdtForest","RDustEffectsMan"],["GdtVolcano","RDustEffectsMan"],["GdtCliff","RDustEffectsMan"],["GdtVolcanoBeach","RDustEffectsMan"],["SurfRoadDirt_exp","RDustEffectsManRed"],["SurfRoadConcrete_exp","RDustEffectsMan"],["SurfRoadTarmac_exp","RDustEffectsMan"],["GdtStratisConcrete","RDustEffectsMan"],["GdtStratisBeach","RDustEffectsMan"],["GdtStratisDirt","RDustEffectsMan"],["GdtStratisSeabedCluttered","RDustEffectsMan"],["GdtStratisSeabed","RDustEffectsMan"],["GdtStratisDryGrass","RDustEffectsMan"],["GdtStratisGreenGrass","RDustEffectsMan"],["GdtStratisRocky","RDustEffectsMan"],["GdtStratisThistles","RDustEffectsMan"],["GdtConcrete","RDustEffectsMan"],["GdtAsphalt","RDustEffectsMan"],["GdtRubble","RDustEffectsMan"],["GdtSoil","RDustEffectsMan"],["GdtBeach","RDustEffectsMan"],["GdtRock","RDustEffectsMan"],["GdtDead","RDustEffectsMan"],["Default","RDustEffectsMan"],["GdtDesert","RDustEffectsMan"],["GdtDesert1","RDustEffectsMan"],["GdtDesert2","RDustEffectsMan"],["GdtDirt","RDustEffectsMan"],["GdtGrassGreen","RDustEffectsMan"],["GdtGrassDry","RDustEffectsMan"],["GdtGrassWild","RDustEffectsMan"],["GdtWildField","RDustEffectsMan"],["GdtWeed1","RDustEffectsMan"],["GdtWeed2","RDustEffectsMan"],["GdtThorn","RDustEffectsMan"],["GdtStony","RDustEffectsMan"],["GdtStonyGreen","RDustEffectsMan"],["GdtStonyThistle","RDustEffectsMan"],["GdtSeabedDeep","RDustEffectsMan"],["GdtSeabed","RDustEffectsMan"],["SurfRoadDirt","RDustEffectsMan"],["SurfRoadConcrete","RDustEffectsMan"],["SurfRoadTarmac","RDustEffectsMan"],["SurfWood","RDustEffectsMan"],["SurfMetal","RDustEffectsMan"],["SurfRoofTin","RDustEffectsMan"],["SurfRoofTiles","RDustEffectsMan"],["SurfIntWood","RDustEffectsMan"],["SurfIntConcrete","RDustEffectsMan"],["SurfIntTiles","RDustEffectsMan"],["SurfIntMetal","RDustEffectsMan"]};
		rightFoot[] = {"RightToeBase"};
		rightHand[] = {"rightHandThumb3","rightHandThumb2","rightHandThumb1","rightHandIndex3","rightHandIndex2","rightHandIndex1","rightHandMiddle3","rightHandMiddle2","rightHandMiddle1","rightHandRing3","rightHandRing2","rightHandRing1","rightHandRing","rightHandPinky3","rightHandPinky2","rightHandPinky1"};
		rightHeel = "rightFoot";
		rightHip = "pelvis";
		rightLegFromKnee[] = {"rightLeg",0,"rightLegRoll",0.5};
		rightLegPoints[] = {"rfemur","rknee","rknee_axis","rankle"};
		rightLegToKnee[] = {"rightUpLeg",0.5,"rightUpLegRoll",0};
		rightShoulder = "rightShoulder";
		rightWrist = "rightHand";

		memoryPointAim = "aimPoint";
		memoryPointAimingAxis = "aiming_axis";
		memoryPointCameraTarget = "camera";
		memoryPointHeadAxis = "head_axis";
		memoryPointLStep = "def_l_ankle";
		memoryPointPilot = "pilot";
		memoryPointRStep = "def_r_ankle";
		weaponBone = "ja_c_propGun";
		*/
		//rightArmFromElbow[] = {"def_r_wrist",0.5};
		//rightArmPoints[] = {"def_r_clav","def_r_shoulder","def_r_shoulderMid","def_r_elbow","def_r_wrist"};
		//rightArmToElbow[] = {"def_r_clav",0.5,"def_r_shoulder",0.5,"def_r_shoulderMid",0.5};

		//leftArmFromElbow[] = {"def_l_wrist",0.5};
		//leftArmPoints[] = {"def_r_clav","def_r_shoulder","def_r_shoulderMid","def_r_elbow","def_r_wrist"};
		//leftArmToElbow[] = {"def_l_clav",0.5,"def_l_shoulder",0.5,"def_l_shoulderMid",0.5};

       // weapons[] = {"Throw","Put","FT_splitter_rifle"};
       // magazines[] = {"FT_40Rnd_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_XO16_Mag"};
       // linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		//backpack = "FT_Titan_Backpack";
	};

	class FT_Stryder : FT_Titan_Base
	{
		side = 1;
		FT_Titan_Class = "Stryder";
		faction = "FT_IMC";
		gestures = "CfgGesturesStryder";
		uniformClass = "FT_Stryder_form";
		nakedUniform = "FT_Stryder_form";
		displayName = "Stryder(IMC)";
		moves = "CfgMovesFT_Stryder";
		model = "War_on_the_Frontier\FT_Stryder\FT_Stryder.p3d";
		armor = 7;
		scope = 2;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;

		class SoundEnvironExt {		
			generic[] = {
             {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			};
		};
		class SoundEquipment {	
		    soldier[] = {
            {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"run", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"crouch", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
			 {"walk", {"\War_on_the_Frontier\FT_Stryder\sounds\walk_01.ogg", 2, 1, 500}},
            };
		};
		//boneHead = "def_stryder_r_chesteye";
		//memoryPointHeadAxis = "def_stryder_r_chesteye_axis";

		memoryPointPilot = "Cockpit_Pov";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"War_on_the_Frontier\FT_Stryder\data\imc\upper_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\arm_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\lower_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\interior_co.paa",
									};							


		leftHeel = "Ankle_L";
		rightHeel = "Ankle_R";
        weapons[] = {"Throw","Put","FT_XO16"};
        magazines[] = {"FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag","FT_40Rnd_XO16_Mag","FT_40Rnd_HE_XO16_Mag"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","FT_Stryder_lights_blue"};
	};
	class FT_Stryder_MCOR : FT_Stryder
	{
		side = 0;
		faction = "FT_Militia";
		uniformClass = "FT_Stryder_MCOR_form";
		nakedUniform = "FT_Stryder_MCOR_form";
		displayName = "Stryder(MCOR)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"War_on_the_Frontier\FT_Stryder\data\mcor\mcor_upper_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\mcor\mcor_arm_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\mcor\mcor_lower_co.paa",
									  "War_on_the_Frontier\FT_Stryder\data\imc\interior_co.paa",
									};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","FT_Stryder_lights_red"};
	};
	/*
	class FT_Stryder_Indep : FT_Stryder
	{
		side = 2;
		faction = "FT_TF2_MERC";
		uniformClass = "FT_Stryder_Indep_form";
		nakedUniform = "FT_Stryder_Indep_form";
		displayName = "Stryder(Indep)";
	};
	*/
};

class Extended_InitPost_EventHandlers {
    class FT_Stryder {
        class FT_Stryder_Init {
			onRespawn="true";
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\War_on_the_Frontier\FT_Stryder\scripts\init_stryder.sqf'};";
        };
    };
};