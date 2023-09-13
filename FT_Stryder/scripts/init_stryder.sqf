_titan=_this;
_titan setUnitFreefallHeight 90000;// for titanfall
_titan allowDamage false;
_titan setSpeaker "NoVoice";
_titan disableAI "SUPPRESSION";
_titan disableAI "COVER";
_titan disableAI "AIMINGERROR";
//_titan disableAI "PATH"; for follow and stay
_titan setVariable ['IMS_IsUnitInvicibleScripted',1,true];

_titan setVariable ["FT_titan_Health",1000,true];

_titan spawn {
_titan = _this;
while {(alive _titan)} do {
if (((speed _titan) != 0)) then {
{
_x setDamage 1;
} forEach nearestTerrainObjects [_titan, ["TREE", "Bush","SMALL TREE","WALL","FENCE","POWER LINES"], 10,false];
};
sleep 0.5;
};
};

if(isPlayer _titan)then
{
	_titan addAction ["Titanfall",{ 
		openMap true;
		_titan=_this select 0;
		_titan onMapSingleClick {[_this,_pos] spawn{
			_titan=_this select 0;
			_pos=_this select 1;
			//player setPos [_pos select 0, _pos select 1, 1000];
			//player setVelocity [0,0,-250];
			_titan setPos [_pos select 0, _pos select 1, 900];
			_titan setVelocity [0,0,-150];
			[_titan,"FT_atlas_class_titanfall_upright"] remoteExec ["switchMove", 0, true];
			[_titan,"FT_atlas_class_titanfall_upright"] remoteExec ["playMoveNow", 0, true];
			playSound3D ["FT_Titans_Atlas\sounds\FT_titanfall.ogg", _titan, false, _pos, 3, 1, 0];
		}; };
		(_this select 0) removeaction (_this select 2)
	}
];
};

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
	_health = _titan getVariable "FT_titan_Health";	
	_health = _health - _penemParam;
	_h2 = 1500 - _health;
	_bar = _titan getVariable "FT_Healthbar";	
	_bar animateSource["FT_Ogre_Class_Health",_h2,true];
    _titan setVariable ["FT_titan_Health",_health,true];
	if((_health <= (-250))) then {
		_pilot = _titan getVariable "FT_Pilot";
		if(isNil "_pilot") exitWith{};
		_doom = _titan getVariable "FT_Doom_State";
		if(_doom == 0 ) then
		{
			_titan setVariable ["FT_Doom_State",1,true];
			//_titan spawn FT_TF1_Doom_State;
			[_titan,"doomstate"] spawn FT_TitanOS; 
		};
		_type = typeOf _titan;
		_str = _type splitString "_";
		_t = _str select 1;
		_autoeject = "no";
		//_autoeject = _titan getVariable "FT_Titan_Eject";
		//_e = _titan getVariable "FT_embark";
		_e = 1;
		if((_autoeject == "autoeject") && (_e == 2)) then
		{
			_pilot = _titan getVariable "FT_Pilot";
			_titan setVariable ["FT_embark",3,true];
			_titan setVariable ["FT_eject",2,true];
			[_pilot,_titan] remoteExec ["FT_Titan_Eject",_pilot];
			//_pilot spawn FT_Titan_Eject;
		};
	};
	if (_health <= 0) exitWith {
		//_pilot = _titan getVariable "FT_Pilot";
		//_e = _titan getVariable "FT_embark";
		//if( _e != 0) then{objNull remoteControl _titan;_pilot setDamage 1;};
		//_titan spawn FT_Titan_kill;
		_titan setDamage 1;
		//if(!isNil "_pilot") then{_pilot setVariable ["FT_BT",nil,true];};
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
	_health = _titan getVariable "FT_titan_Health";	
	_health = _health - _penemParam;
	_h2 = 1500 - _health;
	_bar = _titan getVariable "FT_Healthbar";	
	_bar animateSource["FT_Ogre_Class_Health",_h2,true];
    _titan setVariable ["FT_titan_Health",_health,true];
	if((_health <= (-250))) then {
		_pilot = _titan getVariable "FT_Pilot";
		if(isNil "_pilot") exitWith{};
		_doom = _titan getVariable "FT_Doom_State";
		if(_doom == 0 ) then
		{
			_titan setVariable ["FT_Doom_State",1,true];
			//_titan spawn FT_TF1_Doom_State;
			[_titan,"doomstate"] spawn FT_TitanOS; 
		};
		_type = typeOf _titan;
		_str = _type splitString "_";
		_t = _str select 1;
		_autoeject = "no";
		//_autoeject = _titan getVariable "FT_Titan_Eject";
		//_e = _titan getVariable "FT_embark";
		_e = 1;
		if((_autoeject == "autoeject") && (_e == 2)) then
		{
			_pilot = _titan getVariable "FT_Pilot";
			_titan setVariable ["FT_embark",3,true];
			_titan setVariable ["FT_eject",2,true];
			[_pilot,_titan] remoteExec ["FT_Titan_Eject",_pilot];
			//_pilot spawn FT_Titan_Eject;
		};
	};
	if (_health <= 0) exitWith {
		//_pilot = _titan getVariable "FT_Pilot";
		//_e = _titan getVariable "FT_embark";
		//if( _e != 0) then{objNull remoteControl _titan;_pilot setDamage 1;};
		//_titan spawn FT_Titan_kill;
		_titan setDamage 1;
		//if(!isNil "_pilot") then{_pilot setVariable ["FT_BT",nil,true];};
	};
}];
}] remoteExec ["spawn", 0, true];
_titan_HITBOX2 setVariable ["Titan",_titan,true];

