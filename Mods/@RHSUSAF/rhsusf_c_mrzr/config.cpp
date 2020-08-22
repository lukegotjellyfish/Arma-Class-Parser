class CfgPatches
{
	class rhsusf_c_mrzr
	{
		units[]=
		{
			"rhsusf_mrzr4_d",
			"rhsusf_mrzr4_d_mud",
			"rhsusf_mrzr4_w",
			"rhsusf_mrzr4_w_mud"
		};
		weapons[]={};
		name="MRZR";
	};
};
class DefaultEventhandlers;
class cfgFunctions
{
	class RHS
	{
		class functions
		{
			class unflipVehicle
			{
				file="\rhsusf\addons\rhsusf_c_mrzr\scripts\unflipVehicle.sqf";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class CargoTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
		};
	};
	class MRAP_01_base_F: Car_F
	{
		class EventHandlers;
	};
	class rhsusf_mrzr_base: MRAP_01_base_F
	{
		extCameraPosition[]={0,0.75,-7};
		attenuationEffectType="OpenCarAttenuation";
		weapons[]=
		{
			"MRZRHorn"
		};
		rhs_decalParameters[]=
		{
			"['Label', [5,6,7,8,9], 'ODA_MRZR_D']",
			"['Label', [10,11], 'MRZR_Bumperstickers']"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VVT_cargo_1",
					"VVT_cargo_2"
				};
				disableHeightLimit=1;
				maxLoadMass=25000;
				cargoAlignment[]=
				{
					"left",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VVT_exit"
				};
				unloadingInterval=2;
				loadingDistance=5;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		armor=32;
		cost=50000;
		hideWeaponsDriver=0;
		HeadAimDown=15;
		getInRadius=1.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class EventHandlers: EventHandlers;  //found empty after stripping
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				canHideGunner=0;
				animationSourceHatch="FFV_turn_L";
				proxyIndex=3;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35.452599,63.741501},
						{32.4939,116.4933}
					};
					limitsArrayBottom[]=
					{
						{-18.7593,73.696899},
						{-23.6628,109.8309}
					};
				};
				playerPosition=3;
			};
			class CargoTurret_03: CargoTurret_02
			{
				animationSourceHatch="FFV_turn_R";
				proxyIndex=4;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{32.7761,-88.540398},
						{34.232399,-49.191002}
					};
					limitsArrayBottom[]=
					{
						{-29.9524,-99.7416},
						{-16.9604,-47.938099}
					};
				};
				playerPosition=4;
			};
			class CargoTurret_04: CargoTurret
			{
				proxyIndex=5;
				canHideGunner=0;
				allowLauncherIn=0;
				allowLauncherOut=0;
				class dynamicViewLimits
				{
					CargoTurret_05[]={-65,75};
				};
				playerPosition=5;
			};
			class CargoTurret_05: CargoTurret_04
			{
				proxyIndex=6;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-75,65};
				};
				playerPosition=6;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=9.8249998;
				name="wheel_1_1_disc";
				passThrough=0;
				radius=0.19;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=9.8249998;
				name="wheel_1_2_arm";
				passThrough=0;
				radius=0.19;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=9.8249998;
				name="wheel_2_1_disc";
				passThrough=0;
				radius=0.19;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=9.8249998;
				name="wheel_2_2_arm";
				passThrough=0;
				radius=0.19;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="fueltank";
				passThrough=0.2;
				radius=0.1;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				passThrough=0.2;
				radius=0.1;
			};
			class HitBody: HitBody
			{
				name="body";
				passThrough=1;
				radius=0.15000001;
			};
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.9952624,
			1,
			75
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.9952624,
			1,
			75
		};
		buildCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.9952624,
			1,
			75
		};
		buildCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.9952624,
			1,
			75
		};
		WoodCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
			1.9952624,
			1,
			75
		};
		WoodCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
			1.9952624,
			1,
			75
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.9952624,
			1,
			75
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.9952624,
			1,
			75
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.9952624,
			1,
			75
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.9952624,
			1,
			75
		};
		armorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.9952624,
			1,
			75
		};
		armorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.9952624,
			1,
			75
		};
		armorCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.9952624,
			1,
			75
		};
		armorCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.9952624,
			1,
			75
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.9952624,
			1,
			75
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.9952624,
			1,
			75
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.9952624,
			1,
			75
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.9952624,
			1,
			75
		};
		Crash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.9952624,
			1,
			75
		};
		Crash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.9952624,
			1,
			75
		};
		Crash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.9952624,
			1,
			75
		};
		Crash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.9952624,
			1,
			75
		};
		soundCrashes[]=
		{
			"Crash0",
			0.125,
			"Crash1",
			0.125,
			"Crash2",
			0.125,
			"Crash3",
			0.125,
			"Crash4",
			0.125,
			"Crash5",
			0.125,
			"Crash6",
			0.125,
			"Crash7",
			0.125
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
			0.63095737,
			1,
			50
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
			0.63095737,
			1,
			50
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095737,
			1,
			50
		};
		BushCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095737,
			0.80000001,
			50
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.25,
			"BushCrash2",
			0.25,
			"BushCrash3",
			0.25,
			"BushCrash4",
			0.25
		};
		normalSpeedForwardCoef=0.69999999;
		slowSpeedForwardCoef=0.40000001;
		turnCoef=3;
		terrainCoef=0.2;
		simulation="carx";
		maxSpeed=95;
		fuelCapacity=28;
		wheelCircumference=1.5;
		brakeIdleSpeed=1.4;
		maxFordingDepth=0.69999999;
		waterSpeedFactor=0.30000001;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness=10;
		switchTime=0.2;
		latency=1.3;
		transmissionLosses=18;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={0.36875001,0.125,0.087499999,0.0625,0.94375002,0.2,0.85624999,0.42500001,1,0.5};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.47,
				"N",
				0,
				"D1",
				3.95,
				"D2",
				2.21,
				"D3",
				1.4349999
			};
			TransmissionRatios[]=
			{
				"High",
				6.8000002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		dampersBumpCoef=0.30000001;
		differentialType="all_limited";
		frontRearSplit=0.12;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=40;
		dampingRateFullThrottle=0.050000001;
		dampingRateZeroThrottleClutchEngaged=0.15000001;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.125,0.42105299},
			{0.25,0.57894701},
			{0.375,0.63157898},
			{0.5,0.68421102},
			{0.625,0.78947401},
			{0.75,0.84210497},
			{0.875,1},
			{1.1251301,0}
		};
		engineMOI=0.1;
		enginePower=66;
		peakTorque=118.75;
		minOmega=40;
		maxOmega=837.76001;
		idleRPM=600;
		redRPM=8000;
		engineLosses=34;
		thrustDelay=0.1;
		engineBrakeCoef=0.1;
		antiRollbarForceCoef=4.4000001;
		antiRollbarForceLimit=7.4000001;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=95;
		accelAidForceSpd=2.23;
		accelAidForceCoef=8;
		accelAidForceYOffset=-1.3;
		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={0,-1,0};
				steering=1;
				width=0.2;
				mass=40;
				MOI=1.97192;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=0;
				maxCompression=0.2;
				maxDroop=0.050000001;
				sprungMass=-1;
				springStrength=17000;
				springDamperRate=2500;
				longitudinalStiffnessPerUnitGravity=9000;
				latStiffX=20;
				latStiffY=120;
				frictionVsSlipGraph[]=
				{
					{0.17,1.95},
					{0.40000001,1.55},
					{1,1.15}
				};
			};
			class LR: LF
			{
				steering=0;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=10000;
			};
			class RF: LF
			{
				steering=1;
				maxBrakeTorque=5000;
				side="right";
			};
			class RR: RF
			{
				steering=0;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=10000;
			};
		};
		class Exhausts
		{
			class Exhaust
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffect";
			};
		};
		side=1;
		class Damage;  //found empty after stripping
		class textureSources
		{
			class standard
			{
				materials[]=
				{
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue.rvmat",
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal.rvmat",
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red.rvmat",
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn.rvmat"
				};
				factions[]=
				{
					"rhs_faction_socom"
				};
			};
			class mud
			{
				materials[]=
				{
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_mud.rvmat",
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal_mud.rvmat",
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_mud.rvmat",
					"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_mud.rvmat"
				};
				factions[]=
				{
					"rhs_faction_socom"
				};
			};
			class paint1: standard
			{
				factions[]=
				{
					"rhs_faction_socom"
				};
			};
			class mud_pnt1: mud
			{
				factions[]=
				{
					"rhs_faction_socom"
				};
			};
			class olive: standard
			{
				factions[]=
				{
					"rhs_faction_socom"
				};
			};
			class mud_olive: mud
			{
				factions[]=
				{
					"rhs_faction_socom"
				};
			};
		};
		class Attributes
		{
			class rhs_define_mainset
			{
				control="Combo";
				tooltip="Define Main Set";
				property="rhs_define_mainset";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				class values
				{
					class ODA_MRZR_D
					{
						name="ODA Desert";
						value="ODA_MRZR_D";
						defaultValue="ODA_MRZR_D";
					};
				};
			};
			class rhs_hood_main
			{
				tooltip="Define Main Hood Decal.  Type 8 to show decal, type 0 to clear that place.";
				property="rhs_hood_main";
				control="Edit";
				expression="if(_value in [0,8])then{ [_this, [ [ 'Label', [5],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_hood_first
			{
				tooltip="Define Battalion Hood Decal. Type 3 to show decal, type 0 to clear that place.";
				property="rhs_hood_first";
				control="Edit";
				expression="if(_value in [0,3])then{ [_this, [ [ 'Label', [6],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_hood_battalion
			{
				tooltip="Define Battalion Hood Decal. Available numbers from 1 to 4, type 0 to clear that place.";
				property="rhs_hood_battalion";
				control="Edit";
				expression="if(_value in [0,1,2,3,4])then{ [_this, [ [ 'Label', [7],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_hood_company
			{
				tooltip="Define Company Hood Decal. Available numbers from 1 to 3, type 0 to clear that place.";
				property="rhs_hood_company";
				control="Edit";
				expression="if(_value in [0,1,2,3])then{ [_this, [ [ 'Label', [8],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_hood_team
			{
				tooltip="Define Team Hood Decal. Available numbers from 1 to 6, type 0 to clear that place.";
				property="rhs_hood_team";
				control="Edit";
				expression="if(_value in [0,1,2,3,4,5,6])then{ [_this, [ [ 'Label', [9],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
				defaultValue="-1";
				validate="NUMBER";
			};
			class rhs_bumerstickers
			{
				tooltip="Show a random bumpersticker.";
				property="rhs_bumerstickers";
				control="CheckboxNumber";
				expression="[_this, [[ 'Label', [10,11], 'MRZR_Bumperstickers', _value]]] call rhsusf_fnc_decalsInit;";
				defaultValue="0";
			};
		};
	};
	class rhsusf_mrzr4_d: rhsusf_mrzr_base
	{
		icon="\rhsusf\addons\rhsusf_mrzr\icons\rhs_mrzr4_unarmed_icon_ca.paa";
	};
	class rhsusf_mrzr4_d_mud: rhsusf_mrzr4_d
	{
		hiddenSelectionsMaterials[]=
		{
			"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_mud.rvmat",
			"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal_mud.rvmat",
			"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_mud.rvmat",
			"\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_mud.rvmat"
		};
	};
	class rhsusf_mrzr4_w: rhsusf_mrzr4_d;  //found empty after stripping
	class rhsusf_mrzr4_w_mud: rhsusf_mrzr4_d_mud;  //found empty after stripping
};
class CfgWeapons
{
	class Default;
	class MRZRHorn: Default
	{
		cursor="";
		cursorAim="";
		reloadTime=0;
		canLock=0;
		enableAttack=0;
	};
};
