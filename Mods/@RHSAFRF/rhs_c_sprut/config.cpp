class CfgPatches
{
	class rhs_c_sprut
	{
		units[]=
		{
			"rhs_sprut_vdv",
			"rhs_bmd4_vdv",
			"rhs_bmd4m_vdv",
			"rhs_bmd4ma_vdv"
		};
		weapons[]={};
		name="BMD-4 & Sprut-SD";
	};
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class functions
		{
			class bmd4_autoloader
			{
				file="\rhsafrf\addons\rhs_c_sprut\scripts\rhs_autoloader_bmd.sqf";
				description="Autoloader gun anim & stub ejection for BMD4/BMP3";
			};
			class sprut_autoloader
			{
				file="\rhsafrf\addons\rhs_c_sprut\scripts\rhs_autoloader_sprut.sqf";
				description="Autoloader gun anim & stub ejection for Sprut-SD";
			};
			class sprut_init
			{
				file="\rhsafrf\addons\rhs_c_sprut\scripts\rhs_sprut_init.sqf";
				description="Initialization script for Sprut-SD / BMD4";
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
	class rhs_a3spruttank_base: Tank_F
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSSPRUTNumberPlaces,'Default']",
			"['Label',cRHSSPRUTPlnSymPlaces, 'Platoon',11]"
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
		displayName="$STR_SPRUT_Name";
		accuracy=0.30000001;
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		typicalCargo[]={};
		side=0;
		driverCanSee="2+4+8";
		commanderCanSee="2+4+8";
		tf_range_api=35000;
		incomingMissileDetectionSystem=0;
		enableGPS=1;
		reportOwnPosition=1;
		driverOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
		LODDriverTurnedOut=0;
		simulation="tankX";
		normalSpeedForwardCoef=0.85000002;
		slowSpeedForwardCoef=0.5;
		fuelCapacity=25;
		RHS_fuelCapacity=560;
		tankTurnForce=550000;
		tankTurnForceAngMinSpd=0.5;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=2;
		accelAidForceYOffset=-7;
		accelAidForceSpd=2.23;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.1;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=1.7;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.34999999;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0.30434799,0.40000001},
			{0.43478301,0.72375703},
			{0.52173901,0.95303899},
			{0.60869598,1},
			{0.69565201,0.966851},
			{0.78260899,0.90055299},
			{0.86956501,0.81215501},
			{1.1352201,0}
		};
		engineMOI=25;
		enginePower=336;
		peakTorque=1810;
		minOmega=67.860001;
		maxOmega=240.86;
		idleRPM=700;
		redRPM=2300;
		thrustDelay=0.25;
		engineLosses=32;
		transmissionLosses=20;
		clutchStrength=15;
		switchTime=0.1;
		latency=0.1;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.91304302,0.60869598,0.95652199,0.60869598,0.95652199,0.60869598,1,0.652174,1,0.652174};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.3099999,
				"N",
				0,
				"D1",
				3.3099999,
				"D2",
				1.934,
				"D3",
				1.132,
				"D4",
				0.86199999,
				"D5",
				0.61000001
			};
			TransmissionRatios[]=
			{
				"High",
				11.8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				10
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.60000002;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				width=0.31999999;
				steering=0;
				mass=100;
				MOI=5.5112;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				maxBrakeTorque=1500;
				sprungMass=1500;
				springStrength=285400;
				springDamperRate=7500;
				dampingRate=611;
				dampingRateInAir=611;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=42000;
				frictionVsSlipGraph[]=
				{
					{0,0.44999999},
					{0.18000001,1},
					{0.69999999,0.75}
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
			class L7: L2
			{
			};
			class L8: L2
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
				suspTravelDirection[]={0.125,-1,0};
				side="right";
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
			class R7: R2
			{
			};
			class R8: R2
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
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_start",
			0.63095737,
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle",
					0.70794576,
					1,
					200
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
					200
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
					200
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
					250
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
					300
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
					340
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
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle",
					0.89125091,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2",
					1.2589254,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3",
					1.4125376,
					1,
					250
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4",
					1.5848932,
					1,
					350
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5",
					1.7782794,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6",
					1.9952624,
					1,
					450
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_idle",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm1",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm2",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm3",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm4",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm5",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm6",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_idle",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm1",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm2",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm3",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm4",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm5",
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm6",
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
		tracksSpeed=1.35;
		wheelCircumference=2.01;
		attenuationEffectType="TankAttenuation";
		cost=1500000;
		armor=200;
		armorStructural=500;
		damageResistance=0.02;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.40000001;
				material=-1;
				name="telo";
				passThrough=0;
				minimalHit=0.54000002;
				explosionShielding=0;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				material=-1;
				name="motor";
				passThrough=0;
				minimalHit=0.139;
				explosionShielding=0.0089999996;
				radius=0.17;
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
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						weapons[]={};
						magazines[]={};
						canUseScanners=0;
						allowTabLock=0;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
						};
						class OpticsIn
						{
							class DayMain: ViewOptics
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
							};
							class Day2: DayMain
							{
								initFov=0.14;
								minFov=0.14;
								maxFov=0.14;
							};
							class Day3: DayMain
							{
								initFov=0.050000001;
								minFov=0.050000001;
								maxFov=0.050000001;
							};
							class night: DayMain
							{
								initFov=0.14;
								minFov=0.14;
								maxFov=0.14;
								visionMode[]=
								{
									"NVG"
								};
							};
						};
						isPersonTurret=1;
						personTurretAction="RHS_VehicleTurnout_Sprut_1";
						minOutElev=-30;
						maxOutElev=35;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=90;
						initOutTurn=0;
						startEngine=0;
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret=1;
								armor=0.69999999;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.13;
								explosionShielding=0.001;
								radius=0.12;
							};
							class HitGunCom
							{
								isGun=1;
								armor=0.69999999;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=0.13;
								explosionShielding=0.001;
								radius=0.12;
							};
						};
						selectionFireAnim="zasleh3";
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
								};
							};
						};
					};
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				weapons[]=
				{
					"rhs_weap_2a75",
					"rhs_weap_pkt_bmd_coax",
					"rhs_weap_PL1",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				maxHorizontalRotSpeed=0.52999997;
				maxVerticalRotSpeed=0.12;
				minElev=-5;
				maxElev=16;
				initElev=10;
				startEngine=0;
				lockWhenDriverOut=1;
				isPersonTurret=1;
				personTurretAction="RHS_VehicleTurnout_1";
				minOutElev=-30;
				maxOutElev=35;
				initOutElev=0;
				minOutTurn=-90;
				maxOutTurn=90;
				initOutTurn=0;
				canUseScanners=0;
				allowTabLock=0;
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"WeaponsOptics",
					"OpticsCHAbera3"
				};
				class OpticsIn
				{
					class DayMain: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.077777803;
						minFov=0.077777803;
						maxFov=0.077777803;
						visionMode[]=
						{
							"Normal"
						};
					};
					class Rocket: DayMain
					{
						initFov=0.087499999;
						minFov=0.087499999;
						maxFov=0.087499999;
					};
					class Periscope: DayMain
					{
						initFov=0.46666601;
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2",
							"OpticsCHAbera2"
						};
					};
					class night: DayMain
					{
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						visionMode[]=
						{
							"NVG"
						};
					};
				};
				forceHideGunner=0;
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
						class MinimapDisplay
						{
							componentType="MinimapDisplayComponent";
							resource="RscCustomInfoMiniMap";
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
						class MinimapDisplay
						{
							componentType="MinimapDisplayComponent";
							resource="RscCustomInfoMiniMap";
						};
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"n1",
			"n2",
			"n3",
			"i1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_sprut\data\sprut_hull_co.paa",
			"rhsafrf\addons\rhs_sprut\data\sprut_turret_co.paa",
			"rhsafrf\addons\rhs_sprut\data\bmd34roadwheel_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
			};
			class r1: standard
			{
				displayName="#1";
			};
			class r2: standard
			{
				displayName="#2";
			};
			class r3: standard
			{
				displayName="#3";
			};
			class r4: standard
			{
				displayName="#4";
			};
			class r5: standard
			{
				displayName="#5";
			};
		};
		class Attributes
		{
			class rhs_decalNumber_type
			{
				displayName="Define font type of plate number";
				tooltip="Define kind of font that will be drawn on vehicle.";
				property="rhs_decalNumber_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHSSPRUTNumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSSPRUTNumberPlaces}else{[_this, [['Number', cRHSSPRUTNumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
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
						defaultValue="Army";
					};
					class Honor
					{
						name="Honor";
						value="Honor";
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
				tooltip="Set platoon symbol located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHSSPRUTPlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_ammoslot_1_type
			{
				displayName="Ammo slot #1 type";
				tooltip="Define type of shell for #1 slot";
				property="rhs_ammoslot_1_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue=0;
				typeName="STRING";
				class values
				{
					class rhs_mag_3bm46_10
					{
						name="$STR_rhs_mag_3bm46";
						value="rhs_mag_3bm46";
						defaultValue="rhs_mag_3bm46";
					};
					class rhs_mag_3bm9_10
					{
						name="$STR_rhs_mag_3bm9";
						value="rhs_mag_3bm9";
						defaultValue="rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name="$STR_rhs_mag_3bm12";
						value="rhs_mag_3bm12";
						defaultValue="rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name="$STR_rhs_mag_3bm15";
						value="rhs_mag_3bm15";
						defaultValue="rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name="$STR_rhs_mag_3bm17";
						value="rhs_mag_3bm17";
						defaultValue="rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name="$STR_rhs_mag_3bm22";
						value="rhs_mag_3bm22";
						defaultValue="rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name="$STR_rhs_mag_3bm29";
						value="rhs_mag_3bm29";
						defaultValue="rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name="$STR_rhs_mag_3bm26";
						value="rhs_mag_3bm26";
						defaultValue="rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name="$STR_rhs_mag_3bm32";
						value="rhs_mag_3bm32";
						defaultValue="rhs_mag_3bm32";
					};
					class rhs_mag_3bm42_10
					{
						name="$STR_rhs_mag_3bm42";
						value="rhs_mag_3bm42";
						defaultValue="rhs_mag_3bm42";
					};
					class rhs_mag_3bm42m_10
					{
						name="$STR_rhs_mag_3bm42m";
						value="rhs_mag_3bm42m";
						defaultValue="rhs_mag_3bm42m";
					};
				};
			};
			class rhs_ammoslot_1
			{
				displayName="Ammo slot #1 count";
				tooltip="Define number of rounds stored inside of type #1. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_1";
				control="Edit";
				expression="if(_value >= 0)then{ [_this,_value,'%s',22] spawn rhs_fnc_TTanks_DefineLoadout};";
				defaultValue="-1";
				validate="NUMBER";
				typeName="NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #2 type";
				tooltip="Define type of shell for #2 slot";
				property="rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_3bk31_8
					{
						name="$STR_rhs_mag_3bk31";
						value="rhs_mag_3bk31";
						defaultValue="rhs_mag_3bk31";
					};
					class rhs_mag_3bk12_8
					{
						name="$STR_rhs_mag_3bk12";
						value="rhs_mag_3bk12";
						defaultValue="rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name="$STR_rhs_mag_3bk14";
						value="rhs_mag_3bk14";
						defaultValue="rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name="$STR_rhs_mag_3bk18";
						value="rhs_mag_3bk18";
						defaultValue="rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name="$STR_rhs_mag_3bk18m";
						value="rhs_mag_3bk18m";
						defaultValue="rhs_mag_3bk18m";
					};
					class rhs_mag_3bk21_8
					{
						name="$STR_rhs_mag_3bk21";
						value="rhs_mag_3bk21";
						defaultValue="rhs_mag_3bk21";
					};
					class rhs_mag_3bk29_8
					{
						name="$STR_rhs_mag_3bk29";
						value="rhs_mag_3bk29";
						defaultValue="rhs_mag_3bk29";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				displayName="Ammo slot #2 count";
				tooltip="Define number of rounds stored inside of type #2. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #3 type";
				tooltip="Define type of shell for #3 slot";
				property="rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_3of26_6
					{
						name="$STR_rhs_mag_3of26";
						value="rhs_mag_3of26";
						defaultValue="rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name="$STR_rhs_mag_3of11";
						value="rhs_mag_3of11";
						defaultValue="rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				displayName="Ammo slot #3 count";
				tooltip="Define number of rounds stored inside of type #3. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				displayName="Ammo slot #4 type";
				tooltip="Define type of shell for #4 slot";
				property="rhs_ammoslot4_type";
				class values
				{
					class rhs_mag_9m119m_6
					{
						name="$STR_rhs_mag_9m119m";
						value="rhs_mag_9m119m";
						defaultValue="rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name="$STR_rhs_mag_9m119";
						value="rhs_mag_9m119";
						defaultValue="rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name="$STR_rhs_mag_9m119f";
						value="rhs_mag_9m119f";
						defaultValue="rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				displayName="Ammo slot #4 count";
				tooltip="Define number of rounds stored inside of type #4. Max 22. Leave -1 for default loadout";
				property="rhs_ammoslot_4";
			};
		};
		class Damage
		{
		};
		smokeLauncherGrenadeCount=3;
		smokeLauncherVelocity=17;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=60;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.69999999;
			minFov=0.69999999;
			maxFov=0.69999999;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaustl";
				direction="exhaustl_dir";
				effect="ExhaustEffectTankBack";
			};
			class Exhaust2
			{
				position="exhaustr";
				direction="exhaustr_dir";
				effect="ExhaustEffectTankBack";
			};
		};
		armorLights=0.1;
		class EventHandlers: DefaultEventhandlers
		{
			class RHS_EventHandlers
			{
				init="_this call RHS_fnc_sprut_init;";
				fired="_this call RHS_fnc_Sprut_autoloader;";
				hitpart="_this call rhs_fnc_hitSpall";
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
	class rhs_sprut_vdv: rhs_a3spruttank_base
	{
		displayName="$STR_SPRUT_Name";
	};
	class rhs_bmd4_vdv: rhs_a3spruttank_base
	{
		rhs_decalParameters[]=
		{
			"['Number',cRHSBMD4NumberPlaces,'Default']",
			"['Label',cRHSBMD4PlnSymPlaces, 'Platoon',11]"
		};
		displayName="$STR_BMD4_Name";
		simulation="tankX";
		normalSpeedForwardCoef=0.85000002;
		slowSpeedForwardCoef=0.5;
		fuelCapacity=560;
		RHS_fuelCapacity=560;
		brakeIdleSpeed=1;
		tankTurnForce=350000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.85000002;
		accelAidForceCoef=2;
		accelAidForceYOffset=-6;
		accelAidForceSpd=2.23;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=10.1;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=0.69999999;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		waterResistanceCoef=0.375;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		waterFastEffectSpeed=28;
		torqueCurve[]=
		{
			{0.30434799,0.40000001},
			{0.43478301,0.72375703},
			{0.52173901,0.95303899},
			{0.60869598,1},
			{0.69565201,0.966851},
			{0.78260899,0.90055299},
			{0.86956501,0.81215501},
			{1.1352201,0}
		};
		engineMOI=25;
		enginePower=336;
		peakTorque=1810;
		minOmega=67.860001;
		maxOmega=240.86;
		idleRPM=700;
		redRPM=2300;
		thrustDelay=0.25;
		engineLosses=32;
		transmissionLosses=20;
		clutchStrength=25;
		switchTime=0.1;
		latency=0.1;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.43478301,0.43478301,0,0.91304302,0.60869598,0.95652199,0.60869598,0.95652199,0.60869598,1,0.652174};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.3099999,
				"N",
				0,
				"D1",
				3.3099999,
				"D2",
				1.934,
				"D3",
				1.132,
				"D4",
				0.662
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
				11.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.60000002;
		};
		class Wheels
		{
			class L2
			{
				suspTravelDirection[]={-0.125,-1,0};
				side="left";
				width=0.31999999;
				steering=0;
				mass=100;
				MOI=5.5112;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				maxBrakeTorque=1500;
				sprungMass=1380;
				springStrength=235400;
				springDamperRate=8500;
				dampingRate=605;
				dampingRateInAir=605;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=42000;
				frictionVsSlipGraph[]=
				{
					{0,0.44999999},
					{0.18000001,1},
					{0.69999999,0.89999998}
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
				suspTravelDirection[]={0.125,-1,0};
				side="right";
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
				sprungMass=1700;
				springStrength=45500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
		};
		unloadInCombat=1;
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		weaponsGroup1="1 + 16";
		weaponsGroup2=128;
		weaponsGroup3=2;
		weaponsGroup4=4;
		cargoCompartments[]=
		{
			"Compartment3"
		};
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
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"n1",
			"n2",
			"n3",
			"i1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd3_01_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
			"rhsafrf\addons\rhs_sprut\data\bmd34roadwheel_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources: textureSources
		{
			class standard: standard
			{
				displayName="Standard";
			};
			class r1: r1
			{
			};
			class r2: r2
			{
			};
			class r3: r3
			{
			};
			class r4: r4
			{
			};
			class r5: r5
			{
			};
		};
		class Attributes: Attributes
		{
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
				expression="_this setVariable ['%s', _value];[_this,[['Number', cRHSBMD4NumberPlaces, _value]]] call rhs_fnc_decalsInit";
			};
			class rhs_decalNumber: rhs_decalNumber
			{
				expression="if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSBMD4NumberPlaces}else{[_this, [['Number', cRHSBMD4NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type
			{
			};
			class rhs_decalPlatoon: rhs_decalPlatoon
			{
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHSBMD4PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						commanding=5;
						primaryObserver=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-5;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						weapons[]={};
						magazines[]={};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
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
						};
						personTurretAction="RHS_VehicleTurnout_1";
						startEngine=0;
						dontCreateAI=1;
						class HitPoints
						{
							class HitTurretCom
							{
								armor=0.69999999;
								material=-1;
								name="vezVelitele";
								passThrough=0;
								minimalHit=0.13;
								explosionShielding=0.001;
								radius=0.12;
								isTurret=1;
							};
							class HitGunCom
							{
								armor=0.69999999;
								material=-1;
								name="zbranVelitele";
								passThrough=0;
								minimalHit=0.13;
								explosionShielding=0.001;
								radius=0.12;
								isTurret=1;
							};
						};
						selectionFireAnim="zasleh3";
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
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
								class MinimapDisplay
								{
									componentType="MinimapDisplayComponent";
									resource="RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType="TransportFeedDisplayComponent";
									source="PrimaryGunner";
								};
							};
						};
					};
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				weapons[]=
				{
					"rhs_weap_2a70",
					"rhs_weap_2a72",
					"rhs_weap_pkt_bmd_coax",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				maxHorizontalRotSpeed=0.55000001;
				maxVerticalRotSpeed=0.55000001;
				minElev=-5;
				maxElev=60;
				initElev=10;
				startEngine=0;
				gunnerOutOpticsEffect[]=
				{
					"TankGunnerOptics1",
					"BWTV"
				};
				commanding=3;
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
					class Narrow: Wide
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
				forceHideGunner=0;
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
			};
			class GPMGTurret1: NewTurret
			{
				proxyType="CPGunner";
				proxyIndex=2;
				animationSourceHatch="";
				selectionFireAnim="zasleh3";
				hasGunner=1;
				dontCreateAI=1;
				forceHideGunner=1;
				primaryObserver=0;
				primaryGunner=0;
				commanding=1;
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
				unloadInCombat=1;
				class HitPoints
				{
				};
			};
			class LeftBack: NewTurret
			{
				proxyType="CPGunner";
				animationSourceHatch="";
				selectionFireAnim="";
				minElev=0;
				maxElev=0;
				initTurn=60;
				minTurn=60;
				maxTurn=60.000999;
				maxHorizontalRotSpeed=0;
				maxVerticalRotSpeed=0;
				proxyIndex=4;
				commanding=2;
				memoryPointGun="";
				weapons[]={};
				magazines[]={};
				forceHideGunner=1;
				hasGunner=1;
				dontCreateAI=1;
				primaryGunner=0;
				primaryObserver=0;
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
				unloadInCombat=1;
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
				proxyIndex=5;
			};
			class MainFront: LeftBack
			{
				initTurn=0;
				minTurn=0;
				maxTurn=0.001;
				commanding=1;
				proxyIndex=3;
			};
		};
		class Damage
		{
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call RHS_fnc_sprut_init;";
				fired="_this call RHS_fnc_BMD4_autoloader;";
				hitpart="_this call rhs_fnc_hitSpall";
				engine="[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay";
				getOut="_this call rhs_fnc_hatchAbandon";
			};
		};
	};
	class rhs_bmd4m_vdv: rhs_bmd4_vdv
	{
		simulation="tankX";
		normalSpeedForwardCoef=0.85000002;
		slowSpeedForwardCoef=0.5;
		torqueCurve[]=
		{
			{0.28846201,0.44999999},
			{0.384615,0.69270802},
			{0.46153799,0.890625},
			{0.56153798,1},
			{0.615385,0.94270802},
			{0.76923102,0.859375},
			{0.884615,0.765625},
			{1.11962,0}
		};
		enginePower=373;
		peakTorque=1920;
		maxOmega=272.26999;
		idleRPM=750;
		redRPM=2600;
		class Wheels: Wheels
		{
			class L2: L2
			{
				dampingRate=611;
				dampingRateInAir=611;
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
				suspTravelDirection[]={0.125,-1,0};
				side="right";
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
		displayName="$STR_BMD4M_Name";
		class Hitpoints: HitPoints
		{
			class Armor_Composite_75
			{
				armor=999;
				material=-1;
				name="Armor_CE_75_Hit";
				armorComponent="Armor_CE_75";
				simulation="RHS_Composite_75";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_85
			{
				armor=999;
				material=-1;
				name="Armor_CE_85_Hit";
				armorComponent="Armor_CE_85";
				simulation="RHS_Composite_85";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_02a_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_w_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources: textureSources
		{
			class standard: standard
			{
				displayName="Standard";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
			class GPMGTurret1: GPMGTurret1
			{
			};
			class GPMGTurret2: GPMGTurret1
			{
				weapons[]=
				{
					"rhs_weap_pkt_bmd_bow2"
				};
				commanding=1;
				memoryPointGun="memoryPointGun3";
				selectionFireAnim="zasleh4";
				proxyIndex=3;
			};
			class RightBack: RightBack
			{
			};
			class LeftBack: LeftBack
			{
			};
			class MiddleBack: LeftBack
			{
				proxyIndex=6;
			};
		};
		class Damage
		{
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaustl";
				direction="exhaustl_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="exhaustr";
				direction="exhaustr_dir";
				effect="ExhaustEffectTankSide";
			};
		};
	};
	class rhs_bmd4ma_vdv: rhs_bmd4m_vdv
	{
		displayName="$STR_BMD4MA_Name";
		class Hitpoints: Hitpoints
		{
			class Armor_Composite_60
			{
				armor=999;
				material=-1;
				name="Armor_CE_60_Hit";
				armorComponent="Armor_CE_60";
				simulation="RHS_Composite_60";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
			class Armor_Composite_80
			{
				armor=999;
				material=-1;
				name="Armor_CE_80_Hit";
				armorComponent="Armor_CE_80";
				simulation="RHS_Composite_80";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.001;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_01a_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_02a_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_w_co.paa",
			"rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_a_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources: textureSources
		{
			class standard: standard
			{
				displayName="Standard";
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class Proxyhull_proxy_bmd4: ProxyRetex
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
	};
	class Proxyhull_proxy_bmd4m: Proxyhull_proxy_bmd4
	{
	};
	class Proxyhull_proxy_bmd4ma: Proxyhull_proxy_bmd4
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
	};
	class Proxyturret_proxy_bmd4: Proxyhull_proxy_bmd4
	{
	};
	class Proxyturret_proxy_bmd4m: Proxyhull_proxy_bmd4
	{
	};
	class Proxyturret_proxy_bmd4ma: Proxyhull_proxy_bmd4ma
	{
	};
	class Proxyproxy_skirtL_bmd4ma: Proxyhull_proxy_bmd4ma
	{
	};
	class Proxyproxy_skirtR_bmd4ma: Proxyhull_proxy_bmd4ma
	{
	};
};