_titan_HITBOX3 = "FT_Stryder_Class_Healthbar" createVehicle position _titan; 
_titan_HITBOX3 attachto [_titan,[-0,-0.1,-5.25],"Cockpit_Pov",true]; 
_titan_HITBOX3 allowDamage false;
_titan_HITBOX3 setDir 180;

_titan setVariable ["FT_Voice","ion",true];
_titan setVariable ["FT_eject",0,true];
//_titan setVariable ["FT_autoeject",0,true];
_titan setVariable ["FT_Doom_State",0,true];
_titan setVariable ["FT_Titan_autoengagegrunt",0,true]; 
_titan setVariable ["FT_Titan_autoengagepilot",0,true]; 
_titan setVariable ["FT_Titan_autoengagetitan",0,true];
_titan setVariable ["FT_Titan_autoengagetitans",0,true];
_titan setVariable ["FT_Titan_2to1",0,true];
_titan setVariable ["FT_Titan_3to1",0,true];
_titan setVariable ["FT_Titan_4to1",0,true];
_titan setVariable ["FT_OS",0,true];
_titan setVariable ["FT_Titan_Down",0,true];
_titan setVariable ["FT_Eject",0,true];
_titan setVariable ["FT_AI_Mode",-1,true];
_titan setVariable ["FT_embark",1,true];
_titan setVariable ["Anim","a",true];
_titan setVariable ["Anim_Hitbox","a",true];
_titan setVariable ["Hit1",_titan_HITBOX1,true];
_titan setVariable ["Hit2",_titan_HITBOX2,true];
_titan setVariable ["FT_Healthbar",_titan_HITBOX3,true];
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

_titan addEventHandler ["Deleted", {
	params ["_entity"];
	_titan=_this select 0;

	//delete hitbox
	_hit1=_titan getVariable "Hit1";
	_hit2=_titan getVariable "Hit2";
	_hit3=_titan getVariable "FT_Healthbar";

	deleteVehicle _hit1;
	deleteVehicle _hit2;
	deleteVehicle _hit3;

	_titan setVariable ["FT_titan_Health",nil,true];
	_titan setVariable ["Hit1",nil,true];
	_titan setVariable ["Hit2",nil,true];
	_titan setVariable ["FT_Healthbar",nil,true];
}];

_titan addEventHandler ["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	_titan=_this select 0;
	//[_titan,"FT_ogre_death_fall_forward"] remoteExec ["switchMove", 0, true];
	//[_titan,"FT_ogre_death_fall_forward"] remoteExec ["playMoveNow", 0, true];
	'R_TBG32V_F' createVehicle (getpos _titan);
	//delete hitbox
	_hit1=_titan getVariable "Hit1";
	_hit2=_titan getVariable "Hit2";
	_hit3=_titan getVariable "FT_Healthbar";
	_pilot=_titan getVariable "FT_Pilot";
	_eject=_titan getVariable "FT_eject";

	//_titan spawn FT_Titan_reset;
	_titans=nearestObjects [_titan, ["FT_Titan_Base"], 100];
	{ [_x,_titan,_eject] spawn FT_Titan_Destroyed; } forEach _titans;

	[_titan, true] remoteExec ["hideObjectGlobal", 0];
	deleteVehicle _titan;
	deleteVehicle _hit1;
	deleteVehicle _hit2;
	deleteVehicle _hit3;

	_titan setVariable ["FT_titan_Health",nil,true];
	_titan setVariable ["Hit1",nil,true];
	_titan setVariable ["Hit2",nil,true];
	_titan setVariable ["FT_Healthbar",nil,true];
}];

_h1 = 1000;

while{alive _titan} do
{
	_health = _titan getVariable "FT_titan_Health";
	if(_h1 > _health) then {sleep 60;};//60
	if(_health == 1000) then {sleep 2;};
	if((_health >= _h1) && (_health <= 1000)) then {
	sleep 1;
	_health = _health + 50;
	_h2 = 1500 - _health;
	_bar = _titan getVariable "FT_Healthbar";	
	_bar animateSource["FT_Ogre_Class_Health",_h2,true];
	_titan setVariable ["FT_titan_Health",_health,true];
	};
	_h1 = _health;
};