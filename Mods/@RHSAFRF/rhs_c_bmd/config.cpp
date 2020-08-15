class CfgPatches
{
	class rhs_c_bmd
	{
		units[]=
		{
			"rhs_bmd1",
			"rhs_bmd1k",
			"rhs_bmd1p",
			"rhs_bmd1pk",
			"rhs_bmd1r",
			"rhs_bmd2",
			"rhs_bmd2k",
			"rhs_bmd2m"
		};
		weapons[]={};
		name="BMD-1 & 2 IFV";
	};
};
class DefaultEventHandlers;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class BMD
		{
			name="BMD Functions";
			description="BMD Init & FX thing";
			class bmd_init
			{
				file="\rhsafrf\addons\rhs_c_bmd\scripts\rhs_bmd_init.sqf";
				description="bmd init";
			};
			class bmd_habar
			{
				file="\rhsafrf\addons\rhs_c_bmd\scripts\bgr_bmd_habar.sqf";
				description="random habar";
			};
			class bmd_at14_reload
			{
				file="\rhsafrf\addons\rhs_c_bmd\scripts\rhs_at14_reload.sqf";
				description="BMD2M AT14 reload";
			};
		};
		class Habar
		{
			class setHabarEden
			{
				file="\rhsafrf\addons\rhs_c_bmd\scripts\rhs_setHabarEden.sqf";
				description="Set habar in eden";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class Components;
	};
	class rhs_bmd_base: Tank_F
	{
		rhs_habarType=2;
		rhs_decalParameters[]=
		{
			"['Number', cBMD3NumberPlaces, 'Default']",
			"['Label', cBMDPlnSymPlaces, 'Platoon',11]",
			"['Label', cBMDArmySymPlaces, 'Army', 2]"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		driveOnComponent[]=
		{
			"Track_L",
			"Track_R",
			"Slide"
		};
		displayName="$STR_BMD2_Name";
		side=0;
		icon="\rhsafrf\addons\rhs_bmd\rhs_bmd2_icon.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_APC_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_APC_p"
				};
			};
		};
		nameSound="veh_vehicle_APC_s";
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		simulation="tankX";
		normalSpeedForwardCoef=0.66000003;
		slowSpeedForwardCoef=0.34999999;
		fuelCapacity=30;
		RHS_fuelCapacity=300;
		maxSpeed=60;
		tankTurnForce=320000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.81999999;
		accelAidForceCoef=4;
		accelAidForceYOffset=-2.5;
		accelAidForceSpd=2.23;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.1;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=0.2;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.33000001;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0.29166701,0.449604},
			{0.41666701,0.74178898},
			{0.5,0.88901502},
			{0.58333302,1},
			{0.66666698,0.988675},
			{0.75,0.97281998},
			{0.83333302,0.93884498},
			{1.16917,0}
		};
		engineMOI=9;
		enginePower=179;
		peakTorque=883;
		minOmega=75;
		maxOmega=251.33;
		idleRPM=700;
		redRPM=2400;
		brakeIdleSpeed=1;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		thrustDelay=0.30000001;
		clutchStrength=22;
		engineLosses=25;
		transmissionLosses=13;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.384615,0.384615,0,0.76923102,0.384615,0.92307699,0.53846198,0.96153802,0.57692301,1,0.69230801};
		changeGearMinEffectivity[]={0.69999999,0,0.5};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-12.77,
				"N",
				0,
				"D1",
				5.5500002,
				"D2",
				3.0899999,
				"D3",
				1.7,
				"D4",
				1
			};
			AmphibiousRatios[]=
			{
				"R1",
				-9.5,
				"N",
				0,
				"D1",
				9.5
			};
			TransmissionRatios[]=
			{
				"High",
				7.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.21600001;
				steering=0;
				weight=100;
				mass=100;
				MOI=4.8053398;
				maxBrakeTorque=500;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=760;
				springStrength=98000;
				springDamperRate=4600;
				dampingRate=285;
				dampingRateInAir=285;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=5;
				latStiffY=45;
				longitudinalStiffnessPerUnitGravity=100000;
				frictionVsSlipGraph[]=
				{
					{0.17,1.55},
					{0.30000001,1.05},
					{1,1}
				};
			};
			class L3: L2
			{
			};
			class L4: L2
			{
			};
			class L5: L2
			{
			};
			class L6: L2
			{
			};
			class L9: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R3: R2
			{
			};
			class R4: R2
			{
			};
			class R5: R2
			{
			};
			class R6: R2
			{
			};
			class R9: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
		};
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7079458,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.6309574,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.63095737,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_alap",
					8.9125099,
					1,
					400
				};
				frequency="0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.79432821,
					1,
					450
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.79432821,
					1,
					500
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.89125091,
					1,
					500
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					1,
					1,
					600
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					1.1220185,
					1,
					600
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					1.4125376,
					1,
					600
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					0.89125091,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.1220185,
					1,
					450
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					2.2589254,
					1,
					500
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					2.4125376,
					1,
					500
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					2.5848932,
					1,
					600
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					2.7782793,
					1,
					600
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					2.9952624,
					1,
					600
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_int_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					1.3943282,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.56234133,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.79432821,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		tf_range_api=17000;
		enableGPS=0;
		tracksSpeed=1.35;
		wheelCircumference=2.375;
		hasCommander=1;
		hasGunner=1;
		typicalCargo[]={};
		ejectDeadCargo=0;
		unloadInCombat=1;
		viewCargoShadow=1;
		viewCargoShadowDiff=1;
		cargoCompartments[]=
		{
			"Compartment33"
		};
		LODDriverTurnedOut=0;
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		accuracy=0.69999999;
		incomingMissileDetectionSystem=0;
		cost=3000000;
		camouflage=5;
		hiddenSelections[]=
		{
			"body1",
			"body2",
			"body3",
			"n1",
			"n2",
			"n3",
			"i1",
			"i2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_co.paa",
			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_02_co.paa",
			"rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				displayName="Define font type of plate number";
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cBMD3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue=0;
				typeName="STRING";
				class values
				{
					class Default
					{
						name="Default";
						value="Default";
						defaultValue="Default";
					};
					class DefaultRed
					{
						name="Default (Red)";
						value="DefaultRed";
					};
					class BoldRed
					{
						name="Bold Red";
						value="BoldRed";
					};
					class CDF
					{
						name="CDF";
						value="CDF";
					};
					class Handpaint
					{
						name="Handpaint";
						value="Handpaint";
					};
					class HandpaintBlack
					{
						name="Handpaint Black";
						value="HandpaintBlack";
					};
					class Iraqi
					{
						name="Iraqi";
						value="Iraqi";
					};
					class LicensePlate
					{
						name="License Plate";
						value="LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed=1;
				displayName="Set side number";
				tooltip="Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				typeName="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cBMD3NumberPlaces}else{[_this, [['Number', cBMD3NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				displayName="Define platoon symbol type";
				tooltip="Decal type";
				property="rhs_decalPlatoon_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				typeName="STRING";
				class values
				{
					class Platoon
					{
						name="Platoon";
						value="Platoon";
					};
					class PlatoonGDR
					{
						name="Platoon GDR";
						value="PlatoonGDR";
					};
					class PlatoonVDV
					{
						name="Platoon VDV";
						value="PlatoonVDV";
					};
					class Army
					{
						name="Army";
						value="Army";
						defaultValue="1";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
						defaultValue="0";
					};
					class HonorGDR
					{
						name="Honor GDR";
						value="HonorGDR";
					};
				};
			};
			class rhs_decalPlatoon
			{
				displayName="Set platoon symbol";
				tooltip="Set platoon symbol located on right & rear of vehicles. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMDPlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type: rhs_decalPlatoon_type
			{
				displayName="Define army symbol type";
				property="rhs_decalArmy_type";
				expression="_this setVariable ['%s', _value];";
				class values: values
				{
					class Army: Army
					{
					};
					class Honor: Honor
					{
					};
					class HonorGDR: HonorGDR
					{
					};
					class Platoon: Platoon
					{
					};
					class PlatoonGDR: PlatoonGDR
					{
					};
					class PlatoonVDV: PlatoonVDV
					{
					};
				};
			};
			class rhs_decalArmy: rhs_decalPlatoon
			{
				displayName="Set army symbol";
				tooltip="Define symbol located on left side of vehicle. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cBMDArmySymPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class crate_l1_unhide
			{
				displayName="hide l1 crate";
				property="crate_l1_unhide";
				control="CheckboxNumber";
				expression="[_this,_value,'%s'] call rhs_fnc_setHabarEden";
				defaultValue="-1";
			};
			class crate_l2_unhide: crate_l1_unhide
			{
				displayName="hide l2 crate";
				property="crate_l2_unhide";
			};
			class crate_l3_unhide: crate_l1_unhide
			{
				displayName="hide l3 crate";
				property="crate_l3_unhide";
			};
			class crate_r1_unhide: crate_l1_unhide
			{
				displayName="hide r1 crate";
				property="crate_r1_unhide";
			};
			class crate_r2_unhide: crate_l1_unhide
			{
				displayName="hide r2 crate";
				property="crate_r2_unhide";
			};
			class crate_r3_unhide: crate_l1_unhide
			{
				displayName="hide r3 crate";
				property="crate_r3_unhide";
			};
			class wood_1_unhide: crate_l1_unhide
			{
				displayName="hide wood log 1";
				property="wood_1_unhide";
			};
			class wood_2_unhide: crate_l1_unhide
			{
				displayName="hide wood log 2";
				property="wood_2_unhide";
			};
			class rhs_disableHabar: crate_l1_unhide
			{
				displayName="Disable habar";
				property="rhs_disableHabar";
				expression="[_this,_value,'%s',_value] call rhs_fnc_setHabarEden";
				defaultValue="0";
			};
		};
		rhs_randomizedHabar[]=
		{
			"crate_l1_unhide",
			"crate_l2_unhide",
			"crate_l3_unhide",
			"crate_r1_unhide",
			"crate_r2_unhide",
			"crate_r3_unhide",
			"wood_1_unhide",
			"wood_2_unhide"
		};
		selectionLeftOffset="pasanimL";
		selectionRightOffset="pasanimP";
		animationSourceHatch="hatchDriver";
		transportMaxMagazines=160;
		transportMaxWeapons=10;
		class Damage
		{
		};
		damageResistance=0.017960001;
		secondaryExplosion=-1;
		armor=260;
		armorStructural=400;
		threat[]={0.5,0.5,1};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.40000001;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.54000002;
				explosionShielding=0.15000001;
				radius=0.1;
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.139;
				explosionShielding=0.0089999996;
				radius=0.11;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.15000001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.15000001;
				radius=0.30000001;
			};
			class HitFuel
			{
				armor=1;
				explosionShielding=0;
				material=-1;
				passThrough=1;
				radius=0.07;
				name="palivo";
			};
		};
		memoryPointGun="kulas";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargoDir="pos cargo dir";
		memoryPointSupply="doplnovani";
		memoryPointTrack1L="Stopa ll";
		memoryPointTrack1R="Stopa lr";
		memoryPointTrack2L="Stopa rl";
		memoryPointTrack2R="Stopa rr";
		memoryPointDriverOptics="driverview";
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="vyfuk1 start";
				direction="vyfuk1 konec";
				effect="ExhaustEffectTankSide";
			};
		};
		armorLights=0.1;
		driverForceOptics=1;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
		driverOpticsColor[]={1,1,1,1};
		driverOpticsEffect[]=
		{
			"OpticsCHAbera1"
		};
		driverOutOpticsEffect[]={};
		class ViewOptics
		{
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
			initAngleX=0;
			minAngleX=-110;
			maxAngleX=110;
			initAngleY=0;
			minAngleY=-110;
			maxAngleY=110;
			distanceZoomMin=20;
			distanceZoomMax=2000;
		};
		class Library
		{
			libTextDesc="$STR_BMD2_LibDesc,";
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret
			{
				proxyType="CPCommander";
				proxyIndex=1;
				dontCreateAI=1;
				primaryGunner=0;
				primaryObserver=0;
				stabilizedInAxes=0;
				animationSourceHatch="hatchCommander";
				ejectDeadGunner=0;
				commanding=6;
				startEngine=0;
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-50;
				maxTurn=50;
				initTurn=0;
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				canUseScanners=0;
				allowTabLock=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-110;
					maxAngleX=110;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					initFov=0.14;
					minFov=0.14;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
				class Hitpoints
				{
				};
			};
			class MainTurret: MainTurret
			{
				proxyType="CPGunner";
				proxyIndex=1;
				primaryGunner=1;
				primaryObserver=0;
				stabilizedInAxes=3;
				ejectDeadGunner=0;
				animationSourceHatch="hatchGunner";
				memoryPointGun="kulas";
				weapons[]=
				{
					"rhs_weap_2a42",
					"rhs_weap_pkt"
				};
				selectionFireAnim="zasleh3";
				minElev=-5;
				maxElev=60;
				initElev=10;
				minTurn=-360;
				maxTurn=360;
				initTurn=35;
				canUseScanners=0;
				allowTabLock=0;
				lockWhenDriverOut=1;
				forceHideGunner=0;
				commanding=5;
				startEngine=0;
				memoryPointMissile[]=
				{
					"Konec rakety"
				};
				memoryPointMissileDir[]=
				{
					"Spice rakety"
				};
				class Turrets
				{
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="vez";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
					};
				};
				GunnerForceOptics=1;
				class OpticsIn
				{
					class bpk142
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.125;
						minFov=0.125;
						maxFov=0.125;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
					class bpk142n
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"NVG"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
					class pzu812
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
				};
				armorLights=0.1;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
			};
			class GPMGTurret1: NewTurret
			{
				proxyType="CPGunner";
				proxyIndex=2;
				animationSourceHatch="hatchMgGunner";
				selectionFireAnim="zasleh1";
				hasGunner=1;
				dontCreateAI=1;
				soundServo[]={};
				forceHideGunner=0;
				primaryObserver=0;
				canUseScanners=0;
				allowTabLock=0;
				primaryGunner=0;
				commanding=4;
				minElev=-10;
				maxElev=10;
				minTurn=-10;
				maxTurn=10;
				weapons[]=
				{
					"rhs_weap_pkt_bmd_bow1"
				};
				ejectDeadGunner=0;
				class CargoLight
				{
					ambient[]={0.60000002,0,0.15000001,1};
					brightness=0.0070000002;
					color[]={0,0,0,0};
				};
				memoryPointGun="memoryPointGun2";
				startEngine=0;
				class Turrets
				{
				};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					distanceZoomMin=200;
					distanceZoomMax=2000;
					initFov=0.166666;
					minFov=0.166666;
					maxFov=0.166666;
				};
				class HitPoints
				{
				};
			};
			class LeftBack: NewTurret
			{
				showAsCargo=1;
				animationSourceHatch="";
				selectionFireAnim="";
				minElev=0;
				maxElev=0;
				initTurn=60;
				minTurn=60;
				maxTurn=60.000999;
				maxHorizontalRotSpeed=0;
				maxVerticalRotSpeed=0;
				proxyIndex=3;
				commanding=3;
				memoryPointGun="";
				weapons[]={};
				magazines[]={};
				forceHideGunner=1;
				hasGunner=1;
				dontCreateAI=1;
				primaryGunner=0;
				primaryObserver=0;
				canUseScanners=0;
				allowTabLock=0;
				startEngine=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-110;
					maxAngleX=110;
					initAngleY=0;
					minAngleY=-110;
					maxAngleY=110;
					distanceZoomMin=20;
					distanceZoomMax=2000;
					initFov=0.69999999;
					minFov=0.69999999;
					maxFov=0.69999999;
				};
				class HitPoints
				{
				};
			};
			class RightBack: LeftBack
			{
				initTurn=-60;
				minTurn=-60.000999;
				maxTurn=-60;
				commanding=2;
				proxyIndex=4;
			};
			class MainBack: LeftBack
			{
				initTurn=180;
				minTurn=180;
				maxTurn=180.00101;
				commanding=1;
				proxyIndex=5;
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=2;
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=3;
				maxElev=45;
				minElev=-15;
				maxTurn=81;
				minTurn=-25;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=4;
				ejectDeadGunner=1;
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
				enabledByAnimationSource="cargoHandler1";
			};
			class CargoTurret_05: CargoTurret_04
			{
				proxyIndex=5;
			};
			class CargoTurret_06: CargoTurret_04
			{
				proxyIndex=6;
			};
		};
		rhs_topPositions[]={1,2,3,4,5,6};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_bmd_init;";
				hitpart="_this call rhs_fnc_hitSpall";
				fired="_this spawn rhs_fnc_9m14_fired;";
				engine="[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_hatchAbandon";
			};
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class EmptyDisplay
				{
					componentType="EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType="CrewDisplayComponent";
					resource="RscCustomInfoCrew";
				};
			};
		};
	};
	class rhs_bmd2_base: rhs_bmd_base
	{
		simulation="tankX";
		normalSpeedForwardCoef=0.66000003;
		slowSpeedForwardCoef=0.34999999;
		fuelCapacity=30;
		RHS_fuelCapacity=300;
		maxSpeed=60;
		tankTurnForce=320000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.81999999;
		accelAidForceCoef=4;
		accelAidForceYOffset=-2.5;
		accelAidForceSpd=2.23;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.1;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=0.2;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.33000001;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0.29166701,0.449604},
			{0.41666701,0.74178898},
			{0.5,0.88901502},
			{0.58333302,1},
			{0.66666698,0.988675},
			{0.75,0.97281998},
			{0.83333302,0.93884498},
			{1.16917,0}
		};
		engineMOI=9;
		enginePower=179;
		peakTorque=883;
		minOmega=75;
		maxOmega=251.33;
		idleRPM=700;
		redRPM=2400;
		brakeIdleSpeed=1;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		thrustDelay=0.30000001;
		clutchStrength=22;
		engineLosses=25;
		transmissionLosses=13;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.384615,0.384615,0,0.76923102,0.384615,0.92307699,0.53846198,0.96153802,0.57692301,1,0.69230801};
		changeGearMinEffectivity[]={0.69999999,0,0.5};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-12.77,
				"N",
				0,
				"D1",
				5.5500002,
				"D2",
				3.0899999,
				"D3",
				1.7,
				"D4",
				1
			};
			AmphibiousRatios[]=
			{
				"R1",
				-9.5,
				"N",
				0,
				"D1",
				9.5
			};
			TransmissionRatios[]=
			{
				"High",
				7.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.21600001;
				steering=0;
				weight=100;
				mass=100;
				MOI=4.8053398;
				maxBrakeTorque=500;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=760;
				springStrength=98000;
				springDamperRate=4600;
				dampingRate=285;
				dampingRateInAir=285;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=5;
				latStiffY=45;
				longitudinalStiffnessPerUnitGravity=100000;
				frictionVsSlipGraph[]=
				{
					{0.17,1.55},
					{0.30000001,1.05},
					{1,1}
				};
			};
			class L3: L2
			{
			};
			class L4: L2
			{
			};
			class L5: L2
			{
			};
			class L6: L2
			{
			};
			class L9: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class R3: R2
			{
			};
			class R4: R2
			{
			};
			class R5: R2
			{
			};
			class R6: R2
			{
			};
			class R9: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				maxDroop=0;
				maxCompression=0;
			};
		};
		weaponsGroup1=128;
		weaponsGroup4=64;
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="Chedaki";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxhorizontalrotspeed=0.61000001;
				maxverticalrotspeed=0.104;
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						proxyType="CPGunner";
						primaryObserver=0;
						proxyindex=6;
						dontCreateAi=1;
						cantCreateAI=1;
						canUseScanners=0;
						allowTabLock=0;
						animationSourceHatch="";
						memoryPointGun="konec rakety";
						stabilizedInAxes=0;
						canHideGunner=0;
						isPersonTurret=0;
						startEngine=0;
						LODTurnedOut=0;
						LODTurnedIn=0;
						gunnerOpticsEffect[]=
						{
							"OpticsCHAbera1",
							"OpticsBlur2"
						};
						soundAttenuationTurret="HeliAttenuationGunner";
						maxHorizontalRotSpeed=0.34999999;
						maxVerticalRotSpeed=0.15000001;
						minElev=-5;
						maxElev=20;
						minTurn=-60;
						maxTurn=12;
						initElev=0;
						initTurn=-15;
						weapons[]=
						{
							"rhs_weap_9m111"
						};
						selectionFireAnim="zasleh4";
						class OpticsIn
						{
							class 9Sh119m1
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.07;
								minFov=0.07;
								maxFov=0.07;
								visionMode[]=
								{
									"Normal"
								};
							};
						};
						class OpticsOut
						{
							class Out
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								minFov=0.25;
								maxFov=1.25;
								initFov=0.75;
								visionMode[]=
								{
									"Normal"
								};
							};
						};
						class HitPoints
						{
							class HitTurretLauncher
							{
								armor=0.5;
								material=-1;
								name="launcher_base_hit";
								passThrough=0;
								minimalHit=0.14;
								explosionShielding=0.001;
								radius=0.25;
								isTurret=1;
							};
							class HitGunLauncher
							{
								armor=0.60000002;
								material=-1;
								name="launcher_hit";
								passThrough=0;
								minimalHit=0.13;
								explosionShielding=0.001;
								radius=0.25;
								isGun=1;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
						};
					};
				};
			};
			class CommanderOptics1: CommanderOptics
			{
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				fired="_this call rhs_fnc_at14_fired; ";
			};
		};
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		displayName="$STR_BMD1_Name";
		icon="\rhsafrf\addons\rhs_bmd\rhs_bmd1_icon.paa";
		class Damage
		{
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_bmd\data\sa_bmd2_01_co.paa",
			"\rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_co.paa",
			"\rhsafrf\addons\rhs_bmd\data\sa_bmd2_03_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				factions[]=
				{
					"rhs_faction_vmf",
					"rhs_faction_vdv",
					"rhs_faction_vdv",
					"rhs_faction_vv"
				};
			};
			class Camo: standard
			{
				displayName="Chedaki";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				stabilizedInAxes=0;
				weapons[]=
				{
					"rhs_weap_2a28",
					"rhs_weap_pkt",
					"rhs_weap_9k11"
				};
				minElev=-4;
				maxElev=33;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=35;
				lockWhenDriverOut=1;
				maxHorizontalRotSpeed=0.40000001;
				maxVerticalRotSpeed=0.1;
				class OpticsIn
				{
					class pn22m1
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
					class pn22m1n
					{
						initAngleX=0;
						minAngleX=-110;
						maxAngleX=110;
						initAngleY=0;
						minAngleY=-110;
						maxAngleY=110;
						distanceZoomMin=200;
						distanceZoomMax=2000;
						initFov=0.14;
						minFov=0.14;
						maxFov=0.14;
						visionMode[]=
						{
							"NVG"
						};
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
				};
			};
			class CommanderOptics1: CommanderOptics
			{
				proxyType="CPCommander";
				proxyIndex=1;
				primaryGunner=0;
				primaryObserver=0;
				stabilizedInAxes=0;
				selectionFireAnim="zasleh2";
				animationSourceHatch="hatchCommander";
				soundServo[]={};
				ejectDeadGunner=0;
				commanding=6;
				memoryPointGun="memoryPointGun";
				weapons[]=
				{
					"rhs_weap_pkt_bmd_bow2"
				};
				minElev=-10;
				maxElev=10;
				initElev=0;
				minTurn=-10;
				maxTurn=10;
				initTurn=0;
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					distanceZoomMin=200;
					distanceZoomMax=2000;
					initFov=0.166666;
					minFov=0.166666;
					maxFov=0.166666;
				};
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
	};
	class rhs_bmd1: rhs_bmd1_base
	{
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				reloaded="_this call rhs_fnc_9m14_reload;";
			};
		};
	};
	class rhs_bmd1k: rhs_bmd1_base
	{
		displayName="$STR_BMD1K_Name";
		tf_range_api=17000;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a28",
					"rhs_weap_pkt"
				};
			};
			class CommanderOptics1: CommanderOptics1
			{
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
		};
	};
	class rhs_bmd1p: rhs_bmd1_base
	{
		displayName="$STR_BMD1P_Name";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a28",
					"rhs_weap_pkt"
				};
				class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{
						proxyType="CPGunner";
						primaryObserver=0;
						proxyindex=6;
						dontCreateAi=1;
						cantCreateAI=1;
						animationSourceHatch="";
						memoryPointGun="konec rakety";
						stabilizedInAxes=0;
						canHideGunner=0;
						isPersonTurret=0;
						startEngine=0;
						LODTurnedOut=0;
						LODTurnedIn=0;
						gunnerOpticsEffect[]=
						{
							"OpticsCHAbera1",
							"OpticsBlur2"
						};
						soundAttenuationTurret="HeliAttenuationGunner";
						maxHorizontalRotSpeed=0.34999999;
						maxVerticalRotSpeed=0.15000001;
						minElev=-5;
						maxElev=20;
						minTurn=-60;
						maxTurn=12;
						initElev=0;
						initTurn=-15;
						canUseScanners=0;
						allowTabLock=0;
						weapons[]=
						{
							"rhs_weap_9m111"
						};
						selectionFireAnim="zasleh4";
						class OpticsIn
						{
							class 9Sh119m1
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.07;
								minFov=0.07;
								maxFov=0.07;
								visionMode[]=
								{
									"Normal"
								};
							};
						};
						class OpticsOut
						{
							class Out
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								minFov=0.25;
								maxFov=1.25;
								initFov=0.75;
								visionMode[]=
								{
									"Normal"
								};
							};
						};
						class HitPoints
						{
							class HitTurretLauncher
							{
								armor=0.5;
								material=-1;
								name="launcher_base_hit";
								passThrough=0;
								minimalHit=0.14;
								explosionShielding=0.001;
								radius=0.25;
								isTurret=1;
							};
							class HitGunLauncher
							{
								armor=0.60000002;
								material=-1;
								name="launcher_hit";
								passThrough=0;
								minimalHit=0.13;
								explosionShielding=0.001;
								radius=0.25;
								isGun=1;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
						};
					};
				};
			};
			class CommanderOptics1: CommanderOptics1
			{
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				fired="_this call rhs_fnc_at14_fired; ";
				getOut="if((_this select 3) isEqualTo [0,0])then{[(_this select 0),[[0],false]] remoteExecCall ['lockTurret']};_this call rhs_fnc_hatchAbandon";
			};
			class RHS_BMP1P_Lock
			{
				init="(_this select 0) lockTurret [[0,0],true]";
				reloaded="[_this select 0,_this select 1,_this select 4,'rhs_weap_9m111','rhs_weap_9m113_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
		};
	};
	class rhs_bmd1pk: rhs_bmd1_base
	{
		displayName="$STR_BMD1PK_Name";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a28",
					"rhs_weap_pkt"
				};
			};
			class CommanderOptics1: CommanderOptics1
			{
				proxyType="CPCommander";
				proxyIndex=1;
				primaryGunner=0;
				primaryObserver=1;
				stabilizedInAxes=0;
				animationSourceHatch="hatchCommander";
				ejectDeadGunner=0;
				commanding=6;
				weapons[]={};
				magazines[]={};
				minElev=-15;
				maxElev=15;
				initElev=0;
				minTurn=-50;
				maxTurn=50;
				initTurn=0;
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-110;
					maxAngleX=110;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					distanceZoomMin=100;
					distanceZoomMax=2000;
					initFov=0.14;
					minFov=0.14;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
	};
	class rhs_bmd1r: rhs_bmd1_base
	{
		displayName="$STR_BMD1R_Name";
		class Damage
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forcehidegunner=1;
				weapons[]=
				{
					"rhs_weap_s8"
				};
			};
			class CommanderOptics1: CommanderOptics1
			{
			};
			class GPMGTurretBMD1: GPMGTurret1
			{
			};
			class LeftBack1: LeftBack
			{
			};
			class RightBack1: RightBack
			{
			};
			class MainBack1: MainBack
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				fired="_this spawn fRHSBMD1RRocketonfired;";
			};
		};
	};
	class rhs_bmd2: rhs_bmd2_base
	{
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				fired="_this call rhs_fnc_at14_fired;";
				getOut="if((_this select 3) isEqualTo [0,0])then{[(_this select 0),[[0],false]] remoteExecCall ['lockTurret']};_this call rhs_fnc_hatchAbandon";
			};
			class RHS_BMD2
			{
				init="(_this select 0) lockTurret [[0,0],true]";
				reloaded="[_this select 0,_this select 1,_this select 4,'rhs_weap_9m111','rhs_weap_9m113_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
			};
		};
	};
	class rhs_bmd2m: rhs_bmd2
	{
		displayName="$STR_BMD2M_Name";
		enableGPS=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a42",
					"rhs_weap_pkt",
					"rhs_weap_9k133",
					"rhs_weap_fcs_ammo"
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
					};
					class Medium: Wide
					{
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Autotrack: Narrow
					{
						directionStabilized=1;
					};
				};
				class Turrets
				{
				};
			};
			class CommanderOptics2: CommanderOptics1
			{
			};
			class GPMGTurretBMD2: GPMGTurretBMD1
			{
				forceHideGunner=1;
			};
			class LeftBack2: LeftBack1
			{
			};
			class RightBack2: RightBack1
			{
			};
			class MainBack2: MainBack1
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class CargoTurret_06: CargoTurret_06
			{
			};
		};
		rhs_topPositions[]={1,2,3,4,6};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				reloaded="_this call rhs_fnc_bmd_at14_reload";
				fired="_this call rhs_fnc_at14_fired;";
			};
			class RHS_BMD2
			{
			};
		};
	};
	class rhs_bmd2k: rhs_bmd2
	{
		displayName="$STR_BMD2K_Name";
	};
};