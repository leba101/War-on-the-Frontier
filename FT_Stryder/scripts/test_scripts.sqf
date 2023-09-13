_titan=player;
_titan allowDamage false;

_titan_HITBOX1 = "FT_Stryder_hip" createVehicle position _titan; 
_titan_HITBOX1 attachto [_titan,[-0,-0.25,-0.55],"Hip",true]; 
_titan_HITBOX1 allowDamage false;
_titan_HITBOX1 setDir 180;
[_titan_HITBOX1, {
_titan = _this;
_titan addEventHandler ["HitPart", 
{
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
    _titantOfTheBody = _selection select 0;
	_penemParam = _ammo select 0;
	_explosion=_ammo select 1;
	_cal=_ammo select 4;
	_caliber = getNumber (configFile >> "CfgAmmo" >> _cal >> "caliber");
	if(_explosion > _penemParam) then{_penemParam=_explosion;};
	if((_caliber < 2.5) && (_penemParam < 100)) then{_penemParam = 0;};
	if(_caliber >=2.5 && _caliber <= 12) then {_penemParam = _penemParam / 4;};
	if(_caliber == 20.111) then {_penemParam = _penemParam / 2;};
	_titan = _target getVariable "Titan";
	_health = _titan getVariable "PT2_titan_Health";	
	_health = _health - _penemParam;
	_h2 = 1500 - _health;
	_bar = _titan getVariable "PT2_Healthbar";	
	_bar animateSource["PT2_Ogre_Class_Health",_h2,true];
    _titan setVariable ["PT2_titan_Health",_health,true];
	if((_health <= 250)) then {
		_pilot = _titan getVariable "PT2_Pilot";
		if(isNil "_pilot") exitWith{};
		_doom = _titan getVariable "PT2_Doom_State";
		if(_doom == 0 ) then
		{
			_titan setVariable ["PT2_Doom_State",1,true];
			//_titan spawn PT2_TF1_Doom_State;
			[_titan,"doomstate"] spawn PT2_TitanOS; 
		};
		_type = typeOf _titan;
		_str = _type splitString "_";
		_t = _str select 1;
		_autoeject = _titan getVariable "PT2_Titan_Eject";
		_e = _titan getVariable "PT2_embark";
		if((_autoeject == "autoeject") && (_e == 2)) then
		{
			_pilot = _titan getVariable "PT2_Pilot";
			_titan setVariable ["PT2_embark",3,true];
			_titan setVariable ["PT2_eject",2,true];
			[_pilot,_titan] remoteExec ["PT2_Titan_Eject",_pilot];
			//_pilot spawn PT2_Titan_Eject;
		};
	};
	if (_health <= 0) exitWith {
		_pilot = _titan getVariable "PT2_Pilot";
		_e = _titan getVariable "PT2_embark";
		if( _e != 0) then{objNull remoteControl _titan;_pilot setDamage 1;};
		_titan spawn PT2_Titan_kill;
		if(!isNil "_pilot") then{_pilot setVariable ["PT2_BT",nil,true];};
	};
}];
}] remoteExec ["spawn", 0, true];
_titan_HITBOX1 setVariable ["Titan",_titan,true];

_titan_HITBOX2 = "FT_Stryder_SpineC" createVehicle position _titan; 
_titan_HITBOX2 attachto [_titan,[-0.05,-0.48,-1.4],"Spine_C",true]; 
_titan_HITBOX2 allowDamage false;
_titan_HITBOX2 setDir 180;
[_titan_HITBOX2, {
_titan = _this;
_titan addEventHandler ["HitPart", 
{
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
    _titantOfTheBody = _selection select 0;
	_penemParam = _ammo select 0;
	_explosion=_ammo select 1;
	_cal=_ammo select 4;
	_caliber = getNumber (configFile >> "CfgAmmo" >> _cal >> "caliber");
	if(_explosion > _penemParam) then{_penemParam=_explosion;};
	if((_caliber < 2.5) && (_penemParam < 100)) then{_penemParam = 0;};
	if(_caliber >=2.5 && _caliber <= 12) then {_penemParam = _penemParam / 4;};
	if(_caliber == 20.111) then {_penemParam = _penemParam / 2;};
	_titan = _target getVariable "Titan";
	_health = _titan getVariable "PT2_titan_Health";	
	_health = _health - _penemParam;
	_h2 = 1500 - _health;
	_bar = _titan getVariable "PT2_Healthbar";	
	_bar animateSource["PT2_Ogre_Class_Health",_h2,true];
    _titan setVariable ["PT2_titan_Health",_health,true];
	if((_health <= 250)) then {
		_pilot = _titan getVariable "PT2_Pilot";
		if(isNil "_pilot") exitWith{};
		_doom = _titan getVariable "PT2_Doom_State";
		if(_doom == 0 ) then
		{
			_titan setVariable ["PT2_Doom_State",1,true];
			//_titan spawn PT2_TF1_Doom_State;
			[_titan,"doomstate"] spawn PT2_TitanOS; 
		};
		_type = typeOf _titan;
		_str = _type splitString "_";
		_t = _str select 1;
		_autoeject = _titan getVariable "PT2_Titan_Eject";
		_e = _titan getVariable "PT2_embark";
		if((_autoeject == "autoeject") && (_e == 2)) then
		{
			_pilot = _titan getVariable "PT2_Pilot";
			_titan setVariable ["PT2_embark",3,true];
			_titan setVariable ["PT2_eject",2,true];
			[_pilot,_titan] remoteExec ["PT2_Titan_Eject",_pilot];
			//_pilot spawn PT2_Titan_Eject;
		};
	};
	if (_health <= 0) exitWith {
		_pilot = _titan getVariable "PT2_Pilot";
		_e = _titan getVariable "PT2_embark";
		if( _e != 0) then{objNull remoteControl _titan;_pilot setDamage 1;};
		_titan spawn PT2_Titan_kill;
		if(!isNil "_pilot") then{_pilot setVariable ["PT2_BT",nil,true];};
	};
}];
}] remoteExec ["spawn", 0, true];
_titan_HITBOX2 setVariable ["Titan",_titan,true];


