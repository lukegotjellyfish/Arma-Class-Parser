class CfgPatches
{
	class rhs_c_trucks
	{
		units[]=
		{
			"rhs_gaz66_vmf",
			"rhs_gaz66_vdv",
			"rhs_gaz66_vv",
			"rhs_gaz66_msv",
			"rhs_gaz66o_vmf",
			"rhs_gaz66o_vv",
			"rhs_gaz66o_vdv",
			"rhs_gaz66o_msv",
			"rhs_gaz66_flat_vmf",
			"rhs_gaz66_flat_vdv",
			"rhs_gaz66_flat_vv",
			"rhs_gaz66_flat_msv",
			"rhs_gaz66o_flat_vmf",
			"rhs_gaz66o_flat_vv",
			"rhs_gaz66o_flat_vdv",
			"rhs_gaz66o_flat_msv",
			"rhs_gaz66_ap2_vmf",
			"rhs_gaz66_repair_vmf",
			"rhs_gaz66_r142_vmf",
			"rhs_gaz66_ammo_vmf",
			"rhs_gaz66_ap2_vdv",
			"rhs_gaz66_repair_vdv",
			"rhs_gaz66_r142_vdv",
			"rhs_gaz66_ammo_vdv",
			"rhs_gaz66_ap2_vv",
			"rhs_gaz66_repair_vv",
			"rhs_gaz66_r142_vv",
			"rhs_gaz66_ammo_vv",
			"rhs_gaz66_ap2_msv",
			"rhs_gaz66_repair_msv",
			"rhs_gaz66_r142_msv",
			"rhs_gaz66_ammo_msv",
			"rhs_gaz66_zu23_vmf",
			"rhs_gaz66_zu23_vv",
			"rhs_gaz66_zu23_vdv",
			"rhs_gaz66_zu23_msv"
		};
		weapons[]={};
		name="GAZ-66";
	};
};
class CfgFunctions
{
	class RHS
	{
		tag="RHS";
		class gaz66_functions
		{
			class gaz66_init
			{
				file="\rhsafrf\addons\rhs_c_trucks\scripts\rhs_trucks_init.sqf";
				description="Init for gaz-66 trucks";
			};
			class gaz66_radioDeploy
			{
				file="\rhsafrf\addons\rhs_c_trucks\scripts\rhs_gaz66_radioDeploy.sqf";
				description="Gaz-66 radio equipment deploy script";
			};
		};
	};
};
class CfgSounds
{
	class RHS_GAZ66_wipers
	{
		name="RHS GAZ66 wipers sound";
		sound[]=
		{
			"\rhsafrf\addons\rhs_gaz66\data\sounds\wipers.wss",
			56.234135,
			0.60000002,
			10
		};
		titles[]=
		{
			0,
			""
		};
	};
};
class DefaultEventHandlers;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
		class ViewPilot;
	};
	class Truck_F: Car_F
	{
		class AnimationSources;
	};
	class rhs_truck: Truck_F
	{
		icon="\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_CA.paa";
		displayName="$STR_RHS_GAZ66";
		side=0;
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [3,1]]"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
		nameSound="truck";
		accuracy=0.25;
		weapons[]=
		{
			"TruckHorn"
		};
		steerAheadPlan=0.25999999;
		armor=50;
		damageResistance=0.0084499996;
		armorWheels=0.12;
		cargoGetInAction[]=
		{
			"GetInLow",
			"GetInMRAP_01_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutHelicopterCargo"
		};
		memoryPointSupply="pos codriver dir";
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.44999999;
		terrainCoef=2;
		simulation="carx";
		dampersBumpCoef=2;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maxSpeed=90;
		fuelCapacity=40;
		RHS_fuelCapacity=210;
		wheelCircumference=3.3;
		brakeIdleSpeed=1;
		maxFordingDepth=0;
		waterResistance=1;
		waterResistanceCoef=0.15000001;
		waterSpeedFactor=0.2;
		waterLeakiness=10;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.9000001,
				"N",
				0,
				"D1",
				6.48,
				"D2",
				3.0899999,
				"D3",
				1.6,
				"D4",
				0.80000001
			};
			TransmissionRatios[]=
			{
				"High",
				6.79
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.82999998;
		latency=1.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1;
		clutchStrength=40;
		transmissionLosses=8;
		dampingRateFullThrottle=0.050000001;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.3125,0.89788699},
			{0.375,0.94014102},
			{0.5,0.96126801},
			{0.625,1},
			{0.78125,1},
			{0.875,0.96126801},
			{1,0.464789}
		};
		enginePower=89;
		engineMOI=0.94999999;
		peakTorque=568;
		maxOmega=335.10001;
		minOmega=50;
		idleRPM=500;
		redRPM=3200;
		engineLosses=10;
		thrustDelay=1.5;
		accelAidForceYOffset=-0.15000001;
		antiRollbarForceCoef=0.2;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=65;
		class Wheels
		{
			class LF
			{
				steering=1;
				width=0.31999999;
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				mass=80;
				MOI=28;
				dampingRate=6.0999999;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=8500;
				maxHandBrakeTorque=0;
				maxCompression=0.30000001;
				maxDroop=0.25;
				sprungMass=-1;
				springStrength=41938;
				springDamperRate=10342;
				longitudinalStiffnessPerUnitGravity=2986;
				latStiffX=25;
				latStiffY=30;
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				steering=0;
				maxHandBrakeTorque=20000;
				latStiffX=5;
			};
			class RF: LF
			{
				steering=1;
				side="right";
				suspTravelDirection[]={0.125,-1,0};
			};
			class RR: RF
			{
				steering=0;
				maxHandBrakeTorque=20000;
				latStiffX=5;
			};
		};
		soundAttenuationCargo[]={1,0.40000001};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getout",
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
			"\rhsafrf\addons\rhs_gaz66\data\sounds\Zil_Gaz66_Int_start.wss",
			0.70794576,
			1,
			300
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_gaz66\data\sounds\zil_gaz66_start.wss",
			0.70794576,
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_stop",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",
			0.70794576,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_01",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_02",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_03",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_04",
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
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
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
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
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
					"\rhsafrf\addons\rhs_gaz66\data\sounds\zil_gaz66_idle.wss",
					0.56234133,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3200) factor[(100/	3200),(800/	3200)])*0.15";
				volume="engineOn*camPos*(((rpm/	3200) factor[(10/	3200),(50/	3200)])	*	((rpm/	3200) factor[(800/	3200),(600/	3200)]))*2.0";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_gaz66\data\sounds\zil_gaz66_driving.wss",
					0.63095737,
					1,
					200
				};
				frequency="0.85	+	((rpm/	3200) factor[(610/	3200),(3200/	3200)])*0.95";
				volume="engineOn*camPos*(((rpm/	3200) factor[(620/	3200),(820/	3200)])	*	((rpm/	3200) factor[(3200/	3200),(3200/	3200)]))*2.0";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",
					0.63095737,
					1,
					200
				};
				frequency="0.85	+	((rpm/	3200) factor[(610/	3200),(6400/	3200)])*0.75";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.3,1])))*(((rpm/	3200) factor[(620/	3200),(820/	3200)])	*	((rpm/	3200) factor[(3200/	3200),(3200/	3200)]))*1.5";
			};
			class Idle_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_gaz66\data\sounds\Zil_GAz66__Int_Idle.wss",
					0.56234133,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3200) factor[(500/	3200),(800/	3200)])*0.25";
				volume="engineOn*(1-camPos)*(((rpm/	3200) factor[(10/	3200),(50/	3200)])	*	((rpm/	3200) factor[(800/	3200),(600/	3200)]))*2";
			};
			class Engine_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_gaz66\data\sounds\Zil_Gaz66_Int_Driving.wss",
					0.56234133,
					1,
					200
				};
				frequency="0.85	+	((rpm/	3200) factor[(610/	3200),(6400/	3200)])*0.95";
				volume="engineOn*(1-camPos)*(((rpm/    3200) factor[(400/    3200),(600/    3200)])    *    ((rpm/    3200) factor[(3200/    3200),(3200/    3200)]))*2.0";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01",
					0.63095737,
					1,
					200
				};
				frequency="0.85	+	((rpm/	3200) factor[(610/	3200),(3200/	3200)])*0.75";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.3,1])))*(((rpm/	3200) factor[(620/	3200),(820/	3200)])	*	((rpm/	3200) factor[(3200/	3200),(3200/	3200)]))*2";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.70794576,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class RainIn
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*(1-camPos)";
			};
			class RainExt
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss",
					1.4125376,
					1
				};
				frequency=1;
				volume="rain*camPos";
			};
		};
		cargoIsCoDriver[]={1,1,0};
		initCargoAngleY=180;
		driverCompartments=1;
		viewCargoShadow=1;
		viewCargoShadowDiff=0.050000001;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCoDriver="pos codriver";
		memoryPointsGetInCoDriverDir="pos codriver dir";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		slingLoadCargoMemoryPointsDir[]=
		{
			"SlingLoadCargo1_dir",
			"SlingLoadCargo2_dir",
			"SlingLoadCargo3_dir",
			"SlingLoadCargo4_dir"
		};
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
			"n4",
			"i1",
			"i2",
			"i3",
			"i4"
		};
		hiddenSelectionsTextures[]=
		{
			"\rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
			"\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
			};
			class camo: standard
			{
				displayName="3-Color Camo";
			};
			class cdf: standard
			{
				displayName="CDF";
			};
			class chdkz: standard
			{
				displayName="ChDKZ";
			};
			class rhs_sand: standard
			{
				displayName="Sand";
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				name="karoserie";
				armor=1;
			};
			class HitFuel: HitFuel
			{
				name="palivo";
				armor=0.30000001;
				material=-1;
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.25;
				armorComponent="wheel_1_1_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.25;
				armorComponent="wheel_1_2_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.25;
				armorComponent="wheel_2_1_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.25;
				armorComponent="wheel_2_2_hide";
				armor=-200;
				minimalHit=-0.0099999998;
				explosionShielding=4;
				passThrough=0;
			};
			class HitSpare: HitRF2Wheel
			{
				name="spare1";
			};
			class UseSpare: HitSpare
			{
				name="";
				armor=1;
			};
			class HitEngine: HitEngine
			{
				name="motor";
				armor=0.40000001;
				passThrough=0.2;
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov=0.69999999;
			minFov=0.25;
			maxFov=1.4;
			initAngleX=-15;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Damage
		{
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectHTruck";
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
				expression="_this setVariable ['%s', _value];[_this,[['Number', cTrucksGaz4NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
				displayName="Set plate number";
				tooltip="Set plate number. 4 numbers are required. If 0, random number will be generated";
				property="rhs_decalNumber";
				control="Edit";
				validate="Number";
				typeName="Number";
				defaultValue="-1";
				expression="if( _value >= 0)then{[_this,[['Number', cTrucksGaz4NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
			};
			class rhs_decalArmy_type
			{
				displayName="Define large door roundel type";
				tooltip="Decal type";
				property="rhs_decalArmy_type";
				control="Combo";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
				typeName="STRING";
				class values
				{
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
				};
			};
			class rhs_decalArmy
			{
				displayName="Set large door roundel symbol";
				tooltip="Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalArmy";
				control="Edit";
				validate="none";
				defaultValue="-1";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cTrucksGazRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalPlatoon_type: rhs_decalArmy_type
			{
				displayName="Define small door roundel type";
				property="rhs_decalPlatoon_type";
				expression="_this setVariable ['%s', _value];";
				defaultValue="0";
			};
			class rhs_decalPlatoon: rhs_decalArmy
			{
				displayName="Set small door roundel symbol";
				tooltip="Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property="rhs_decalPlatoon";
				expression="if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cTrucksGazRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_hideLightCover
			{
				displayName="Hide light covers";
				property="rhs_hideLightCover";
				control="CheckboxNumber";
				expression="_this animate ['light_hide',_value,true]";
				defaultValue="0";
			};
			class rhs_hidespare: rhs_hideLightCover
			{
				displayName="Remove spare wheel";
				property="rhs_hidespare";
				expression="_this animate ['spare_hide',_value,true]";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=9;
				maxTurn=95;
				minTurn=20;
				minElev=-45;
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_gaz66_init";
				dammaged="_this call rhs_fnc_wheelDamaged";
			};
		};
	};
	class rhs_gaz66_vmf: rhs_truck
	{
	};
	class rhs_gaz66_vdv: rhs_gaz66_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66_vv: rhs_gaz66_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66_msv: rhs_gaz66_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66_flat_vmf: rhs_gaz66_vmf
	{
		displayName="$STR_RHS_GAZ66FLAT";
		class Turrets
		{
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="O_Parachute_02_F";
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
				disableHeightLimit=0;
				maxLoadMass=25000;
				cargoAlignment[]=
				{
					"center",
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
				parachuteClassDefault="O_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhs_gaz66_flat_vdv: rhs_gaz66_flat_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66_flat_vv: rhs_gaz66_flat_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66_flat_msv: rhs_gaz66_flat_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66o_vmf: rhs_gaz66_vmf
	{
		displayName="$STR_RHS_GAZ66OPEN";
		soundAttenuationCargo[]={1,0};
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_02
			{
				animationSourceHatch="turnout1";
				proxyIndex=23;
				maxElev=45;
				minElev=-25;
				maxTurn=60;
				minTurn=-85;
				isPersonTurret=2;
				canHideGunner=1;
				allowLauncherOut=1;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35,-85},
						{35,60}
					};
					limitsArrayBottom[]=
					{
						{-25,-65},
						{-25,-49},
						{-45,-36},
						{-4,-28},
						{-1,-7},
						{-1,40},
						{-6,51},
						{-25,52},
						{-25,76}
					};
					turnOffset=-90;
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				animationSourceHatch="turnout2";
				proxyIndex=24;
				maxTurn=25;
				minTurn=-60;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{35,-60},
						{35,95}
					};
					limitsArrayBottom[]=
					{
						{-19,-60},
						{-22,-57},
						{-22,-47},
						{-1,-42},
						{-1,-28},
						{-1,-10},
						{-1,20},
						{-7,35},
						{-45,36},
						{-15,95}
					};
					turnOffset=-90;
				};
			};
		};
	};
	class rhs_gaz66o_vdv: rhs_gaz66o_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66o_vv: rhs_gaz66o_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66o_msv: rhs_gaz66o_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66o_flat_vmf: rhs_gaz66o_vmf
	{
		displayName="GAZ-66 (Open/Flatbed)";
		class Turrets
		{
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="O_Parachute_02_F";
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
					"center",
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
				parachuteClassDefault="O_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
	};
	class rhs_gaz66o_flat_vdv: rhs_gaz66o_flat_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66o_flat_vv: rhs_gaz66o_flat_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66o_flat_msv: rhs_gaz66o_flat_vmf
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66_r142_base: rhs_gaz66_vmf
	{
		displayName="$STR_RHS_GAZ66R";
		icon="\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_radio_CA.paa";
		maxFordingDepth=1.2;
		tf_range=10000;
		class Damage
		{
		};
		class Turrets
		{
		};
		class Attributes: Attributes
		{
			class rhs_radioDeploy
			{
				displayName="Deploy Mast";
				tooltip="Deploys R-142N radio mast";
				property="rhs_radioDeploy";
				control="CheckboxNumber";
				expression="[_this,_value,true] call rhs_fnc_gaz66_radioDeploy";
				defaultValue="0";
			};
			class rhs_decalNumber_type: rhs_decalNumber_type
			{
			};
			class rhs_decalNumber: rhs_decalNumber
			{
			};
			class rhs_decalArmy_type: rhs_decalArmy_type
			{
			};
			class rhs_decalArmy: rhs_decalArmy
			{
			};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type
			{
			};
			class rhs_decalPlatoon: rhs_decalPlatoon
			{
			};
			class rhs_hideLightCover: rhs_hideLightCover
			{
			};
			class rhs_hidespare: rhs_hidespare
			{
			};
		};
	};
	class rhs_gaz66_r142_vmf: rhs_gaz66_r142_base
	{
	};
	class rhs_gaz66_r142_vdv: rhs_gaz66_r142_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66_r142_msv: rhs_gaz66_r142_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66_r142_vv: rhs_gaz66_r142_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66_repair_base: rhs_gaz66_vmf
	{
		icon="\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_repair_CA.paa";
		memoryPointSupply="doplnovani";
		displayName="$STR_RHS_GAZ66REP";
		transportRepair=2000000000;
		supplyRadius=6.8000002;
		class Damage
		{
		};
		class Turrets
		{
		};
	};
	class rhs_gaz66_repair_vmf: rhs_gaz66_repair_base
	{
	};
	class rhs_gaz66_repair_vdv: rhs_gaz66_repair_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66_repair_vv: rhs_gaz66_repair_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66_repair_msv: rhs_gaz66_repair_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66_ap2_base: rhs_gaz66_vmf
	{
		displayName="$STR_RHS_GAZ66AP2";
		icon="\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_med_CA.paa";
		attendant=1;
		memoryPointSupply="doplnovani";
		supplyRadius=4.5;
		class Damage
		{
		};
		class Turrets
		{
		};
	};
	class rhs_gaz66_ap2_vmf: rhs_gaz66_ap2_base
	{
	};
	class rhs_gaz66_ap2_vdv: rhs_gaz66_ap2_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66_ap2_vv: rhs_gaz66_ap2_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66_ap2_msv: rhs_gaz66_ap2_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66_ammo_base: rhs_gaz66_vmf
	{
		displayName="$STR_RHS_GAZ66AMMO";
		transportAmmo=30000;
		supplyRadius=9.5;
		memoryPointSupply="doplnovani";
		icon="\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_ammo_CA.paa";
		class Damage
		{
		};
		class Turrets
		{
		};
	};
	class rhs_gaz66_ammo_vmf: rhs_gaz66_ammo_base
	{
	};
	class rhs_gaz66_ammo_vdv: rhs_gaz66_ammo_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
	};
	class rhs_gaz66_ammo_vv: rhs_gaz66_ammo_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
	};
	class rhs_gaz66_ammo_msv: rhs_gaz66_ammo_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
	};
	class rhs_gaz66_zu23_base: rhs_gaz66_vmf
	{
		displayName="$STR_RHS_GAZ66_ZU23";
		icon="\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_ammo_CA.paa";
		class Damage
		{
		};
		threat[]={0.60000002,0.1,0.60000002};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				minElev=-10;
				maxElev=85;
				initElev=18;
				weapons[]=
				{
					"rhs_weap_2A14"
				};
				selectionFireAnim="zasleh";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointGun[]=
				{
					"muzzle_1",
					"muzzle_2"
				};
				memorypointgunneroptics="gunnerview";
				stabilizedInAxes=0;
				startEngine=0;
				canUseScanners=0;
				allowTabLock=0;
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.093000002;
					minFov=0.093000002;
					maxFov=0.093000002;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera3"
						};
						gunnerOutOpticsEffect[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera3"
						};
						visionMode[]=
						{
							"Normal"
						};
					};
				};
				soundAttenuationTurret="HeliAttenuationRamp";
				class Hitpoints
				{
					class HitTurret
					{
						armor=-40;
						material=-1;
						name="Hit_Turret";
						armorComponent="Hit_Turret";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.0089999996;
						radius=0.15000001;
					};
					class HitGun
					{
						armor=-30;
						material=-1;
						name="Hit_Gun";
						armorComponent="Hit_Gun";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.001;
						radius=0.12;
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				playerPosition=1;
				commanding=2;
				primaryObserver=0;
				proxyIndex=4;
				isPersonTurret=2;
				animationSourceHatch="gunner_rf_turn";
				allowLauncherOut=1;
				canHideGunner=1;
				dontCreateAI=1;
				minElev=-45;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{45,-180},
						{45,180}
					};
					limitsArrayBottom[]=
					{
						{-25,-65},
						{-4,-50.686699},
						{-4,-22.686701},
						{-2,6.6866999},
						{-12,28},
						{-45,34},
						{-45,84}
					};
					turnOffset=-180;
				};
			};
		};
	};
	class rhs_gaz66_zu23_vmf: rhs_gaz66_zu23_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
	class rhs_gaz66_zu23_vdv: rhs_gaz66_zu23_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', 2]",
			"['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
	class rhs_gaz66_zu23_vv: rhs_gaz66_zu23_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
	class rhs_gaz66_zu23_msv: rhs_gaz66_zu23_base
	{
		rhs_decalParameters[]=
		{
			"['Number', cTrucksGaz4NumberPlaces, 'Default']",
			"['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
		};
	};
};