_titan setVariable ["PT2_Voice","ion",true];
_titan setVariable ["PT2_eject",0,true];
//_titan setVariable ["PT2_autoeject",0,true];
_titan setVariable ["PT2_Doom_State",0,true];
_titan setVariable ["PT2_Titan_autoengagegrunt",0,true]; 
_titan setVariable ["PT2_Titan_autoengagepilot",0,true]; 
_titan setVariable ["PT2_Titan_autoengagetitan",0,true];
_titan setVariable ["PT2_Titan_autoengagetitans",0,true];
_titan setVariable ["PT2_Titan_2to1",0,true];
_titan setVariable ["PT2_Titan_3to1",0,true];
_titan setVariable ["PT2_Titan_4to1",0,true];
_titan setVariable ["PT2_OS",0,true];
_titan setVariable ["PT2_Titan_Down",0,true];
_titan setVariable ["PT2_Eject",0,true];
_titan setVariable ["PT2_AI_Mode",-1,true];
_titan setVariable ["PT2_embark",1,true];
_titan setVariable ["Anim","a",true];
_titan setVariable ["Anim_Hitbox","a",true];
_titan setVariable ["Hit1",_titan_HITBOX1,true];
_titan setVariable ["Hit2",_titan_HITBOX2,true];
_titan setVariable ["PT2_Healthbar",_titan_HITBOX3,true];
_titan setVariable ['IMS_IsUnitInvicibleScripted',1,true];


_titan addEventHandler ["AnimDone", {
	params ["_unit", "_anim"];
	_titan=_this select 0;
	_anim=_this select 1;
	_hit1=_titan getVariable "Hit1";
	_hit2=_titan getVariable "Hit2";
	_anim_titan=_titan getVariable "Anim";
	_anim_hitbox=_titan getVariable "Anim_Hitbox";				
	switch (_anim) do
	{
		case "ft_stryder_xo16_walk_fast": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			//_hit2 animateSource [_anim, 0,true];
			_hit2 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fast",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
		};
		case "ft_stryder_xo16_walk_fast_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_hit2 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fast_fr",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
		};
		case "ft_stryder_xo16_walk_fast_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_hit2 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fast_fl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
		};
		case "ft_stryder_xo16_walk_f": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_f",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fr",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_r": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_r",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_l": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_l",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_b": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_b",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_bl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_bl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_br": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_br",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_idle": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_idle",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
			_hit2 animateSource ["ft_stryder_xo16_idle",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
			_titan setVariable ["Anim","ft_stryder_xo16_idle",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_idle",true];
		};
		case "ft_stryder_xo16_crouch_idle": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_idle",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_idle", 0.792,0.792];
			_hit2 animateSource ["ft_stryder_xo16_crouch_idle",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_idle", 0.792,0.792];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_idle",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_idle",true];
		};
		case "ft_stryder_xo16_crouch_walk_f": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_f",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_fl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_fr",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_l": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_l",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_r": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_r",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_b": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_b",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
		};
		case "ft_stryder_xo16_crouch_walk_bl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_bl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
		};
		case "ft_stryder_xo16_crouch_walk_br": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_br",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
		};
		case "ft_stryder_xo16_walk_f": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_f",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fr",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_r": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_r",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_l": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_l",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_b": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_b",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_bl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_bl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_br": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_br",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_idle": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_idle",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
			_hit2 animateSource ["ft_stryder_xo16_idle",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
			_titan setVariable ["Anim","ft_stryder_xo16_idle",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_idle",true];
		};
		case "ft_stryder_xo16_crouch_idle": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_idle",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_idle", 0.792,0.792];
			_hit2 animateSource ["ft_stryder_xo16_crouch_idle",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_idle", 0.792,0.792];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_idle",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_idle",true];
		};
		case "ft_stryder_xo16_crouch_walk_f": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_f",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_fl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_fr",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_l": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_l",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_r": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_r",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
		};
		case "ft_stryder_xo16_crouch_walk_b": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_b",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
		};
		case "ft_stryder_xo16_crouch_walk_bl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_bl",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
		};
		case "ft_stryder_xo16_crouch_walk_br": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_crouch_walk_br",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
		};
		case "ft_stryder_xo16_walk_fast_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			//_hit2 animateSource [_anim, 0,true];
			_hit2 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fast_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
		};
		case "ft_stryder_xo16_walk_fast_fr_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_hit2 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fast_fr_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
		};
		case "ft_stryder_xo16_walk_fast_fl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_hit2 animateSource ["ft_stryder_xo16_run",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fast_fl_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
		};
		case "ft_stryder_xo16_walk_f_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_f_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fl_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fr_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fr_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_r_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_r_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_l_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_l_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_b_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_b_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_bl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_bl_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_br_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_br_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_idle_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_idle",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
			_hit2 animateSource ["ft_stryder_xo16_idle",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
			_titan setVariable ["Anim","ft_stryder_xo16_idle_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_idle",true];
		};
		case "ft_stryder_xo16_walk_f_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_f_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fl_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_fr_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_fr_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_r_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_r_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_l_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_f",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_l_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
		};
		case "ft_stryder_xo16_walk_b_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_b_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_bl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_bl_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
		case "ft_stryder_xo16_walk_br_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource [_anim_hitbox, 0,true];
			};
			_hit1 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_hit2 animateSource ["ft_stryder_xo16_walk_b",0.127,true];
			_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
			_titan setVariable ["Anim","ft_stryder_xo16_walk_br_ai",true];
			_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
		};
	};
}];


_titan addEventHandler ["AnimStateChanged", {
	params ["_unit", "_anim"];
	_titan=_this select 0;
	_anim=_this select 1;
	_hit1=_titan getVariable "Hit1";
	_hit2=_titan getVariable "Hit2";
	_anim_hitbox=_titan getVariable "Anim_Hitbox";				
	switch (_anim) do
	{
		case "ft_stryder_xo16_walk_fast": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_f": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_l": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_r": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_b": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_walk_bl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_walk_br": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_idle": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_idle",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_idle",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_idle",true];
			};
		};
		case "ft_stryder_xo16_crouch_idle": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_idle",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_idle", 0.792,0.792];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_idle",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_idle", 0.792,0.792];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_idle",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_f": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_fl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_fr": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_l": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_r": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_f",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_b": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_bl": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
			};
		};
		case "ft_stryder_xo16_crouch_walk_b": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_crouch_walk_br") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_crouch_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_crouch_walk_b",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_fl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_fr_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_f_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_fl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_fr_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_l_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_r_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_b_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_walk_bl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_walk_br_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_idle_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_idle",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_idle",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_idle",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_fl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_fast_fr_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_run") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_run",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_run", 0.957,0.957];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_run",true];
			};
		};
		case "ft_stryder_xo16_walk_f_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_fl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_fr_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_l_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_r_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_f") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_f", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_f",true];
			};
		};
		case "ft_stryder_xo16_walk_b_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_walk_bl_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_walk_br_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_walk_b") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_walk_b", 1.254,1.254];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_walk_b",true];
			};
		};
		case "ft_stryder_xo16_idle_ai": 
		{
			if(_anim_hitbox !="ft_stryder_xo16_idle") then
			{
				_hit1 animateSource [_anim_hitbox, 0,true];
				_hit1 animateSource ["ft_stryder_xo16_idle",0.33,true];
				_hit1 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
				_hit2 animateSource [_anim_hitbox, 0,true];
				_hit2 animateSource ["ft_stryder_xo16_idle",0.33,true];
				_hit2 animateSource ["ft_stryder_xo16_idle", 0.792,0.792];
				_titan setVariable ["Anim_Hitbox","ft_stryder_xo16_idle",true];
			};
		};
	};	
}];






_titan=player;
_titan allowDamage false;

_titan_HITBOX1 = "FT_Stryder_hip" createVehicle position _titan; 
_titan_HITBOX1 attachto [_titan,[-0,-0.18,-0.29],"Hip",true]; 
_titan_HITBOX1 allowDamage false;
_titan_HITBOX1 setDir 180;
_titan_HITBOX1 animateSource ["ft_stryder_xo16_idle",0.127,true];

_titan=player;
_titan allowDamage false;

_titan_HITBOX1 = "FT_Stryder_SpineC" createVehicle position _titan; 
_titan_HITBOX1 attachto [_titan,[-0.05,-0.48,-1.4],"Spine_C",true]; 
_titan_HITBOX1 allowDamage false;
_titan_HITBOX1 setDir 180;
_titan_HITBOX1 animateSource ["ft_stryder_xo16_idle",0.127,true];

_titan=player;
_titan allowDamage false;
_titan_HITBOX3 = "FT_Stryder_Class_Healthbar" createVehicle position _titan; 
_titan_HITBOX3 attachto [_titan,[-0,-0.1,-5.29],"Cockpit_Pov",true]; 
_titan_HITBOX3 allowDamage false;
_titan_HITBOX3 setDir 180;