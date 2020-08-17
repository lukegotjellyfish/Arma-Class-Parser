class DefaultEventhandlers;
class CfgPatches
{
	class RHSGREF_c_A29
	{
		units[]=
		{
			"RHSGREF_A29B_HIDF"
		};
		weapons[]={};
		name="GREF Super Tucano";
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgSounds
{
	class RHS_JST_Ejection_Sound
	{
		sound[]=
		{
			"A3\sounds_f\weapons\launcher\nlaw_final_2",
			3.1622777,
			1,
			1400
		};
		name="F35_ejection_sound";
		titles[]={};
		duration=3;
	};
};
class CfgSoundShapes
{
	class RHS_JST_A29_Plane_Whistle_SoundShape
	{
		innerVolume=1;
		outerVolume=0.2;
		innerAngle=160;
		outerAngle=280;
		azimuth=0;
		elevation=0;
	};
	class RHS_JST_A29_Plane_Whistle_Rear_SoundShape
	{
		innerVolume=1;
		outerVolume=0.2;
		innerAngle=160;
		outerAngle=280;
		azimuth=-180;
		elevation=0;
	};
};
class CfgSoundShaders
{
	class RHS_JST_A29_Ext_Taxi_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Ext_Taxi.wav",
				1
			}
		};
		frequency="0.9*engineOn*(camPos)*(0.8+(.2*thrust))";
		volume="1*engineOn*camPos*(rpm factor[0,1])*(thrust factor[0.5,0])";
		range=750;
	};
	class RHS_JST_A29_Ext_High_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Ext_High.wav",
				1
			}
		};
		frequency="engineOn*(camPos)*(0.8+(0.4*thrust))";
		volume="2.0*camPos*(rpm factor[0.7,1])*(thrust factor[0,0.5])";
		range=750;
	};
	class RHS_JST_A29_Ext_Whistle_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Whistle.wav",
				1
			}
		};
		frequency=0.55000001;
		volume="0.2*camPos*(speed factor [46, 100])*(distance interpolate [3,50,0.3,1])";
		range=750;
	};
	class RHS_JST_A29_Ext_Whistle_Rear_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Whistle_Rear.wav",
				1
			}
		};
		frequency=2.5;
		volume="0.15*camPos*(speed factor [46, 100])*(distance interpolate [3,50,0.3,1])";
		range=750;
	};
	class RHS_JST_A29_Ext_Flyby_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Flyby.wav",
				1
			}
		};
		frequency="0.8 min (rpm + 0.5)*(rpm factor[0.5, 1.1])";
		volume="2.0*camPos*(speed factor [46, 100])";
		range=750;
		rangeCurve[]=
		{
			{0,0},
			{15,0.1},
			{30,1},
			{750,0}
		};
	};
	class RHS_JST_A29_Ext_Flyby_Rumble_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Flyby_Rumble.wav",
				1
			}
		};
		frequency="1.0 min (rpm + 0.5)*(rpm factor[0.5, 1.1])";
		volume="0.9*camPos*(speed factor [46, 100])";
		range=750;
	};
	class RHS_JST_A29_Ext_Dist_Front_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Dist_Front.wav",
				1
			}
		};
		frequency="engineOn*(camPos)*(1+(.2*thrust))";
		volume="1.5 *camPos*(rpm factor[0.5, 1])*(speed factor [-30, 46])";
		range=3000;
	};
	class RHS_JST_A29_Ext_Dist_Rear_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Dist_Rear.wav",
				1
			}
		};
		frequency="engineOn*(camPos)*(1+(.2*thrust))";
		volume="1 *camPos*(rpm factor[0.5, 1])";
		range=3000;
	};
	class RHS_JST_A29_snd_int_jet
	{
		samples[]=
		{
			
			{
				"rhsgref\addons\rhsgref_a29\sounds\int_jet_2.wav",
				1
			}
		};
		frequency=1;
		volume="engineOn*(1-camPos)*(rpm factor [0.3, .95])";
	};
	class RHS_JST_A29_snd_int_prop
	{
		samples[]=
		{
			
			{
				"rhsgref\addons\rhsgref_a29\sounds\ext_prop_close_2.wav",
				1
			}
		};
		frequency="engineOn*(1-camPos)*(0.95+(.2*thrust))";
		volume="engineOn*(1-camPos)*(rpm factor [0.3, .95])";
	};
};
class CfgSoundSets
{
	class RHS_JST_A29_Ext_Taxi_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Taxi_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		volumeCurve="LinearCurve";
		sound3DProcessingType="JetExt_Close_3DProcessingType";
		occlusionFactor=0.44499999;
		obstructionFactor=0.34999999;
	};
	class RHS_JST_A29_Ext_High_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_High_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		volumeCurve="LinearCurve";
		sound3DProcessingType="JetExt_Close_3DProcessingType";
		occlusionFactor=0.44499999;
		obstructionFactor=0.34999999;
		speedOfSound=0;
	};
	class RHS_JST_A29_Ext_Whistle_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Whistle_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		shape="RHS_JST_A29_Plane_Whistle_SoundShape";
		volumeCurve="LogReverse1Curve";
		sound3DProcessingType="JetExt_Close_3DProcessingType";
	};
	class RHS_JST_A29_Ext_Whistle_Rear_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Whistle_Rear_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		shape="RHS_JST_A29_Plane_Whistle_Rear_SoundShape";
		volumeCurve="LinearCurve";
		sound3DProcessingType="JetExt_Close_3DProcessingType";
	};
	class RHS_JST_A29_Ext_Flyby_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Flyby_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		volumeCurve="LinearCurve";
		sound3DProcessingType="JetExt_Close_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class RHS_JST_A29_Ext_Flyby_Rumble_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Flyby_Rumble_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		volumeCurve="LinearCurve";
		sound3DProcessingType="JetExt_Middle_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class RHS_JST_A29_Ext_Dist_Front_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Dist_Front_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		loop=1;
		volumeCurve="LinearCurve";
		shape="FrontSemispace10";
		sound3DProcessingType="JetExt_Distant_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
		speedOfSound=0;
	};
	class RHS_JST_A29_Ext_Dist_Rear_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Dist_Rear_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		shape="RearSemispace10";
		sound3DProcessingType="JetExt_Distant_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
		speedOfSound=0;
	};
	class RHS_JST_A29_snd_int_jet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_snd_int_jet"
		};
		volumeFactor=3;
		spatial=0;
		loop=1;
		sound3dProcessingType="none";
	};
	class RHS_JST_A29_snd_int_prop
	{
		soundShaders[]=
		{
			"RHS_JST_A29_snd_int_prop"
		};
		volumeFactor=3;
		spatial=0;
		loop=1;
		sound3dProcessingType="VehicleInt_Front_3DProcessingType";
	};
};
class CfgFunctions
{
	class RHS
	{
		recompile=1;
		tag="RHS";
		class functions
		{
			class a29_mainLoop
			{
				file="rhsgref\addons\rhsgref_c_a29\scripts\rhs_a29_mainLoop.sqf";
			};
			class a29_seatEjection
			{
				file="rhsgref\addons\rhsgref_c_a29\scripts\rhs_a29_seatEjection.sqf";
			};
			class a29_damage
			{
				file="rhsgref\addons\rhsgref_c_a29\scripts\rhs_a29_damage.sqf";
			};
			class a29_MFD_switch
			{
				file="rhsgref\addons\rhsgref_c_a29\scripts\rhs_a29_MFD_switch.sqf";
			};
			class a29_MFD_start
			{
				file="rhsgref\addons\rhsgref_c_a29\scripts\rhs_a29_MFD_start.sqf";
			};
			class a29_flir_loader
			{
				file="rhsgref\addons\rhsgref_c_a29\scripts\rhs_a29_flir_loader.sqf";
			};
			class a29_flir_handler
			{
				file="rhsgref\addons\rhsgref_c_a29\scripts\rhs_a29_flir_handler.sqf";
			};
		};
	};
};
class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscMapControl;
class RscControlsGroup;
class CfgVehicles
{
	class thingX;
	class Motorcycle;
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
		class HitPoints
		{
			class HitHull;
		};
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
	};
	class RHSGREF_A29_Base: Plane_Fighter_03_base_F
	{
		icon="rhsgref\addons\rhsgref_c_a29\data\rhs_a29_mapIcon_ca.paa";
		laserScanner=1;
		showAllTargets=2;
		extCameraPosition[]={0,3.8,-15};
		threat[]={0.80000001,1,0.5};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		memoryPointTaskMarker="TaskMarker_1_pos";
		driverLeftLegAnimName="pedal_L";
		driverRightLegAnimName="pedal_R";
		driverCompartments=1;
		driverWeaponsInfoType="RHS_RscOptics_A29_FlirCamera";
		driverCanEject=1;
		defaultUserMFDvalues[]={0.1,1,0.1,0,1,0,2,3,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8000};
		class MFD
		{
			class HUD_Pilot
			{
				topLeft="HUD_1_top_left";
				topRight="HUD_1_top_right";
				bottomLeft="HUD_1_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=1;
				font="rhsusf_digital_font_usa";
				turret[]={-2};
				class Bones
				{
					class PlaneW
					{
						pos[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class PlaneOrientation
					{
						source="forward";
						pos[]={0.5,0.44999999};
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class Velocity
					{
						source="velocity";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class WeaponAim
					{
						source="weapon";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class ImpactPoint
					{
						source="ImpactPointWeaponRelative";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class NormalizeBombCircle
					{
						limit=0.079999998;
						aspectRatio=1.07463;
					};
					class ImpactPointRelative
					{
						source="impactpointweaponRelative";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class Target
					{
						source="target";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class TargetingPodDir
					{
						source="pilotcamera";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class TargetingPodTarget
					{
						source="pilotcameratarget";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class Limit0109
					{
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						limits[]={0.33000001,0.1,0.67000002,0.1};
					};
					class WPPoint
					{
						source="WPPoint";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class ASL_Instrument
					{
						source="altitudeASL";
						min=0;
						max=20000;
						minAngle=0;
						maxAngle=72000;
						aspectRatio=1.07463;
					};
					class Speed_Instrument: ASL_Instrument
					{
						source="speed";
						max=555.55603;
						maxAngle=7200;
					};
					class Airport1
					{
						source="airportCorner1";
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
					};
					class Airport2: Airport1
					{
						source="airportCorner2";
					};
					class Airport3: Airport1
					{
						source="airportCorner3";
					};
					class Airport4: Airport1
					{
						source="airportCorner4";
					};
					class ILS_H
					{
						pos0[]={0.5,0.44999999};
						pos3[]={0.70502001,0.44999999};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.67031997};
					};
					class HorizonBankRot
					{
						source="horizonBank";
						min="-rad(45)";
						max="rad(45)";
						minAngle="180.25-35.5";
						maxAngle="180.75+35.5";
						aspectRatio=0.80000001;
					};
					class HorizonBankRotFull: HorizonBankRot
					{
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Level0
					{
						pos0[]={0.5,0.44999999};
						pos10[]={1.5752,1.5420001};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle="1.0*5";
					};
					class LevelM5: Level0
					{
						angle="1.0*-5";
					};
					class LevelP10: Level0
					{
						angle="1.0*10";
					};
					class LevelM10: Level0
					{
						angle="1.0*-10";
					};
					class LevelP15: Level0
					{
						angle="1.0*15";
					};
					class LevelM15: Level0
					{
						angle="1.0*-15";
					};
					class LevelP20: Level0
					{
						angle="1.0*20";
					};
					class LevelM20: Level0
					{
						angle="1.0*-20";
					};
					class LevelP25: Level0
					{
						angle="1.0*25";
					};
					class LevelM25: Level0
					{
						angle="1.0*-25";
					};
					class LevelP30: Level0
					{
						angle="1.0*30";
					};
					class LevelM30: Level0
					{
						angle="1.0*-30";
					};
					class LevelP35: Level0
					{
						angle="1.0*35";
					};
					class LevelM35: Level0
					{
						angle="1.0*-35";
					};
					class LevelP40: Level0
					{
						angle="1.0*40";
					};
					class LevelM40: Level0
					{
						angle="1.0*-40";
					};
					class LevelP45: Level0
					{
						angle="1.0*45";
					};
					class LevelM45: Level0
					{
						angle="1.0*-45";
					};
					class LevelP50: Level0
					{
						angle="1.0*50";
					};
					class LevelM50: Level0
					{
						angle="1.0*-50";
					};
					class LevelP60: Level0
					{
						angle="1.0*60";
					};
					class LevelM60: Level0
					{
						angle="1.0*-60";
					};
					class LevelP70: Level0
					{
						angle="1.0*70";
					};
					class LevelM70: Level0
					{
						angle="1.0*-70";
					};
					class LevelP80: Level0
					{
						angle="1.0*80";
					};
					class LevelM80: Level0
					{
						angle="1.0*-80";
					};
					class LevelP90: Level0
					{
						angle="1.0*90";
					};
					class LevelM90: Level0
					{
						angle="1.0*-90";
					};
					class MissileFlightTimeRot1
					{
						source="MissileFlightTime";
						sourceScale=1;
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=1.07463;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class LarAmmoMax
					{
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
					class LarAmmoMGunMax
					{
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1.07463;
					};
					class LarAmmoMGunMin: LarAmmoMGunMax
					{
						source="LarAmmoMin";
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					condition="on";
					class PlaneW
					{
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.02,0},
								1
							},
							
							{
								"PlaneW",
								{0.02,0},
								1
							},
							{},
							
							{
								"PlaneW",
								{0,-0.0214925},
								1
							},
							
							{
								"PlaneW",
								{0,0.0214925},
								1
							},
							{},
							
							{
								{0.15000001,0.56310397},
								1
							},
							
							{
								{0.25,0.56310397},
								1
							},
							
							{
								{0.25,0.511522},
								1
							},
							
							{
								{0.15000001,0.511522},
								1
							},
							
							{
								{0.15000001,0.56310397},
								1
							},
							{},
							
							{
								{0.25999999,0.53799999},
								1
							},
							
							{
								{0.30000001,0.53799999},
								1
							},
							{},
							
							{
								{0.69999999,0.53799999},
								1
							},
							
							{
								{0.74000001,0.53799999},
								1
							},
							{},
							
							{
								{0.75,0.56310397},
								1
							},
							
							{
								{0.88999999,0.56310397},
								1
							},
							
							{
								{0.88999999,0.511522},
								1
							},
							
							{
								{0.75,0.511522},
								1
							},
							
							{
								{0.75,0.56310397},
								1
							},
							{},
							
							{
								{0.72000003,0.724298},
								1
							},
							
							{
								{0.84500003,0.724298},
								1
							},
							
							{
								{0.84500003,0.67271602},
								1
							},
							
							{
								{0.72000003,0.67271602},
								1
							},
							
							{
								{0.72000003,0.724298},
								1
							},
							{},
							
							{
								{0.66564399,0.864326},
								1
							},
							
							{
								{0.67082,0.885086},
								1
							},
							
							{
								{0.66564399,0.864326},
								1
							},
							
							{
								{0.62485802,0.87454599},
								1
							},
							
							{
								{0.62875903,0.89562601},
								1
							},
							{},
							
							{
								{0.62485802,0.87454599},
								1
							},
							
							{
								{0.58353698,0.88187701},
								1
							},
							
							{
								{0.58614701,0.90318602},
								1
							},
							{},
							
							{
								{0.58353698,0.88187701},
								1
							},
							
							{
								{0.54185802,0.886289},
								1
							},
							
							{
								{0.54316598,0.90773499},
								1
							},
							{},
							
							{
								{0.54185802,0.886289},
								1
							},
							
							{
								{0.5,0.887761},
								1
							},
							
							{
								{0.5,0.90925401},
								1
							},
							{},
							
							{
								{0.5,0.887761},
								1
							},
							
							{
								{0.45814201,0.886289},
								1
							},
							
							{
								{0.45683399,0.90773499},
								1
							},
							{},
							
							{
								{0.45814201,0.886289},
								1
							},
							
							{
								{0.41646299,0.88187701},
								1
							},
							
							{
								{0.41385299,0.90318602},
								1
							},
							{},
							
							{
								{0.41646299,0.88187701},
								1
							},
							
							{
								{0.37514201,0.87454599},
								1
							},
							
							{
								{0.37123999,0.89562601},
								1
							},
							{},
							
							{
								{0.37514201,0.87454599},
								1
							},
							
							{
								{0.33435601,0.864326},
								1
							},
							
							{
								{0.32917899,0.885086},
								1
							},
							{},
							
							{
								"HorizonBankRot",
								{0,0.51582098},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.53731298},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.53731298},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.51582098},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.1,0.15000001};
						clipBR[]={0.85000002,0.99000001};
						class Dimmed
						{
							class Level0
							{
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.31999999,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.31999999,0},
										1
									}
								};
							};
						};
						class Level0
						{
							width=2;
							points[]={};
						};
						class LevelM5: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM5",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM5",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM5",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM5",
									{-0.124,0},
									1
								},
								
								{
									"LevelM5",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM5",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM5",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM5",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM5",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM5",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM5",
									{0.124,0},
									1
								},
								
								{
									"LevelM5",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM5",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM5",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_5
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM5",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM5",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM5",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_5_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM5",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM5",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM5",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP5: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP5",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP5",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP5",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP5",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP5",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP5",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_5
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP5",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP5",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP5",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_5_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP5",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP5",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP5",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM10: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM10",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM10",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM10",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{-0.124,0},
									1
								},
								
								{
									"LevelM10",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM10",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM10",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM10",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM10",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{0.124,0},
									1
								},
								
								{
									"LevelM10",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM10",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM10",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_10
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM10",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM10",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM10",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_10_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM10",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM10",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM10",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP10: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP10",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP10",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP10",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP10",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP10",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP10",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_10
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP10",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP10",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP10",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_10_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP10",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP10",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP10",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM15: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM15",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM15",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM15",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{-0.124,0},
									1
								},
								
								{
									"LevelM15",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM15",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM15",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM15",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM15",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{0.124,0},
									1
								},
								
								{
									"LevelM15",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM15",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM15",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_15
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM15",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM15",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM15",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_15_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM15",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM15",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM15",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP15: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP15",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP15",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP15",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP15",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP15",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP15",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_15
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP15",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP15",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP15",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_15_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP15",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP15",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP15",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM20: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM20",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM20",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM20",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{-0.124,0},
									1
								},
								
								{
									"LevelM20",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM20",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM20",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM20",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM20",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{0.124,0},
									1
								},
								
								{
									"LevelM20",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM20",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM20",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_20
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM20",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM20",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM20",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_20_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM20",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM20",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM20",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP20: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP20",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP20",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP20",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP20",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP20",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP20",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_20
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP20",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP20",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP20",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_20_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP20",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP20",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP20",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM25: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM25",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM25",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM25",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{-0.124,0},
									1
								},
								
								{
									"LevelM25",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM25",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM25",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM25",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM25",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{0.124,0},
									1
								},
								
								{
									"LevelM25",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM25",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM25",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_25
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM25",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM25",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM25",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_25_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM25",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM25",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM25",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP25: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP25",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP25",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP25",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP25",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP25",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP25",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_25
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP25",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP25",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP25",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_25_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP25",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP25",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP25",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM30: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM30",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM30",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM30",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{-0.124,0},
									1
								},
								
								{
									"LevelM30",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM30",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM30",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM30",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM30",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{0.124,0},
									1
								},
								
								{
									"LevelM30",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM30",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM30",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_30
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM30",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM30",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM30",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_30_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM30",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM30",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM30",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP30: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP30",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP30",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP30",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP30",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP30",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP30",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_30
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP30",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP30",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP30",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_30_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP30",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP30",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP30",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM35: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM35",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM35",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM35",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{-0.124,0},
									1
								},
								
								{
									"LevelM35",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM35",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM35",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM35",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM35",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{0.124,0},
									1
								},
								
								{
									"LevelM35",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM35",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM35",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_35
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM35",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM35",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM35",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_35_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM35",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM35",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM35",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP35: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP35",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP35",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP35",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP35",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP35",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP35",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_35
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP35",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP35",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP35",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_35_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP35",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP35",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP35",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM40: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM40",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM40",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM40",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{-0.124,0},
									1
								},
								
								{
									"LevelM40",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM40",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM40",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM40",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM40",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{0.124,0},
									1
								},
								
								{
									"LevelM40",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM40",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM40",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_40
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM40",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM40",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM40",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_40_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM40",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM40",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM40",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP40: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP40",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP40",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP40",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP40",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP40",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP40",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_40
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP40",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP40",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP40",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_40_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP40",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP40",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP40",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM45: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM45",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM45",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM45",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{-0.124,0},
									1
								},
								
								{
									"LevelM45",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM45",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM45",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM45",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM45",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{0.124,0},
									1
								},
								
								{
									"LevelM45",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM45",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM45",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_45
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM45",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM45",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM45",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_45_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM45",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM45",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM45",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP45: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP45",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP45",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP45",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP45",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP45",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP45",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_45
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP45",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP45",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP45",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_45_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP45",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP45",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP45",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM50: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM50",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM50",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM50",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{-0.124,0},
									1
								},
								
								{
									"LevelM50",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM50",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM50",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM50",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM50",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{0.124,0},
									1
								},
								
								{
									"LevelM50",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM50",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM50",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_50
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM50",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM50",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM50",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_50_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM50",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM50",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM50",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP50: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP50",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP50",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP50",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP50",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP50",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP50",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_50
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP50",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP50",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP50",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_50_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP50",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP50",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP50",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM60: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM60",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM60",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM60",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{-0.124,0},
									1
								},
								
								{
									"LevelM60",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM60",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM60",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM60",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM60",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{0.124,0},
									1
								},
								
								{
									"LevelM60",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM60",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM60",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_60
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM60",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM60",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM60",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_60_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM60",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM60",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM60",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP60: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP60",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP60",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP60",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP60",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP60",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP60",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_60
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP60",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP60",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP60",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_60_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP60",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP60",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP60",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM70: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM70",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM70",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM70",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{-0.124,0},
									1
								},
								
								{
									"LevelM70",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM70",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM70",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM70",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM70",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{0.124,0},
									1
								},
								
								{
									"LevelM70",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM70",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM70",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_70
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM70",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM70",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM70",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_70_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM70",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM70",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM70",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP70: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP70",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP70",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP70",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP70",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP70",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP70",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_70
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP70",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP70",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP70",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_70_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP70",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP70",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP70",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM80: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM80",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM80",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM80",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{-0.124,0},
									1
								},
								
								{
									"LevelM80",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM80",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM80",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM80",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM80",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{0.124,0},
									1
								},
								
								{
									"LevelM80",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM80",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM80",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_80
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM80",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM80",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM80",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_80_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM80",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM80",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM80",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP80: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP80",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP80",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP80",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP80",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP80",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP80",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_80
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP80",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP80",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP80",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_80_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP80",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP80",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP80",
								{0.20999999,0.043000001},
								1
							};
						};
						class LevelM90: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelM90",
									{-0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM90",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelM90",
									{-0.138,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{-0.124,0},
									1
								},
								
								{
									"LevelM90",
									{-0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{-0.082000002,0},
									1
								},
								
								{
									"LevelM90",
									{-0.054000001,0},
									1
								},
								{},
								{},
								
								{
									"LevelM90",
									{0.16599999,-0.039999999},
									1
								},
								
								{
									"LevelM90",
									{0.16599999,0},
									1
								},
								
								{
									"LevelM90",
									{0.138,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{0.124,0},
									1
								},
								
								{
									"LevelM90",
									{0.096000001,0},
									1
								},
								{},
								
								{
									"LevelM90",
									{0.082000002,0},
									1
								},
								
								{
									"LevelM90",
									{0.054000001,0},
									1
								},
								{}
							};
						};
						class VALM_1_90
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM90",
								{-0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM90",
								{-0.1,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM90",
								{-0.18000001,0.0080000004},
								1
							};
						};
						class VALM_1_90_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							sourceLength=2;
							pos[]=
							{
								"LevelM90",
								{0.18000001,-0.052000001},
								1
							};
							right[]=
							{
								"LevelM90",
								{0.25999999,-0.052000001},
								1
							};
							down[]=
							{
								"LevelM90",
								{0.18000001,0.0080000004},
								1
							};
						};
						class LevelP90: Level0
						{
							width=3;
							points[]=
							{
								
								{
									"LevelP90",
									{-0.16599999,0.039999999},
									1
								},
								
								{
									"LevelP90",
									{-0.16599999,0},
									1
								},
								
								{
									"LevelP90",
									{-0.039999999,0},
									1
								},
								{},
								
								{
									"LevelP90",
									{0.054000001,0},
									1
								},
								
								{
									"LevelP90",
									{0.19400001,0},
									1
								},
								
								{
									"LevelP90",
									{0.19400001,0.039999999},
									1
								}
							};
						};
						class VALP_1_90
						{
							source="static";
							align="left";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP90",
								{-0.19,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP90",
								{-0.11,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP90",
								{-0.19,0.043000001},
								1
							};
						};
						class VALP_1_90_R
						{
							source="static";
							align="right";
							scale=1;
							sourceScale=1;
							pos[]=
							{
								"LevelP90",
								{0.20999999,-0.017000001},
								1
							};
							right[]=
							{
								"LevelP90",
								{0.28999999,-0.017000001},
								1
							};
							down[]=
							{
								"LevelP90",
								{0.20999999,0.043000001},
								1
							};
						};
					};
					class SpeedNumber
					{
						source="speed";
						sourceScale=1.9438444;
						align="center";
						scale=1;
						pos[]=
						{
							{0.2,0.51044798},
							1
						};
						right[]=
						{
							{0.25999999,0.51044798},
							1
						};
						down[]=
						{
							{0.2,0.564179},
							1
						};
					};
					class AltNumber0
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.88,0.50999999},
							1
						};
						right[]=
						{
							{0.94,0.50999999},
							1
						};
						down[]=
						{
							{0.88,0.565},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeASL";
						sourceScale="0.1 * 3.2808399";
						align="left";
						pos[]=
						{
							{0.85000002,0.51044798},
							1
						};
						right[]=
						{
							{0.91000003,0.51044798},
							1
						};
						down[]=
						{
							{0.85000002,0.564179},
							1
						};
					};
					class GmeterNumber
					{
						source="gmeter";
						sourceScale=0.30000001;
						sourceOffset=1;
						sourcePrecision=1;
						refreshRate=0.40000001;
						align="right";
						scale=1;
						pos[]=
						{
							{0.12,0.69999999},
							1
						};
						right[]=
						{
							{0.17,0.69999999},
							1
						};
						down[]=
						{
							{0.12,0.75},
							1
						};
					};
					class RadarATLText
					{
						source="static";
						align="left";
						scale=1;
						pos[]=
						{
							{0.70999998,0.67000002},
							1
						};
						right[]=
						{
							{0.75999999,0.67000002},
							1
						};
						down[]=
						{
							{0.70999998,0.72000003},
							1
						};
					};
					class RadarATLNumber
					{
						source="altitudeAGL";
						sourceScale="3.2808399/10";
						sourceLength=2;
						sourceOffset=-0.60000002;
						sourcePrecision=0;
						refreshRate=0.0099999998;
						align="left";
						scale=1;
						pos[]=
						{
							{0.81300002,0.67000002},
							1
						};
						right[]=
						{
							{0.86299998,0.67000002},
							1
						};
						down[]=
						{
							{0.81300002,0.72000003},
							1
						};
					};
					class ATLNumber0
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.81349999,0.67000002},
							1
						};
						right[]=
						{
							{0.8635,0.67000002},
							1
						};
						down[]=
						{
							{0.81349999,0.72000003},
							1
						};
					};
					class HeadingNumber
					{
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.14},
							1
						};
						right[]=
						{
							{0.56999999,0.14},
							1
						};
						down[]=
						{
							{0.5,0.20999999},
							1
						};
					};
					class HeadingArrows
					{
						width=3;
						points[]=
						{
							
							{
								{0.44999999,0.203104},
								1
							},
							
							{
								{0.55000001,0.203104},
								1
							},
							
							{
								{0.55000001,0.151522},
								1
							},
							
							{
								{0.44999999,0.151522},
								1
							},
							
							{
								{0.44999999,0.203104},
								1
							},
							{}
						};
					};
					class ThrustNumber
					{
						source="throttle";
						sourceScale=100;
						sourceLength=3;
						sourceOffset=0;
						sourcePrecision=0;
						refreshRate=0.0099999998;
						align="left";
						scale=1;
						pos[]=
						{
							{0.15000001,0.88999999},
							1
						};
						right[]=
						{
							{0.2,0.88999999},
							1
						};
						down[]=
						{
							{0.15000001,0.94},
							1
						};
					};
					class NavigationMode
					{
						condition="1-(missile+rocket+mgun+bomb)";
						class ModeText
						{
							source="static";
							align="left";
							scale=1;
							pos[]=
							{
								{0.15000001,0.85000002},
								1
							};
							right[]=
							{
								{0.2,0.85000002},
								1
							};
							down[]=
							{
								{0.15000001,0.89999998},
								1
							};
						};
						class WP
						{
							condition="wpvalid";
							class WPdist
							{
								source="wpdist";
								sourceScale=0.001;
								sourcePrecision=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.79500002,0.81999999},
									1
								};
								right[]=
								{
									{0.85500002,0.81999999},
									1
								};
								down[]=
								{
									{0.79500002,0.88},
									1
								};
							};
							class WPIndex
							{
								source="wpIndex";
								sourceScale=1;
								sourceLength=2;
								align="right";
								scale=1;
								pos[]=
								{
									{0.72500002,0.81999999},
									1
								};
								right[]=
								{
									{0.78500003,0.81999999},
									1
								};
								down[]=
								{
									{0.72500002,0.88},
									1
								};
							};
							class WPstatic
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.76499999,0.81999999},
									1
								};
								right[]=
								{
									{0.82499999,0.81999999},
									1
								};
								down[]=
								{
									{0.76499999,0.88},
									1
								};
							};
							class WPTime
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									{0.72500002,0.86500001},
									1
								};
								right[]=
								{
									{0.78500003,0.86500001},
									1
								};
								down[]=
								{
									{0.72500002,0.92500001},
									1
								};
							};
							class WPCurrentTime: WPdist
							{
								source="time";
								align="right";
								pos[]=
								{
									{0.72500002,0.91000003},
									1
								};
								right[]=
								{
									{0.78500003,0.91000003},
									1
								};
								down[]=
								{
									{0.72500002,0.97000003},
									1
								};
							};
							class WP
							{
								width=1;
								points[]=
								{
									
									{
										"wppoint",
										{0,-0.0107463},
										1
									},
									
									{
										"wppoint",
										{0.0049999999,-0.0093062697},
										1
									},
									
									{
										"wppoint",
										{0.0086599998,-0.0053731301},
										1
									},
									
									{
										"wppoint",
										{0.0099999998,0},
										1
									},
									
									{
										"wppoint",
										{0.0086599998,0.0053731301},
										1
									},
									
									{
										"wppoint",
										{0.0049999999,0.0093062697},
										1
									},
									
									{
										"wppoint",
										{0,0.0107463},
										1
									},
									
									{
										"wppoint",
										{-0.0049999999,0.0093062697},
										1
									},
									
									{
										"wppoint",
										{-0.0086599998,0.0053731301},
										1
									},
									
									{
										"wppoint",
										{-0.0099999998,0},
										1
									},
									
									{
										"wppoint",
										{-0.0086599998,-0.0053731301},
										1
									},
									
									{
										"wppoint",
										{-0.0049999999,-0.0093062697},
										1
									},
									
									{
										"wppoint",
										{0,-0.0107463},
										1
									},
									{},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0,
											-0.0099999998
										},
										1
									},
									
									{
										"wppoint",
										1,
										
										{
											"HorizonBankRotFull",
											0,
											-0.023
										},
										1
									}
								};
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						condition="AAmissile";
						class ModeText
						{
							source="static";
							align="left";
							scale=1;
							pos[]=
							{
								{0.15000001,0.85000002},
								1
							};
							right[]=
							{
								{0.2,0.85000002},
								1
							};
							down[]=
							{
								{0.15000001,0.89999998},
								1
							};
						};
						class AAMissileCrosshair
						{
							width=4;
							points[]=
							{
								
								{
									"PlaneW",
									{0,-0.30089599},
									1
								},
								
								{
									"PlaneW",
									{0.048608001,-0.29632199},
									1
								},
								
								{
									"PlaneW",
									{0.095760003,-0.28275201},
									1
								},
								
								{
									"PlaneW",
									{0.14,-0.26057601},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.179984,-0.23048601},
									1
								},
								
								{
									"PlaneW",
									{0.21448,-0.193416},
									1
								},
								
								{
									"PlaneW",
									{0.24247999,-0.15044799},
									1
								},
								
								{
									"PlaneW",
									{0.263116,-0.102906},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.27574399,-0.052235499},
									1
								},
								
								{
									"PlaneW",
									{0.28,0},
									1
								},
								
								{
									"PlaneW",
									{0.27574399,0.052235499},
									1
								},
								
								{
									"PlaneW",
									{0.263116,0.102906},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.24247999,0.15044799},
									1
								},
								
								{
									"PlaneW",
									{0.21448,0.193416},
									1
								},
								
								{
									"PlaneW",
									{0.179984,0.23048601},
									1
								},
								
								{
									"PlaneW",
									{0.14,0.26057601},
									1
								},
								{},
								
								{
									"PlaneW",
									{0.095760003,0.28275201},
									1
								},
								
								{
									"PlaneW",
									{0.048608001,0.29632199},
									1
								},
								
								{
									"PlaneW",
									{0,0.30089599},
									1
								},
								
								{
									"PlaneW",
									{-0.048608001,0.29632199},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.095760003,0.28275201},
									1
								},
								
								{
									"PlaneW",
									{-0.14,0.26057601},
									1
								},
								
								{
									"PlaneW",
									{-0.179984,0.23048601},
									1
								},
								
								{
									"PlaneW",
									{-0.21448,0.193416},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.24247999,0.15044799},
									1
								},
								
								{
									"PlaneW",
									{-0.263116,0.102906},
									1
								},
								
								{
									"PlaneW",
									{-0.27574399,0.052235499},
									1
								},
								
								{
									"PlaneW",
									{-0.28,0},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.27574399,-0.052235499},
									1
								},
								
								{
									"PlaneW",
									{-0.263116,-0.102906},
									1
								},
								
								{
									"PlaneW",
									{-0.24247999,-0.15044799},
									1
								},
								
								{
									"PlaneW",
									{-0.21448,-0.193416},
									1
								},
								{},
								
								{
									"PlaneW",
									{-0.179984,-0.23048601},
									1
								},
								
								{
									"PlaneW",
									{-0.14,-0.26057601},
									1
								},
								
								{
									"PlaneW",
									{-0.095760003,-0.28275201},
									1
								},
								
								{
									"PlaneW",
									{-0.048608001,-0.29632199},
									1
								},
								{},
								
								{
									"PlaneW",
									{0,-0.30089599},
									1
								}
							};
						};
						class AmmoCount
						{
							source="ammoFormat";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.74000001,0.89999998},
								1
							};
							right[]=
							{
								{0.80000001,0.89999998},
								1
							};
							down[]=
							{
								{0.74000001,0.95999998},
								1
							};
						};
						class Lines
						{
							width=4;
							points[]=
							{
								
								{
									{0.87,0.18000001},
									1
								},
								
								{
									{0.85000002,0.18000001},
									1
								},
								
								{
									{0.85000002,0.34},
									1
								},
								
								{
									{0.87,0.34},
									1
								},
								{},
								
								{
									{0.87,0.30000001},
									1
								},
								
								{
									{0.85000002,0.30000001},
									1
								},
								{},
								
								{
									{0.87,0.25999999},
									1
								},
								
								{
									{0.85000002,0.25999999},
									1
								},
								{},
								
								{
									{0.87,0.22},
									1
								},
								
								{
									{0.85000002,0.22},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.82999998,0.36000001},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.85000002,0.34},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.82999998,0.31999999},
									1
								},
								{}
							};
						};
						class Poly
						{
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.85100001,0.34},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.85100001,0.34},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.86799997,0.34},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.86799997,0.34},
										1
									}
								}
							};
						};
						class TopText
						{
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.88,0.16},
								1
							};
							right[]=
							{
								{0.92000002,0.16},
								1
							};
							down[]=
							{
								{0.88,0.2},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.88,0.23999999},
								1
							};
							right[]=
							{
								{0.92000002,0.23999999},
								1
							};
							down[]=
							{
								{0.88,0.28},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.81999999,0.31999999},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.86000001,0.31999999},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.81999999,0.36000001},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.096716397},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.085970096},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0021492499},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0021492499},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.085970096},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.084663399},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.080786102},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.074450098},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.065853097},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.055261601},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.0429851},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0294018},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0149244},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0149244},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0294018},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.0429851},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.055261601},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.065853097},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.074450098},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.080786102},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.084663399},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.085970096},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.084663399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.080786102},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.074450098},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.065853097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.055261601},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.0429851},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0294018},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0149244},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0149244},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0294018},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.0429851},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.055261601},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.065853097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.074450098},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.080786102},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.084663399},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.085970096},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.068776101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.085970096},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class MGun
					{
						condition="(mgun+rocket)";
						class ModeText
						{
							source="static";
							align="left";
							scale=1;
							pos[]=
							{
								{0.15000001,0.85000002},
								1
							};
							right[]=
							{
								{0.2,0.85000002},
								1
							};
							down[]=
							{
								{0.15000001,0.89999998},
								1
							};
						};
						class WeaponName
						{
							source="weapon";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.94999999,0.83999997},
								1
							};
							right[]=
							{
								{1.01,0.83999997},
								1
							};
							down[]=
							{
								{0.94999999,0.89999998},
								1
							};
						};
						class AmmoCounter
						{
							source="ammo";
							sourceScale=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.94999999,0.89999998},
								1
							};
							right[]=
							{
								{1.01,0.89999998},
								1
							};
							down[]=
							{
								{0.94999999,0.95999998},
								1
							};
						};
					};
					class MGunCross
					{
						condition="-1+(mgun+rocket)*impactDistance";
						class Cross
						{
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.07},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.029999999},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.045000002},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.029999999},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.045000002,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.029999999,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.045000002,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.029999999,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0429851},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.0537313},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.050000001},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.039999999},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_LAR
						{
							width=5;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMin",
										0,
										-0.0644776
									},
									1
								},
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMin",
										0,
										-0.0537313
									},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMax",
										0,
										-0.0644776
									},
									1
								},
								
								{
									"ImpactPointRelative",
									1,
									
									{
										"LarAmmoMGunMax",
										0,
										-0.0537313
									},
									1
								},
								{}
							};
						};
						class Distance
						{
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.1},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,-0.1},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,-0.059999999},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="targetDist";
						class TargetDist
						{
							source="targetDist";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.82999998,0.86000001},
								1
							};
							right[]=
							{
								{0.88999999,0.86000001},
								1
							};
							down[]=
							{
								{0.82999998,0.92000002},
								1
							};
						};
						class TargetHeight
						{
							source="targetHeight";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.82999998,0.81999999},
								1
							};
							right[]=
							{
								{0.88999999,0.81999999},
								1
							};
							down[]=
							{
								{0.82999998,0.88},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							source="static";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.87},
								1
							};
							right[]=
							{
								{0.56999999,0.87},
								1
							};
							down[]=
							{
								{0.5,0.94},
								1
							};
						};
					};
					class WeaponsLocked
					{
						condition="missilelocked";
						class Text
						{
							source="static";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.87},
								1
							};
							right[]=
							{
								{0.56999999,0.87},
								1
							};
							down[]=
							{
								{0.5,0.94},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							source="static";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.31999999},
								1
							};
							right[]=
							{
								{0.56999999,0.31999999},
								1
							};
							down[]=
							{
								{0.5,0.38999999},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								width=2;
								points[]=
								{
									
									{
										"ILS_W",
										{-0.12,0},
										1
									},
									
									{
										"ILS_W",
										{0.12,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0128955},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0128955},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.059999999,-0.0096716397},
										1
									},
									
									{
										"ILS_W",
										{-0.059999999,0.0096716397},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0128955},
										1
									},
									
									{
										"ILS_W",
										{0,0.0128955},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.059999999,-0.0096716397},
										1
									},
									
									{
										"ILS_W",
										{0.059999999,0.0096716397},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0128955},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0128955},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.12895501},
										1
									},
									
									{
										"ILS_H",
										{0,0.12895501},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,-0.12895501},
										1
									},
									
									{
										"ILS_H",
										{0.012,-0.12895501},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,-0.0644776},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,-0.0644776},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0},
										1
									},
									
									{
										"ILS_H",
										{0.012,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,0.0644776},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,0.0644776},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0.12895501},
										1
									},
									
									{
										"ILS_H",
										{0.012,0.12895501},
										1
									}
								};
							};
							class airport
							{
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class RadarBoxes
					{
						pos0[]={0.5,0.44999999};
						pos10[]={1.1834,1.1844};
						width=4;
						class points
						{
							class Draw
							{
								width=4;
								lineType=2;
								points[]=
								{
									
									{
										{0,-0.0322388},
										1
									},
									
									{
										{0.0052080001,-0.031748801},
										1
									},
									
									{
										{0.01026,-0.0302948},
										1
									},
									
									{
										{0.015,-0.027918801},
										1
									},
									
									{
										{0.019284001,-0.024694899},
										1
									},
									
									{
										{0.022980001,-0.020723101},
										1
									},
									
									{
										{0.025979999,-0.0161194},
										1
									},
									
									{
										{0.028191,-0.0110257},
										1
									},
									
									{
										{0.029544,-0.0055966601},
										1
									},
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0.029544,0.0055966601},
										1
									},
									
									{
										{0.028191,0.0110257},
										1
									},
									
									{
										{0.025979999,0.0161194},
										1
									},
									
									{
										{0.022980001,0.020723101},
										1
									},
									
									{
										{0.019284001,0.024694899},
										1
									},
									
									{
										{0.015,0.027918801},
										1
									},
									
									{
										{0.01026,0.0302948},
										1
									},
									
									{
										{0.0052080001,0.031748801},
										1
									},
									
									{
										{0,0.0322388},
										1
									},
									
									{
										{-0.0052080001,0.031748801},
										1
									},
									
									{
										{-0.01026,0.0302948},
										1
									},
									
									{
										{-0.015,0.027918801},
										1
									},
									
									{
										{-0.019284001,0.024694899},
										1
									},
									
									{
										{-0.022980001,0.020723101},
										1
									},
									
									{
										{-0.025979999,0.0161194},
										1
									},
									
									{
										{-0.028191,0.0110257},
										1
									},
									
									{
										{-0.029544,0.0055966601},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{-0.029544,-0.0055966601},
										1
									},
									
									{
										{-0.028191,-0.0110257},
										1
									},
									
									{
										{-0.025979999,-0.0161194},
										1
									},
									
									{
										{-0.022980001,-0.020723101},
										1
									},
									
									{
										{-0.019284001,-0.024694899},
										1
									},
									
									{
										{-0.015,-0.027918801},
										1
									},
									
									{
										{-0.01026,-0.0302948},
										1
									},
									
									{
										{-0.0052080001,-0.031748801},
										1
									},
									
									{
										{0,-0.0322388},
										1
									},
									{}
								};
							};
						};
						class pointsUnknown: points
						{
							class Draw: Draw
							{
								points[]=
								{
									
									{
										
										{
											{0,-0.0099999998},
											1
										},
										
										{
											{0.02,-0.0099999998},
											1
										},
										
										{
											{0.02,0.0099999998},
											1
										},
										
										{
											{0,0.0099999998},
											1
										}
									}
								};
							};
						};
						class pointsUnknownEnemy: pointsUnknown
						{
							class Draw: Draw
							{
							};
						};
						class pointsUnknownFriend: pointsUnknown
						{
							class Draw: Draw
							{
							};
						};
						class pointsUnknownCiv: pointsUnknown
						{
							class Draw: Draw
							{
							};
						};
						class pointsCar: points
						{
							class Draw: Draw
							{
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0026047199,-0.015874499},
											1
										},
										
										{
											{0.0051302998,-0.0151473},
											1
										},
										
										{
											{0.0074999998,-0.0139598},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0074999998,-0.0139598},
											1
										},
										
										{
											{0.0096418103,-0.0123482},
											1
										},
										
										{
											{0.0114907,-0.0103614},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0114907,-0.0103614},
											1
										},
										
										{
											{0.0129904,-0.0080597},
											1
										},
										
										{
											{0.0140954,-0.00551316},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0140954,-0.00551316},
											1
										},
										
										{
											{0.0147721,-0.0027991},
											1
										},
										
										{
											{0.015,7.0460099e-010},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.015,7.0460099e-010},
											1
										},
										
										{
											{0.0147721,0.0027991},
											1
										},
										
										{
											{0.0140954,0.00551316},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0140954,0.00551316},
											1
										},
										
										{
											{0.0129904,0.0080597},
											1
										},
										
										{
											{0.0114907,0.0103614},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0114907,0.0103614},
											1
										},
										
										{
											{0.0096418103,0.0123482},
											1
										},
										
										{
											{0.0074999998,0.0139598},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0074999998,0.0139598},
											1
										},
										
										{
											{0.0051302998,0.0151473},
											1
										},
										
										{
											{0.0026047199,0.015874499},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0026047199,0.015874499},
											1
										},
										
										{
											{-1.31134e-009,0.0161194},
											1
										},
										
										{
											{-0.00260473,0.015874499},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.00260473,0.015874499},
											1
										},
										
										{
											{-0.0051302998,0.0151473},
											1
										},
										
										{
											{-0.0074999998,0.0139598},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0074999998,0.0139598},
											1
										},
										
										{
											{-0.0096418103,0.0123482},
											1
										},
										
										{
											{-0.0114907,0.0103614},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0114907,0.0103614},
											1
										},
										
										{
											{-0.0129904,0.0080597},
											1
										},
										
										{
											{-0.0140954,0.00551316},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0140954,0.00551316},
											1
										},
										
										{
											{-0.0147721,0.0027991},
											1
										},
										
										{
											{-0.015,-1.92222e-010},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.015,-1.92222e-010},
											1
										},
										
										{
											{-0.0147721,-0.00279911},
											1
										},
										
										{
											{-0.0140954,-0.00551316},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0140954,-0.00551316},
											1
										},
										
										{
											{-0.0129904,-0.0080597103},
											1
										},
										
										{
											{-0.0114907,-0.0103614},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0114907,-0.0103614},
											1
										},
										
										{
											{-0.0096418103,-0.0123482},
											1
										},
										
										{
											{-0.0074999998,-0.0139598},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0074999998,-0.0139598},
											1
										},
										
										{
											{-0.0051303101,-0.0151473},
											1
										},
										
										{
											{-0.0026047199,-0.015874499},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{-0.0026047199,-0.015874499},
											1
										},
										
										{
											{2.6226801e-009,-0.0161194},
											1
										},
										
										{
											{0.0026047199,-0.015874499},
											1
										}
									}
								};
							};
						};
						class pointsCarEnemy: pointsCar
						{
							class Draw: Draw
							{
							};
						};
						class pointsCarFriend: pointsCar
						{
							class Draw: Draw
							{
							};
						};
						class pointsCarCiv: pointsCar
						{
							class Draw: Draw
							{
							};
						};
						class pointsCarNeutral: pointsCar
						{
							class Draw: Draw
							{
							};
						};
						class pointsTank: points
						{
							class Draw: Draw
							{
							};
						};
						class pointsTankEnemy: pointsTank
						{
							class Draw: Draw
							{
							};
						};
						class pointsTankFriend: pointsTank
						{
							class Draw: Draw
							{
							};
						};
						class pointsTankCiv: pointsTank
						{
							class Draw: Draw
							{
							};
						};
						class pointsTankNeutral: pointsTank
						{
							class Draw: Draw
							{
							};
						};
						class pointsAirplane
						{
							class Draw
							{
								width=4;
								lineType=2;
								points[]=
								{
									
									{
										{0,-0.0322388},
										1
									},
									
									{
										{0.0052080001,-0.031748801},
										1
									},
									
									{
										{0.01026,-0.0302948},
										1
									},
									
									{
										{0.015,-0.027918801},
										1
									},
									
									{
										{0.019284001,-0.024694899},
										1
									},
									
									{
										{0.022980001,-0.020723101},
										1
									},
									
									{
										{0.025979999,-0.0161194},
										1
									},
									
									{
										{0.028191,-0.0110257},
										1
									},
									
									{
										{0.029544,-0.0055966601},
										1
									},
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0.029544,0.0055966601},
										1
									},
									
									{
										{0.028191,0.0110257},
										1
									},
									
									{
										{0.025979999,0.0161194},
										1
									},
									
									{
										{0.022980001,0.020723101},
										1
									},
									
									{
										{0.019284001,0.024694899},
										1
									},
									
									{
										{0.015,0.027918801},
										1
									},
									
									{
										{0.01026,0.0302948},
										1
									},
									
									{
										{0.0052080001,0.031748801},
										1
									},
									
									{
										{0,0.0322388},
										1
									},
									
									{
										{-0.0052080001,0.031748801},
										1
									},
									
									{
										{-0.01026,0.0302948},
										1
									},
									
									{
										{-0.015,0.027918801},
										1
									},
									
									{
										{-0.019284001,0.024694899},
										1
									},
									
									{
										{-0.022980001,0.020723101},
										1
									},
									
									{
										{-0.025979999,0.0161194},
										1
									},
									
									{
										{-0.028191,0.0110257},
										1
									},
									
									{
										{-0.029544,0.0055966601},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{-0.029544,-0.0055966601},
										1
									},
									
									{
										{-0.028191,-0.0110257},
										1
									},
									
									{
										{-0.025979999,-0.0161194},
										1
									},
									
									{
										{-0.022980001,-0.020723101},
										1
									},
									
									{
										{-0.019284001,-0.024694899},
										1
									},
									
									{
										{-0.015,-0.027918801},
										1
									},
									
									{
										{-0.01026,-0.0302948},
										1
									},
									
									{
										{-0.0052080001,-0.031748801},
										1
									},
									
									{
										{0,-0.0322388},
										1
									},
									{}
								};
							};
						};
						class pointsAirplaneEnemy
						{
							class Draw
							{
								width=4;
								points[]=
								{
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0,0.0322388},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{0,-0.0322388},
										1
									},
									
									{
										{0.029999999,0},
										1
									}
								};
							};
						};
						class pointsAirplaneFriend
						{
							class Draw
							{
								width=4;
								points[]=
								{
									
									{
										{0,-0.0322388},
										1
									},
									
									{
										{0.0052080001,-0.031748801},
										1
									},
									
									{
										{0.01026,-0.0302948},
										1
									},
									
									{
										{0.015,-0.027918801},
										1
									},
									
									{
										{0.019284001,-0.024694899},
										1
									},
									
									{
										{0.022980001,-0.020723101},
										1
									},
									
									{
										{0.025979999,-0.0161194},
										1
									},
									
									{
										{0.028191,-0.0110257},
										1
									},
									
									{
										{0.029544,-0.0055966601},
										1
									},
									
									{
										{0.029999999,0},
										1
									},
									
									{
										{0.029544,0.0055966601},
										1
									},
									
									{
										{0.028191,0.0110257},
										1
									},
									
									{
										{0.025979999,0.0161194},
										1
									},
									
									{
										{0.022980001,0.020723101},
										1
									},
									
									{
										{0.019284001,0.024694899},
										1
									},
									
									{
										{0.015,0.027918801},
										1
									},
									
									{
										{0.01026,0.0302948},
										1
									},
									
									{
										{0.0052080001,0.031748801},
										1
									},
									
									{
										{0,0.0322388},
										1
									},
									
									{
										{-0.0052080001,0.031748801},
										1
									},
									
									{
										{-0.01026,0.0302948},
										1
									},
									
									{
										{-0.015,0.027918801},
										1
									},
									
									{
										{-0.019284001,0.024694899},
										1
									},
									
									{
										{-0.022980001,0.020723101},
										1
									},
									
									{
										{-0.025979999,0.0161194},
										1
									},
									
									{
										{-0.028191,0.0110257},
										1
									},
									
									{
										{-0.029544,0.0055966601},
										1
									},
									
									{
										{-0.029999999,0},
										1
									},
									
									{
										{-0.029544,-0.0055966601},
										1
									},
									
									{
										{-0.028191,-0.0110257},
										1
									},
									
									{
										{-0.025979999,-0.0161194},
										1
									},
									
									{
										{-0.022980001,-0.020723101},
										1
									},
									
									{
										{-0.019284001,-0.024694899},
										1
									},
									
									{
										{-0.015,-0.027918801},
										1
									},
									
									{
										{-0.01026,-0.0302948},
										1
									},
									
									{
										{-0.0052080001,-0.031748801},
										1
									},
									
									{
										{0,-0.0322388},
										1
									},
									{},
									
									{
										{0.0212132,-0.022796299},
										1
									},
									
									{
										{-0.0212132,0.022796299},
										1
									},
									{},
									
									{
										{0.0212132,0.022796299},
										1
									},
									
									{
										{-0.0212132,-0.022796299},
										1
									},
									{}
								};
							};
						};
						class pointsHeli
						{
							class Draw
							{
								width=2;
								points[]=
								{
									
									{
										{0,0},
										1
									},
									
									{
										{0.0099999998,0.015},
										1
									},
									
									{
										{-0.0099999998,0.015},
										1
									},
									{},
									
									{
										{0,0},
										1
									},
									
									{
										{0.0099999998,-0.015},
										1
									},
									
									{
										{-0.0099999998,-0.015},
										1
									}
								};
							};
						};
						class pointsHeliEnemy
						{
							class Draw
							{
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,0.015},
											1
										},
										
										{
											{-0.0099999998,0.015},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,-0.015},
											1
										},
										
										{
											{-0.0099999998,-0.015},
											1
										}
									}
								};
							};
						};
						class pointsHeliFriend
						{
							class Draw
							{
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,0.015},
											1
										},
										
										{
											{-0.0099999998,0.015},
											1
										}
									},
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,-0.015},
											1
										},
										
										{
											{-0.0099999998,-0.015},
											1
										}
									}
								};
							};
							class DrawLine
							{
								width=4;
								points[]={};
							};
							class IFF_Text
							{
								source="static";
								scale=1;
								sourceScale=1;
								align="center";
								pos[]=
								{
									{0,0.0099999998},
									1
								};
								right[]=
								{
									{0.039999999,0.0099999998},
									1
								};
								down[]=
								{
									{0,0.050000001},
									1
								};
							};
						};
						class pointsLaser
						{
							class Draw
							{
								width=4;
								points[]=
								{
									
									{
										{0,-0.0214925},
										1
									},
									
									{
										{-1.74846e-009,0.0214925},
										1
									},
									{},
									
									{
										{0.02,9.3946895e-010},
										1
									},
									
									{
										{-0.02,-2.5629601e-010},
										1
									},
									{},
									
									{
										{0.0106066,-0.0113981},
										1
									},
									
									{
										{-0.0106066,0.0113981},
										1
									},
									{},
									
									{
										{0.0106066,0.0113981},
										1
									},
									
									{
										{-0.0106066,-0.0113981},
										1
									},
									{}
								};
							};
						};
						class pointsNVG: pointsLaser
						{
						};
						class pointsStatic
						{
							class Draw
							{
								width=4;
								points[]=
								{
									
									{
										
										{
											{0,0},
											1
										},
										
										{
											{0.0099999998,0.015},
											1
										},
										
										{
											{-0.0099999998,0.015},
											1
										}
									}
								};
							};
						};
						class pointsStaticEnemy: pointsStatic
						{
						};
						class pointsStaticFriend: pointsStatic
						{
						};
						class pointsStaticCiv: pointsStatic
						{
						};
						class pointsStaticNeutral: pointsStatic
						{
						};
					};
					class TargetDiamond
					{
						class shape
						{
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0020000001,-0.0021492499},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0020000001,-0.0021492499},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{0.0020000001,0.0021492499},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0020000001,0.0021492499},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									{-0.0020000001,-0.0021492499},
									1
								},
								{},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0214925},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0214925},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0214925},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0214925},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0214925},
									1
								}
							};
						};
					};
				};
			};
			class MFD_Left_Engine
			{
				topLeft="HUD_2_Top_Left";
				topRight="HUD_2_Top_Right";
				bottomLeft="HUD_2_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-2};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class TQ_Center
					{
						pos[]={0.227,0.29300001};
					};
					class TQ_Center_Rotate
					{
						source="throttle";
						sourceScale=1;
						min=0.2;
						max=1;
						minAngle=-420;
						maxAngle=-180;
						aspectRatio=0.75806499;
					};
					class T5_Center
					{
						pos[]={0.51800001,0.29300001};
					};
					class T5_Center_Rotate: TQ_Center_Rotate
					{
						source="rpm";
						min=0;
						max=1;
						maxAngle=-220;
					};
					class Roll_Center
					{
						pos[]={0.105,0.63999999};
					};
					class Roll_Center_Rotate: TQ_Center_Rotate
					{
						source="horizonBank";
						min="rad(-45)";
						max="rad(45)";
						minAngle=-315;
						maxAngle=-405;
					};
					class Pitch_Center_Linear
					{
						source="horizonDive";
						sourceScale=57.29578;
						min=-30;
						max=30;
						minPos[]={0,-0.0425};
						maxPos[]={0,0.0425};
					};
					class Yaw_Center_Linear
					{
						refreshRate=0.30000001;
						source="gmeterX";
						sourceScale=3;
						min=-25;
						max=25;
						minPos[]={0.0425,0};
						maxPos[]={-0.0425,0};
					};
					class Fuel_Center
					{
						pos[]={0.64600003,0.70999998};
					};
					class FuelFlowRot1
					{
						source="fuel";
						sourceScale=8.5;
						min=0;
						max=1;
						minAngle=-92;
						maxAngle=-111.5;
						aspectRatio=0.75806499;
					};
					class FuelFlowRot2: FuelFlowRot1
					{
						maxAngle=-103;
						max=1;
					};
					class FuelFlowRot3: FuelFlowRot1
					{
						maxAngle=-94.5;
						max=1.5;
					};
					class FuelFlowRot4: FuelFlowRot1
					{
						maxAngle=-86;
						max=2;
					};
					class FuelFlowRot5: FuelFlowRot1
					{
						maxAngle=-77.5;
						max=2.5;
					};
					class FuelFlowRot6: FuelFlowRot1
					{
						maxAngle=-69;
						max=3;
					};
					class FuelFlowRot7: FuelFlowRot1
					{
						maxAngle=-60.5;
						max=3.5;
					};
					class FuelFlowRot8: FuelFlowRot1
					{
						maxAngle=-52;
						max=4;
					};
					class FuelFlowRot9: FuelFlowRot1
					{
						maxAngle=-43.5;
						max=4.5;
					};
					class FuelFlowRot10: FuelFlowRot1
					{
						maxAngle=-35;
						max=5;
					};
					class FuelFlowRot11: FuelFlowRot1
					{
						maxAngle=-26.5;
						max=5.5;
					};
					class FuelFlowRot12: FuelFlowRot1
					{
						maxAngle=-18;
						max=6;
					};
					class FuelFlowRot13: FuelFlowRot1
					{
						maxAngle=-9.5;
						max=6.5;
					};
					class FuelFlowRot14: FuelFlowRot1
					{
						maxAngle=-1;
						max=7;
					};
					class FuelFlowRot15: FuelFlowRot1
					{
						maxAngle=7.5;
						max=7.5;
					};
					class FuelFlowRot16: FuelFlowRot1
					{
						maxAngle=16;
						max=8;
					};
					class FuelFlowRot17: FuelFlowRot1
					{
						maxAngle=24.5;
						max=8.5;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user4>=0)*(user4<=0)";
					class DarkBlue
					{
						color[]={0,0.0099999998,0.079999998};
						class Lines
						{
							width=12;
							points[]=
							{
								
								{
									{0.025,0.92000002},
									1
								},
								
								{
									{0.97500002,0.92000002},
									1
								},
								{},
								
								{
									{0.025,0.495},
									1
								},
								
								{
									{0.97500002,0.495},
									1
								},
								{},
								
								{
									{0.025,0.77499998},
									1
								},
								
								{
									{0.44499999,0.77499998},
									1
								},
								{},
								
								{
									{0.44499999,0.92000002},
									1
								},
								
								{
									{0.44499999,0.495},
									1
								},
								{},
								
								{
									{0.0049999999,0.185},
									1
								},
								
								{
									{0.13500001,0.185},
									1
								},
								
								{
									{0.13500001,0.153},
									1
								},
								
								{
									{0.93199998,0.153},
									1
								},
								
								{
									{0.93199998,0.185},
									1
								},
								
								{
									{0.99000001,0.185},
									1
								},
								{},
								
								{
									{0.54500002,0.495},
									1
								},
								
								{
									{0.54500002,0.41},
									1
								},
								
								{
									{0.97500002,0.41},
									1
								},
								{},
								
								{
									{0.70499998,0.41},
									1
								},
								
								{
									{0.70499998,0.153},
									1
								},
								{}
							};
						};
					};
					class White
					{
						color[]={1,1,1};
						alpha=0.40000001;
						class TxtRoll
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.105,0.53799999},
								1
							};
							right[]=
							{
								{0.127,0.53799999},
								1
							};
							down[]=
							{
								{0.105,0.55299997},
								1
							};
						};
						class TxtPitch
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.221,0.53799999},
								1
							};
							right[]=
							{
								{0.243,0.53799999},
								1
							};
							down[]=
							{
								{0.221,0.55299997},
								1
							};
						};
						class TxtYaw
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.37,0.53799999},
								1
							};
							right[]=
							{
								{0.39199999,0.53799999},
								1
							};
							down[]=
							{
								{0.37,0.55299997},
								1
							};
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.13,0.67500001},
								1
							};
							right[]=
							{
								{0.154,0.67500001},
								1
							};
							down[]=
							{
								{0.13,0.69300002},
								1
							};
						};
						class TxtSpeedBrake
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.31,0.67500001},
								1
							};
							right[]=
							{
								{0.33399999,0.67500001},
								1
							};
							down[]=
							{
								{0.31,0.69300002},
								1
							};
						};
						class TxtHyd
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.22,0.82999998},
								1
							};
							right[]=
							{
								{0.242,0.82999998},
								1
							};
							down[]=
							{
								{0.22,0.84500003},
								1
							};
						};
						class TxtCabAlt
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.34999999,0.82999998},
								1
							};
							right[]=
							{
								{0.37200001,0.82999998},
								1
							};
							down[]=
							{
								{0.34999999,0.84500003},
								1
							};
						};
						class TxtFuel
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.64999998,0.76499999},
								1
							};
							right[]=
							{
								{0.685,0.76499999},
								1
							};
							down[]=
							{
								{0.64999998,0.79500002},
								1
							};
						};
						class TxtFuel1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.52999997,0.82499999},
								1
							};
							right[]=
							{
								{0.55500001,0.82499999},
								1
							};
							down[]=
							{
								{0.52999997,0.84500003},
								1
							};
						};
						class TxtFuel2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.75999999,0.82499999},
								1
							};
							right[]=
							{
								{0.78500003,0.82499999},
								1
							};
							down[]=
							{
								{0.75999999,0.84500003},
								1
							};
						};
						class TxtAMP
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.61500001,0.43000001},
								1
							};
							right[]=
							{
								{0.63700002,0.43000001},
								1
							};
							down[]=
							{
								{0.61500001,0.44499999},
								1
							};
						};
						class TxtVOLT
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.75999999,0.43000001},
								1
							};
							right[]=
							{
								{0.78200001,0.43000001},
								1
							};
							down[]=
							{
								{0.75999999,0.44499999},
								1
							};
						};
						class TxtBat
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.90499997,0.43000001},
								1
							};
							right[]=
							{
								{0.92699999,0.43000001},
								1
							};
							down[]=
							{
								{0.90499997,0.44499999},
								1
							};
						};
						class TxtDetot
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.92400002,0.57200003},
								1
							};
							right[]=
							{
								{0.94599998,0.57200003},
								1
							};
							down[]=
							{
								{0.92400002,0.58700001},
								1
							};
						};
						class TxtJoker
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.92400002,0.77600002},
								1
							};
							right[]=
							{
								{0.94599998,0.77600002},
								1
							};
							down[]=
							{
								{0.92400002,0.79100001},
								1
							};
						};
						class TxtFuelFlow1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.54000002,0.53600001},
								1
							};
							right[]=
							{
								{0.56199998,0.53600001},
								1
							};
							down[]=
							{
								{0.54000002,0.551},
								1
							};
						};
						class TxtFuelFlow2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.74000001,0.53600001},
								1
							};
							right[]=
							{
								{0.76200002,0.53600001},
								1
							};
							down[]=
							{
								{0.74000001,0.551},
								1
							};
						};
						class TxtOil
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.84500003,0.16500001},
								1
							};
							right[]=
							{
								{0.88,0.16500001},
								1
							};
							down[]=
							{
								{0.84500003,0.192},
								1
							};
						};
						class TxtOilPress
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.79000002,0.20999999},
								1
							};
							right[]=
							{
								{0.81199998,0.20999999},
								1
							};
							down[]=
							{
								{0.79000002,0.22499999},
								1
							};
						};
						class TxtOilTemp
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88999999,0.20999999},
								1
							};
							right[]=
							{
								{0.912,0.20999999},
								1
							};
							down[]=
							{
								{0.88999999,0.22499999},
								1
							};
						};
						class TxtTorquePerc
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.23,0.16500001},
								1
							};
							right[]=
							{
								{0.26499999,0.16500001},
								1
							};
							down[]=
							{
								{0.23,0.192},
								1
							};
						};
						class TxtTorqueN1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.28999999,0.315},
								1
							};
							right[]=
							{
								{0.31299999,0.315},
								1
							};
							down[]=
							{
								{0.28999999,0.33199999},
								1
							};
						};
						class TxtTorqueN2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.22499999,0.34},
								1
							};
							right[]=
							{
								{0.248,0.34},
								1
							};
							down[]=
							{
								{0.22499999,0.35699999},
								1
							};
						};
						class TxtTorqueN3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.16500001,0.315},
								1
							};
							right[]=
							{
								{0.18799999,0.315},
								1
							};
							down[]=
							{
								{0.16500001,0.33199999},
								1
							};
						};
						class TxtTorqueN4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.16500001,0.255},
								1
							};
							right[]=
							{
								{0.18799999,0.255},
								1
							};
							down[]=
							{
								{0.16500001,0.27200001},
								1
							};
						};
						class TxtTorqueN5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.23,0.23},
								1
							};
							right[]=
							{
								{0.25299999,0.23},
								1
							};
							down[]=
							{
								{0.23,0.24699999},
								1
							};
						};
						class TxtTorqueN6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.285,0.255},
								1
							};
							right[]=
							{
								{0.308,0.255},
								1
							};
							down[]=
							{
								{0.285,0.27200001},
								1
							};
						};
						class TxtTempDeg
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.51499999,0.16500001},
								1
							};
							right[]=
							{
								{0.53799999,0.16500001},
								1
							};
							down[]=
							{
								{0.51499999,0.182},
								1
							};
						};
						class TxtTempDegC
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.515+0.019",
									0.15800001
								},
								1
							};
							right[]=
							{
								{0.55900002,0.15800001},
								1
							};
							down[]=
							{
								
								{
									"0.515+0.019",
									0.175
								},
								1
							};
						};
						class TxtTempN1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.29",
									0.315
								},
								1
							};
							right[]=
							{
								{0.60299999,0.315},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.29",
									0.33199999
								},
								1
							};
						};
						class TxtTempN2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.225",
									0.34
								},
								1
							};
							right[]=
							{
								{0.53799999,0.34},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.225",
									0.35699999
								},
								1
							};
						};
						class TxtTempN3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.165",
									0.315
								},
								1
							};
							right[]=
							{
								{0.47799999,0.315},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.165",
									0.33199999
								},
								1
							};
						};
						class TxtTempN4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.165",
									0.255
								},
								1
							};
							right[]=
							{
								{0.47799999,0.255},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.165",
									0.27200001
								},
								1
							};
						};
						class TxtTempN5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.23",
									0.23
								},
								1
							};
							right[]=
							{
								{0.54299998,0.23},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.23",
									0.24699999
								},
								1
							};
						};
						class TxtTempN6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.285",
									0.255
								},
								1
							};
							right[]=
							{
								{0.59799999,0.255},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.285",
									0.27200001
								},
								1
							};
						};
						class TxtNGPerc
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.30000001,0.41},
								1
							};
							right[]=
							{
								{0.34,0.41},
								1
							};
							down[]=
							{
								{0.30000001,0.44},
								1
							};
						};
						class TxtNPPerc
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.185,0.465},
								1
							};
							right[]=
							{
								{0.212,0.465},
								1
							};
							down[]=
							{
								{0.185,0.48199999},
								1
							};
						};
						class TxtOAT
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.050000001,0.38499999},
								1
							};
							right[]=
							{
								{0.077,0.38499999},
								1
							};
							down[]=
							{
								{0.050000001,0.40200001},
								1
							};
						};
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										"Roll_Center_Rotate",
										{-0.0080000004,0.050000001},
										1
									},
									
									{
										"Roll_Center_Rotate",
										{0,0.064999998},
										1
									},
									
									{
										"Roll_Center_Rotate",
										{0.0080000004,0.050000001},
										1
									}
								},
								
								{
									
									{
										"Pitch_Center_Linear",
										{0.22,0.61449999},
										1
									},
									
									{
										"Pitch_Center_Linear",
										{0.208,0.60750002},
										1
									},
									
									{
										"Pitch_Center_Linear",
										{0.22,0.60049999},
										1
									}
								},
								
								{
									
									{
										"Yaw_Center_Linear",
										{0.36000001,0.56999999},
										1
									},
									
									{
										"Yaw_Center_Linear",
										{0.368,0.58499998},
										1
									},
									
									{
										"Yaw_Center_Linear",
										{0.37599999,0.56999999},
										1
									}
								}
							};
						};
						class Static
						{
							width=3;
							points[]=
							{
								
								{
									"Fuel_Center",
									{-0.092387997,0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.14320099,0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.092387997,0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{0.14320099,0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.129343,0.0406138},
									1
								},
								
								{
									"Fuel_Center",
									{-0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.14,4.63905e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.129343,-0.0406138},
									1
								},
								
								{
									"Fuel_Center",
									{-0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{-0.098994903,-0.075044602},
									1
								},
								
								{
									"Fuel_Center",
									{-0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{-0.053575698,-0.098050401},
									1
								},
								
								{
									"Fuel_Center",
									{-0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.106129},
									1
								},
								
								{
									"Fuel_Center",
									{0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{0.053575698,-0.098050401},
									1
								},
								
								{
									"Fuel_Center",
									{0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{0.098994903,-0.075044602},
									1
								},
								
								{
									"Fuel_Center",
									{0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{0.129343,-0.0406138},
									1
								},
								
								{
									"Fuel_Center",
									{0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.14,4.63905e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.129343,0.0406138},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.152022,0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.152022,-0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{-0.128878,-0.065279499},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{-0.086113401,-0.097697698},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{-0.030239001,-0.115242},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{0.030239001,-0.115242},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{0.086113401,-0.097697698},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{0.128878,-0.065279499},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.152022,-0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.152022,0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.110866,0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{-0.117694,0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.117694,-0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{-0.099776298,-0.050539002},
									1
								},
								
								{
									"Fuel_Center",
									{-0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{-0.066668399,-0.075636901},
									1
								},
								
								{
									"Fuel_Center",
									{-0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{-0.023410801,-0.089219801},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.0909677},
									1
								},
								
								{
									"Fuel_Center",
									{0.023410801,-0.089219801},
									1
								},
								
								{
									"Fuel_Center",
									{0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{0.066668399,-0.075636901},
									1
								},
								
								{
									"Fuel_Center",
									{0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{0.099776298,-0.050539002},
									1
								},
								
								{
									"Fuel_Center",
									{0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{0.117694,-0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.117694,0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{0.110866,0.034811798},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.155,5.1360902e-009},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{-0.14320099,-0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{-0.109602,-0.083085001},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{-0.059315901,-0.108556},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0,-0.0909677},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.1175},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{0.059315901,-0.108556},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{0.109602,-0.083085001},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{0.14320099,-0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.155,5.1360902e-009},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.092387997,0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.098078497,0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{-0.1,3.3136101e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.098078497,-0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{-0.092387997,-0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.083146997,-0.0421158},
									1
								},
								
								{
									"Fuel_Center",
									{-0.070710696,-0.053603299},
									1
								},
								
								{
									"Fuel_Center",
									{-0.055557001,-0.063030802},
									1
								},
								
								{
									"Fuel_Center",
									{-0.038268302,-0.070036002},
									1
								},
								
								{
									"Fuel_Center",
									{-0.019509001,-0.074349903},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.075806499},
									1
								},
								
								{
									"Fuel_Center",
									{0.019509001,-0.074349903},
									1
								},
								
								{
									"Fuel_Center",
									{0.038268302,-0.070036002},
									1
								},
								
								{
									"Fuel_Center",
									{0.055557001,-0.063030802},
									1
								},
								
								{
									"Fuel_Center",
									{0.070710696,-0.053603299},
									1
								},
								
								{
									"Fuel_Center",
									{0.083146997,-0.0421158},
									1
								},
								
								{
									"Fuel_Center",
									{0.092387997,-0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{0.098078497,-0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{0.1,3.3136101e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.098078497,0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{0.092387997,0.029009899},
									1
								},
								{}
							};
						};
					};
					class LightBlue
					{
						color[]={0,1,1};
						alpha=0.40000001;
						class TxtFuelVal
						{
							source="fuel";
							scale=1;
							sourceScale=1054;
							sourcePrecision=0;
							sourceLength=0;
							sourceOffset=0;
							align="center";
							pos[]=
							{
								{0.64999998,0.72500002},
								1
							};
							right[]=
							{
								{0.685,0.72500002},
								1
							};
							down[]=
							{
								{0.64999998,0.755},
								1
							};
						};
						class TxtFuelVal1
						{
							source="fuel";
							scale=1;
							sourceScale=527;
							sourcePrecision=0;
							sourceLength=0;
							sourceOffset=0;
							align="center";
							pos[]=
							{
								{0.52999997,0.86500001},
								1
							};
							right[]=
							{
								{0.55500001,0.86500001},
								1
							};
							down[]=
							{
								{0.52999997,0.88499999},
								1
							};
						};
						class TxtFuelVal2
						{
							source="fuel";
							scale=1;
							sourceScale=527;
							sourcePrecision=0;
							sourceLength=0;
							sourceOffset=0;
							align="center";
							pos[]=
							{
								{0.75999999,0.86500001},
								1
							};
							right[]=
							{
								{0.78500003,0.86500001},
								1
							};
							down[]=
							{
								{0.75999999,0.88499999},
								1
							};
						};
						class FuelConsumption
						{
							source="throttle";
							sourceScale=200;
							sourceOffset=40;
							refreshRate=0.5;
							align="center";
							scale=1;
							pos[]=
							{
								{0.63,0.53600001},
								1
							};
							right[]=
							{
								{0.65200001,0.53600001},
								1
							};
							down[]=
							{
								{0.63,0.551},
								1
							};
						};
						class TxtTO
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.050000001,0.19499999},
								1
							};
							right[]=
							{
								{0.077,0.19499999},
								1
							};
							down[]=
							{
								{0.050000001,0.212},
								1
							};
						};
						class Static_Bold
						{
							width=22;
							points[]=
							{
								
								{
									"FuelFlowRot4",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot5",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot6",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot7",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot8",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot9",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot10",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot11",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot12",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot13",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot14",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot15",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot16",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot17",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								}
							};
						};
						class Fuel1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.17,-0.0099999998},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.14300001,-0.0099999998},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.17,0.0070000002},
								1
							};
						};
						class Fuel2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.16,-0.055},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.133,-0.055},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.16,-0.037999999},
								1
							};
						};
						class Fuel3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.145,-0.079999998},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.118,-0.079999998},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.145,-0.063000001},
								1
							};
						};
						class Fuel4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.12,-0.102},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.093000002,-0.102},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.12,-0.085000001},
								1
							};
						};
						class Fuel5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.059999999,-0.13},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.033,-0.13},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.059999999,-0.113},
								1
							};
						};
						class Fuel6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0,-0.14},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.027000001,-0.14},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0,-0.123},
								1
							};
						};
						class Fuel7
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.059999999,-0.13},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.086999997,-0.13},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.059999999,-0.113},
								1
							};
						};
						class Fuel8
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.12,-0.106},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.147,-0.106},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.12,-0.089000002},
								1
							};
						};
						class Fuel9
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,-0.055},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.192,-0.055},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,-0.037999999},
								1
							};
						};
						class Fuel10
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.175,-0.0099999998},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.20200001,-0.0099999998},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.175,0.0070000002},
								1
							};
						};
						class Fuel11
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,0.035},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.192,0.035},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,0.052000001},
								1
							};
						};
					};
					class BtnEject1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.090000004,0.82999998},
							1
						};
						right[]=
						{
							{0.112,0.82999998},
							1
						};
						down[]=
						{
							{0.090000004,0.85000002},
							1
						};
					};
					class BtnEject2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.090000004,0.86000001},
							1
						};
						right[]=
						{
							{0.112,0.86000001},
							1
						};
						down[]=
						{
							{0.090000004,0.88},
							1
						};
					};
					class BtnIND
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.95999998},
							1
						};
						right[]=
						{
							{0.23999999,0.95999998},
							1
						};
						down[]=
						{
							{0.20999999,0.98500001},
							1
						};
					};
					class BtnSWAP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.95999998},
							1
						};
						right[]=
						{
							{0.49000001,0.95999998},
							1
						};
						down[]=
						{
							{0.46000001,0.98500001},
							1
						};
					};
					class BtnHSD
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.60000002,0.95999998},
							1
						};
						right[]=
						{
							{0.63,0.95999998},
							1
						};
						down[]=
						{
							{0.60000002,0.98500001},
							1
						};
					};
					class BtnDCLT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.95999998},
							1
						};
						right[]=
						{
							{0.75,0.95999998},
							1
						};
						down[]=
						{
							{0.72000003,0.98500001},
							1
						};
					};
					class TxtHydVal
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.22,0.86000001},
							1
						};
						right[]=
						{
							{0.242,0.86000001},
							1
						};
						down[]=
						{
							{0.22,0.875},
							1
						};
					};
					class TxtCabAltVal
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.34999999,0.86000001},
							1
						};
						right[]=
						{
							{0.37200001,0.86000001},
							1
						};
						down[]=
						{
							{0.34999999,0.875},
							1
						};
					};
					class TxtAMPvAL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.61500001,0.465},
							1
						};
						right[]=
						{
							{0.63700002,0.465},
							1
						};
						down[]=
						{
							{0.61500001,0.47999999},
							1
						};
					};
					class TxtVOLTvAL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.75999999,0.465},
							1
						};
						right[]=
						{
							{0.78200001,0.465},
							1
						};
						down[]=
						{
							{0.75999999,0.47999999},
							1
						};
					};
					class TxtBatvAL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.90499997,0.465},
							1
						};
						right[]=
						{
							{0.92699999,0.465},
							1
						};
						down[]=
						{
							{0.90499997,0.47999999},
							1
						};
					};
					class TxtOATDir
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.050000001,0.41},
							1
						};
						right[]=
						{
							{0.077,0.41},
							1
						};
						down[]=
						{
							{0.050000001,0.42699999},
							1
						};
					};
					class NGVal
					{
						source="rpm";
						scale=1;
						sourceScale=100;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.44,0.41},
							1
						};
						right[]=
						{
							{0.47999999,0.41},
							1
						};
						down[]=
						{
							{0.44,0.44},
							1
						};
					};
					class T5Val
					{
						source="rpm";
						scale=1;
						sourceScale=760;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.60500002,0.28099999},
							1
						};
						right[]=
						{
							{0.63700002,0.28099999},
							1
						};
						down[]=
						{
							{0.60500002,0.308},
							1
						};
					};
					class TQVal
					{
						source="throttle";
						scale=1;
						sourceScale=100;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.33000001,0.28099999},
							1
						};
						right[]=
						{
							{0.36199999,0.28099999},
							1
						};
						down[]=
						{
							{0.33000001,0.308},
							1
						};
					};
					class TPVal
					{
						source="rpm";
						scale=1;
						sourceScale=100;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.285,0.465},
							1
						};
						right[]=
						{
							{0.31200001,0.465},
							1
						};
						down[]=
						{
							{0.285,0.48199999},
							1
						};
					};
					class TxtOilPressVaL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.79000002,0.34999999},
							1
						};
						right[]=
						{
							{0.81199998,0.34999999},
							1
						};
						down[]=
						{
							{0.79000002,0.36500001},
							1
						};
					};
					class TxtOilTempVaL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.88999999,0.34999999},
							1
						};
						right[]=
						{
							{0.912,0.34999999},
							1
						};
						down[]=
						{
							{0.88999999,0.36500001},
							1
						};
					};
					class PitchVal
					{
						source="horizonDive";
						scale=1;
						sourceScale=57.295799;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="right";
						pos[]=
						{
							{0.22499999,0.5995},
							1
						};
						right[]=
						{
							{0.252,0.5995},
							1
						};
						down[]=
						{
							{0.22499999,0.61650002},
							1
						};
					};
					class TxtJokerVal
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.92400002,0.80599999},
							1
						};
						right[]=
						{
							{0.94599998,0.80599999},
							1
						};
						down[]=
						{
							{0.92400002,0.82099998},
							1
						};
					};
					class DetotVal
					{
						source="fuel";
						scale=1;
						sourceScale=1054;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.92400002,0.61000001},
							1
						};
						right[]=
						{
							{0.94599998,0.61000001},
							1
						};
						down[]=
						{
							{0.92400002,0.625},
							1
						};
					};
					class GreenPolygon
					{
						points[]=
						{
							
							{
								
								{
									{0.31,0.94999999},
									1
								},
								
								{
									{0.44999999,0.94999999},
									1
								},
								
								{
									{0.44999999,1},
									1
								},
								
								{
									{0.31,1},
									1
								}
							},
							
							{
								
								{
									{0.80500001,0.25999999},
									1
								},
								
								{
									{0.829,0.25999999},
									1
								},
								
								{
									{0.829,0.27500001},
									1
								},
								
								{
									{0.80500001,0.27500001},
									1
								}
							},
							
							{
								
								{
									{0.801,0.26499999},
									1
								},
								
								{
									{0.77899998,0.257},
									1
								},
								
								{
									{0.78399998,0.26499999},
									1
								}
							},
							
							{
								
								{
									{0.801,0.26499999},
									1
								},
								
								{
									{0.77899998,0.273},
									1
								},
								
								{
									{0.78399998,0.26499999},
									1
								}
							},
							
							{
								
								{
									{0.85500002,0.255},
									1
								},
								
								{
									{0.87900001,0.255},
									1
								},
								
								{
									{0.87900001,0.30500001},
									1
								},
								
								{
									{0.85500002,0.30500001},
									1
								}
							},
							
							{
								
								{
									{0.88300002,0.27500001},
									1
								},
								
								{
									{0.90499997,0.26699999},
									1
								},
								
								{
									{0.89999998,0.27500001},
									1
								}
							},
							
							{
								
								{
									{0.88300002,0.27500001},
									1
								},
								
								{
									{0.90499997,0.28299999},
									1
								},
								
								{
									{0.89999998,0.27500001},
									1
								}
							}
						};
					};
					class Static
					{
						width=6;
						points[]=
						{
							
							{
								{0.89999998,0.75800002},
								1
							},
							
							{
								{0.94999999,0.75800002},
								1
							},
							
							{
								{0.92500001,0.73799998},
								1
							},
							
							{
								{0.89999998,0.75800002},
								1
							},
							{},
							
							{
								{0.89999998,0.83899999},
								1
							},
							
							{
								{0.94999999,0.83899999},
								1
							},
							
							{
								{0.92500001,0.85900003},
								1
							},
							
							{
								{0.89999998,0.83899999},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-1.22392e-008,-0.053064499},
								1
							},
							
							{
								"Roll_Center",
								{-1.39876e-008,-0.0606452},
								1
							},
							{},
							
							{
								"Roll_Center",
								{0.0262224,-0.049200598},
								1
							},
							
							{
								"Roll_Center",
								{0.0299685,-0.0562292},
								1
							},
							{},
							
							{
								"Roll_Center",
								{0.048626099,-0.038171399},
								1
							},
							
							{
								"Roll_Center",
								{0.0555727,-0.043624502},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-0.026222499,-0.049200598},
								1
							},
							
							{
								"Roll_Center",
								{-0.0299685,-0.0562292},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-0.048626099,-0.038171399},
								1
							},
							
							{
								"Roll_Center",
								{-0.0555727,-0.043624502},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-0.0555727,-0.043624502},
								1
							},
							
							{
								"Roll_Center",
								{-0.0299685,-0.0562292},
								1
							},
							
							{
								"Roll_Center",
								{-1.39876e-008,-0.0606452},
								1
							},
							
							{
								"Roll_Center",
								{0.0299685,-0.0562292},
								1
							},
							
							{
								"Roll_Center",
								{0.0555727,-0.043624502},
								1
							},
							{},
							
							{
								{0.19149999,0.565},
								1
							},
							
							{
								{0.19149999,0.64999998},
								1
							},
							{},
							
							{
								{0.19149999,0.60750002},
								1
							},
							
							{
								{0.20649999,0.60750002},
								1
							},
							{},
							
							{
								{0.19149999,0.64999998},
								1
							},
							
							{
								{0.20649999,0.64999998},
								1
							},
							{},
							
							{
								{0.19149999,0.565},
								1
							},
							
							{
								{0.20649999,0.565},
								1
							},
							{},
							
							{
								{0.19149999,0.58625001},
								1
							},
							
							{
								{0.2015,0.58625001},
								1
							},
							{},
							
							{
								{0.19149999,0.62875003},
								1
							},
							
							{
								{0.2015,0.62875003},
								1
							},
							{},
							
							{
								{0.34299999,0.60000002},
								1
							},
							
							{
								{0.39300001,0.60000002},
								1
							},
							{},
							
							{
								{0.368,0.60000002},
								1
							},
							
							{
								{0.368,0.58999997},
								1
							},
							{},
							
							{
								{0.029999999,0.886177},
								1
							},
							
							{
								{0.15000001,0.886177},
								1
							},
							
							{
								{0.15000001,0.81946802},
								1
							},
							
							{
								{0.029999999,0.81946802},
								1
							},
							
							{
								{0.029999999,0.886177},
								1
							},
							{},
							
							{
								"TQ_Center_Rotate",
								{0,0},
								1
							},
							
							{
								"TQ_Center_Rotate",
								{-1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-1.57361e-008,-0.068225801},
								1
							},
							
							{
								"TQ_Center",
								{-1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.045000002,-0.059085298},
								1
							},
							
							{
								"TQ_Center",
								{-0.0550001,-0.072215296},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.077942297,-0.0341129},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,-0.041693501},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.090000004,-9.4882298e-009},
								1
							},
							
							{
								"TQ_Center",
								{-0.11,-1.15967e-008},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.077942297,0.0341129},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,0.041693602},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.045000002,0.059085298},
								1
							},
							
							{
								"TQ_Center",
								{-0.055,0.072215296},
								1
							},
							{},
							
							{
								"TQ_Center",
								{2.1464801e-009,0.068225801},
								1
							},
							
							{
								"TQ_Center",
								{2.6234701e-009,0.083387099},
								1
							},
							{},
							
							{
								"TQ_Center",
								{0.045000099,0.059085298},
								1
							},
							
							{
								"TQ_Center",
								{0.0550001,0.072215296},
								1
							},
							{},
							
							{
								"TQ_Center",
								{0.077942297,0.0341129},
								1
							},
							
							{
								"TQ_Center",
								{0.095262803,0.041693501},
								1
							},
							{},
							
							{
								"TQ_Center",
								{0.095262803,0.041693602},
								1
							},
							
							{
								"TQ_Center",
								{0.0777817,0.058963601},
								1
							},
							
							{
								"TQ_Center",
								{0.055,0.072215401},
								1
							},
							
							{
								"TQ_Center",
								{0.028470101,0.080545798},
								1
							},
							
							{
								"TQ_Center",
								{-9.6165103e-009,0.083387099},
								1
							},
							
							{
								"TQ_Center",
								{-0.028470101,0.080545701},
								1
							},
							
							{
								"TQ_Center",
								{-0.055,0.072215296},
								1
							},
							
							{
								"TQ_Center",
								{-0.0777817,0.058963601},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,0.041693501},
								1
							},
							
							{
								"TQ_Center",
								{-0.106252,0.021582199},
								1
							},
							
							{
								"TQ_Center",
								{-0.11,-9.9438102e-010},
								1
							},
							
							{
								"TQ_Center",
								{-0.106252,-0.021582199},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,-0.041693602},
								1
							},
							
							{
								"TQ_Center",
								{-0.077781796,-0.058963601},
								1
							},
							
							{
								"TQ_Center",
								{-0.055,-0.072215401},
								1
							},
							
							{
								"TQ_Center",
								{-0.028470101,-0.080545798},
								1
							},
							
							{
								"TQ_Center",
								{1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"T5_Center_Rotate",
								{0,0},
								1
							},
							
							{
								"T5_Center_Rotate",
								{-1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.077942297,-0.0341129},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,-0.041693501},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.090000004,-9.4882298e-009},
								1
							},
							
							{
								"T5_Center",
								{-0.11,-1.15967e-008},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.077942297,0.0341129},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,0.041693602},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.045000002,0.059085298},
								1
							},
							
							{
								"T5_Center",
								{-0.055,0.072215296},
								1
							},
							{},
							
							{
								"T5_Center",
								{2.1464801e-009,0.068225801},
								1
							},
							
							{
								"T5_Center",
								{2.6234701e-009,0.083387099},
								1
							},
							{},
							
							{
								"T5_Center",
								{0.045000099,0.059085298},
								1
							},
							
							{
								"T5_Center",
								{0.0550001,0.072215296},
								1
							},
							{},
							
							{
								"T5_Center",
								{0.077942297,0.0341129},
								1
							},
							
							{
								"T5_Center",
								{0.095262803,0.041693501},
								1
							},
							{},
							
							{
								"T5_Center",
								{0.095262803,0.041693602},
								1
							},
							
							{
								"T5_Center",
								{0.0777817,0.058963601},
								1
							},
							
							{
								"T5_Center",
								{0.055,0.072215401},
								1
							},
							
							{
								"T5_Center",
								{0.028470101,0.080545798},
								1
							},
							
							{
								"T5_Center",
								{-9.6165103e-009,0.083387099},
								1
							},
							
							{
								"T5_Center",
								{-0.028470101,0.080545701},
								1
							},
							
							{
								"T5_Center",
								{-0.055,0.072215296},
								1
							},
							
							{
								"T5_Center",
								{-0.0777817,0.058963601},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,0.041693501},
								1
							},
							
							{
								"T5_Center",
								{-0.106252,0.021582199},
								1
							},
							
							{
								"T5_Center",
								{-0.11,-9.9438102e-010},
								1
							},
							
							{
								"T5_Center",
								{-0.106252,-0.021582199},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,-0.041693602},
								1
							},
							
							{
								"T5_Center",
								{-0.077781796,-0.058963601},
								1
							}
						};
					};
					class Static_Bold
					{
						width=22;
						points[]=
						{
							
							{
								"FuelFlowRot4",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot5",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot6",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot7",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot8",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot9",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot10",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot11",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot12",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot13",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot14",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot15",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot16",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot17",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							}
						};
					};
					class Yellow
					{
						color[]={0.80000001,0.1,0};
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.31799999,0.60000002},
									1
								},
								
								{
									{0.34299999,0.60000002},
									1
								},
								{},
								
								{
									{0.39300001,0.60000002},
									1
								},
								
								{
									{0.41800001,0.60000002},
									1
								},
								{},
								
								{
									{0.31799999,0.60000002},
									1
								},
								
								{
									{0.31799999,0.58999997},
									1
								},
								{},
								
								{
									{0.41800001,0.60000002},
									1
								},
								
								{
									{0.41800001,0.58999997},
									1
								},
								{},
								
								{
									{0.39300001,0.60000002},
									1
								},
								
								{
									{0.39300001,0.59200001},
									1
								},
								{},
								
								{
									{0.34299999,0.60000002},
									1
								},
								
								{
									{0.34299999,0.59200001},
									1
								},
								{},
								
								{
									"TQ_Center",
									{1.9232999e-008,-0.083387099},
									1
								},
								
								{
									"TQ_Center",
									{0.028470101,-0.080545701},
									1
								},
								
								{
									"TQ_Center",
									{0.0550001,-0.072215296},
									1
								},
								{},
								
								{
									"T5_Center",
									{-0.045000002,-0.059085298},
									1
								},
								
								{
									"T5_Center",
									{-0.0550001,-0.072215296},
									1
								},
								{},
								
								{
									"T5_Center",
									{-0.077781796,-0.058963601},
									1
								},
								
								{
									"T5_Center",
									{-0.055,-0.072215401},
									1
								}
							};
						};
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										{0.80500001,0.25},
										1
									},
									
									{
										{0.829,0.25},
										1
									},
									
									{
										{0.829,0.25999999},
										1
									},
									
									{
										{0.80500001,0.25999999},
										1
									}
								},
								
								{
									
									{
										{0.80500001,0.27500001},
										1
									},
									
									{
										{0.829,0.27500001},
										1
									},
									
									{
										{0.829,0.30000001},
										1
									},
									
									{
										{0.80500001,0.30000001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.30000001},
										1
									},
									
									{
										{0.87900001,0.30000001},
										1
									},
									
									{
										{0.87900001,0.33500001},
										1
									},
									
									{
										{0.85500002,0.33500001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.25},
										1
									},
									
									{
										{0.87900001,0.25},
										1
									},
									
									{
										{0.87900001,0.255},
										1
									},
									
									{
										{0.85500002,0.255},
										1
									}
								}
							};
						};
					};
					class Red
					{
						color[]={1,0,0};
						class Static
						{
							points[]=
							{
								
								{
									"TQ_Center",
									{0.045000002,-0.059085298},
									1
								},
								
								{
									"TQ_Center",
									{0.055,-0.072215401},
									1
								},
								{},
								
								{
									"TQ_Center",
									{0.077942297,-0.0341129},
									1
								},
								
								{
									"TQ_Center",
									{0.095262803,-0.041693602},
									1
								},
								{},
								
								{
									"TQ_Center",
									{0.0550001,-0.072215296},
									1
								},
								
								{
									"TQ_Center",
									{0.077781796,-0.058963601},
									1
								},
								
								{
									"TQ_Center",
									{0.095262803,-0.041693501},
									1
								},
								{},
								
								{
									"T5_Center",
									{-1.57361e-008,-0.068225801},
									1
								},
								
								{
									"T5_Center",
									{-1.9232999e-008,-0.083387099},
									1
								},
								{},
								
								{
									"T5_Center",
									{0.045000002,-0.059085298},
									1
								},
								
								{
									"T5_Center",
									{0.055,-0.072215401},
									1
								},
								{},
								
								{
									"T5_Center",
									{0.077942297,-0.0341129},
									1
								},
								
								{
									"T5_Center",
									{0.095262803,-0.041693602},
									1
								},
								{},
								
								{
									"T5_Center",
									{-0.055,-0.072215401},
									1
								},
								
								{
									"T5_Center",
									{-0.028470101,-0.080545798},
									1
								},
								
								{
									"T5_Center",
									{1.9232999e-008,-0.083387099},
									1
								},
								
								{
									"T5_Center",
									{0.028470101,-0.080545701},
									1
								},
								
								{
									"T5_Center",
									{0.0550001,-0.072215296},
									1
								},
								
								{
									"T5_Center",
									{0.077781796,-0.058963601},
									1
								},
								
								{
									"T5_Center",
									{0.095262803,-0.041693501},
									1
								},
								{}
							};
						};
						class Static_Bold
						{
							width=22;
							points[]=
							{
								
								{
									"FuelFlowRot1",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot2",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot3",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot4",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								{},
								
								{
									"FuelFlowRot1",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot2",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot3",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot4",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								{}
							};
						};
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										{0.80500001,0.23999999},
										1
									},
									
									{
										{0.829,0.23999999},
										1
									},
									
									{
										{0.829,0.252},
										1
									},
									
									{
										{0.80500001,0.252},
										1
									}
								},
								
								{
									
									{
										{0.80500001,0.30000001},
										1
									},
									
									{
										{0.829,0.30000001},
										1
									},
									
									{
										{0.829,0.33000001},
										1
									},
									
									{
										{0.80500001,0.33000001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.33000001},
										1
									},
									
									{
										{0.87900001,0.33000001},
										1
									},
									
									{
										{0.87900001,0.33500001},
										1
									},
									
									{
										{0.85500002,0.33500001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.23999999},
										1
									},
									
									{
										{0.87900001,0.23999999},
										1
									},
									
									{
										{0.87900001,0.252},
										1
									},
									
									{
										{0.85500002,0.252},
										1
									}
								}
							};
						};
					};
					class BlackText
					{
						color[]={0,0,0};
						alpha=1;
						class BtnEICAS1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
						class BtnEICAS2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
						class BtnEICAS3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
					};
					class Flaps_Up
					{
						condition="1-flaps";
						color[]={1,1,1};
						alpha=0.60000002;
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.059999999,0.708},
									1
								},
								
								{
									{0.2,0.708},
									1
								},
								
								{
									{0.2,0.73799998},
									1
								},
								
								{
									{0.059999999,0.73799998},
									1
								},
								
								{
									{0.059999999,0.708},
									1
								},
								{}
							};
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.13,0.71499997},
								1
							};
							right[]=
							{
								{0.154,0.71499997},
								1
							};
							down[]=
							{
								{0.13,0.73299998},
								1
							};
						};
					};
					class Flaps_Down1: Flaps_Up
					{
						condition="flaps";
						alpha=1;
						color[]={0,0.12,0};
						class Static: Static
						{
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.13,0.71499997},
								1
							};
							right[]=
							{
								{0.154,0.71499997},
								1
							};
							down[]=
							{
								{0.13,0.73299998},
								1
							};
						};
					};
					class SpeedBrake_Closed
					{
						condition="1-user8";
						color[]={1,1,1};
						alpha=0.60000002;
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.23999999,0.708},
									1
								},
								
								{
									{0.38,0.708},
									1
								},
								
								{
									{0.38,0.73799998},
									1
								},
								
								{
									{0.23999999,0.73799998},
									1
								},
								
								{
									{0.23999999,0.708},
									1
								},
								{}
							};
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.31,0.71499997},
								1
							};
							right[]=
							{
								{0.33399999,0.71499997},
								1
							};
							down[]=
							{
								{0.31,0.73299998},
								1
							};
						};
					};
					class SpeedBrake_Open: SpeedBrake_Closed
					{
						condition="user8";
						alpha=1;
						color[]={0,0.12,0};
						class Static: Static
						{
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.31,0.71499997},
								1
							};
							right[]=
							{
								{0.33399999,0.71499997},
								1
							};
							down[]=
							{
								{0.31,0.73299998},
								1
							};
						};
					};
					class Canopy_Open
					{
						condition="user13<=0.98";
						color[]={1,0,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.050000001,0.0099999998},
									1
								},
								
								{
									{0.22,0.0099999998},
									1
								},
								
								{
									{0.22,0.07},
									1
								},
								
								{
									{0.050000001,0.07},
									1
								},
								
								{
									{0.050000001,0.0099999998},
									1
								},
								{},
								
								{
									{0.41,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.07},
									1
								},
								
								{
									{0.41,0.07},
									1
								},
								
								{
									{0.41,0.0099999998},
									1
								},
								{},
								
								{
									{0.58999997,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.07},
									1
								},
								
								{
									{0.58999997,0.07},
									1
								},
								
								{
									{0.58999997,0.0099999998},
									1
								},
								{},
								
								{
									{0.76999998,0.0099999998},
									1
								},
								
								{
									{0.94,0.0099999998},
									1
								},
								
								{
									{0.94,0.07},
									1
								},
								
								{
									{0.76999998,0.07},
									1
								},
								
								{
									{0.76999998,0.0099999998},
									1
								},
								{},
								
								{
									{0.050000001,0.079999998},
									1
								},
								
								{
									{0.22,0.079999998},
									1
								},
								
								{
									{0.22,0.14},
									1
								},
								
								{
									{0.050000001,0.14},
									1
								},
								
								{
									{0.050000001,0.079999998},
									1
								},
								{},
								
								{
									{0.23,0.079999998},
									1
								},
								
								{
									{0.40000001,0.079999998},
									1
								},
								
								{
									{0.40000001,0.14},
									1
								},
								
								{
									{0.23,0.14},
									1
								},
								
								{
									{0.23,0.079999998},
									1
								},
								{},
								
								{
									{0.41,0.079999998},
									1
								},
								
								{
									{0.57999998,0.079999998},
									1
								},
								
								{
									{0.57999998,0.14},
									1
								},
								
								{
									{0.41,0.14},
									1
								},
								
								{
									{0.41,0.079999998},
									1
								},
								{},
								
								{
									{0.58999997,0.079999998},
									1
								},
								
								{
									{0.75999999,0.079999998},
									1
								},
								
								{
									{0.75999999,0.14},
									1
								},
								
								{
									{0.58999997,0.14},
									1
								},
								
								{
									{0.58999997,0.079999998},
									1
								},
								{},
								
								{
									{0.76999998,0.079999998},
									1
								},
								
								{
									{0.94,0.079999998},
									1
								},
								
								{
									{0.94,0.14},
									1
								},
								
								{
									{0.76999998,0.14},
									1
								},
								
								{
									{0.76999998,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.02
								},
								1
							};
							right[]=
							{
								{0.15899999,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.15899999,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.063000001
								},
								1
							};
						};
					};
					class L_Aileron_Yellow
					{
						condition="(user14>=0.25)*(user14<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.41,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.07},
									1
								},
								
								{
									{0.41,0.07},
									1
								},
								
								{
									{0.41,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.02
								},
								1
							};
							right[]=
							{
								{0.51899999,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.51899999,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.063000001
								},
								1
							};
						};
					};
					class L_Aileron_Red: L_Aileron_Yellow
					{
						condition="(user14>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class R_Aileron_Yellow
					{
						condition="(user15>=0.25)*(user15<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.58999997,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.07},
									1
								},
								
								{
									{0.58999997,0.07},
									1
								},
								
								{
									{0.58999997,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.02
								},
								1
							};
							right[]=
							{
								{0.699,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.699,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.063000001
								},
								1
							};
						};
					};
					class R_Aileron_Red: R_Aileron_Yellow
					{
						condition="(user15>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class Rudder_Yellow
					{
						condition="(user18>=0.25)*(user18<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.76999998,0.0099999998},
									1
								},
								
								{
									{0.94,0.0099999998},
									1
								},
								
								{
									{0.94,0.07},
									1
								},
								
								{
									{0.76999998,0.07},
									1
								},
								
								{
									{0.76999998,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.02
								},
								1
							};
							right[]=
							{
								{0.87900001,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.87900001,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.063000001
								},
								1
							};
						};
					};
					class Rudder_Red: Rudder_Yellow
					{
						condition="(user18>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class L_Elevator_Yellow
					{
						condition="(user16>=0.25)*(user16<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.050000001,0.079999998},
									1
								},
								
								{
									{0.22,0.079999998},
									1
								},
								
								{
									{0.22,0.14},
									1
								},
								
								{
									{0.050000001,0.14},
									1
								},
								
								{
									{0.050000001,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.15899999,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.115
								},
								1
							};
							right[]=
							{
								{0.15899999,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.133
								},
								1
							};
						};
					};
					class L_Elevator_Red: L_Elevator_Yellow
					{
						condition="(user16>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class R_Elevator_Yellow
					{
						condition="(user17>=0.25)*(user17<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.23,0.079999998},
									1
								},
								
								{
									{0.40000001,0.079999998},
									1
								},
								
								{
									{0.40000001,0.14},
									1
								},
								
								{
									{0.23,0.14},
									1
								},
								
								{
									{0.23,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.33899999,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.115
								},
								1
							};
							right[]=
							{
								{0.33899999,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.133
								},
								1
							};
						};
					};
					class R_Elevator_Red: R_Elevator_Yellow
					{
						condition="(user17>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class L_Fuel_Yellow
					{
						condition="(user19>=0.25)*(user19<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.41,0.079999998},
									1
								},
								
								{
									{0.57999998,0.079999998},
									1
								},
								
								{
									{0.57999998,0.14},
									1
								},
								
								{
									{0.41,0.14},
									1
								},
								
								{
									{0.41,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.51899999,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.115
								},
								1
							};
							right[]=
							{
								{0.51899999,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.133
								},
								1
							};
						};
					};
					class L_Fuel_Red: L_Fuel_Yellow
					{
						condition="(user19>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class R_Fuel_Yellow
					{
						condition="(user20>=0.25)*(user20<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.58999997,0.079999998},
									1
								},
								
								{
									{0.75999999,0.079999998},
									1
								},
								
								{
									{0.75999999,0.14},
									1
								},
								
								{
									{0.58999997,0.14},
									1
								},
								
								{
									{0.58999997,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.699,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.115
								},
								1
							};
							right[]=
							{
								{0.699,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.133
								},
								1
							};
						};
					};
					class R_Fuel_Red: R_Fuel_Yellow
					{
						condition="(user20>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class FLIR_Yellow
					{
						condition="(user22>=0.25)*(user22<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.76999998,0.079999998},
									1
								},
								
								{
									{0.94,0.079999998},
									1
								},
								
								{
									{0.94,0.14},
									1
								},
								
								{
									{0.76999998,0.14},
									1
								},
								
								{
									{0.76999998,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.87900001,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.115
								},
								1
							};
							right[]=
							{
								{0.87900001,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.133
								},
								1
							};
						};
					};
					class FLIR_Red: FLIR_Yellow
					{
						condition="(user22>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class Engine_Yellow
					{
						condition="(user21>=0.25)*(user21<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.23,0.0099999998},
									1
								},
								
								{
									{0.40000001,0.0099999998},
									1
								},
								
								{
									{0.40000001,0.07},
									1
								},
								
								{
									{0.23,0.07},
									1
								},
								
								{
									{0.23,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.02
								},
								1
							};
							right[]=
							{
								{0.33899999,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.33899999,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.063000001
								},
								1
							};
						};
					};
					class Engine_Red: Engine_Yellow
					{
						condition="(user21>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
				};
			};
			class MFD_Left_Nav
			{
				topLeft="HUD_2_Top_Left";
				topRight="HUD_2_Top_Right";
				bottomLeft="HUD_2_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-2};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Direction_Center
					{
						pos[]={0.5,0.55500001};
					};
					class Rotation_0
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="heading";
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=0.75806499;
					};
					class Rotation_10: Rotation_0
					{
						minAngle=10;
						maxAngle=-350;
					};
					class Rotation_20: Rotation_0
					{
						minAngle=20;
						maxAngle=-340;
					};
					class Rotation_30: Rotation_0
					{
						minAngle=30;
						maxAngle=-330;
					};
					class Rotation_40: Rotation_0
					{
						minAngle=40;
						maxAngle=-320;
					};
					class Rotation_50: Rotation_0
					{
						minAngle=50;
						maxAngle=-310;
					};
					class Rotation_60: Rotation_0
					{
						minAngle=60;
						maxAngle=-300;
					};
					class Rotation_70: Rotation_0
					{
						minAngle=70;
						maxAngle=-290;
					};
					class Rotation_80: Rotation_0
					{
						minAngle=80;
						maxAngle=-280;
					};
					class Rotation_90: Rotation_0
					{
						minAngle=90;
						maxAngle=-270;
					};
					class Rotation_100: Rotation_0
					{
						minAngle=100;
						maxAngle=-260;
					};
					class Rotation_110: Rotation_0
					{
						minAngle=110;
						maxAngle=-250;
					};
					class Rotation_120: Rotation_0
					{
						minAngle=120;
						maxAngle=-240;
					};
					class Rotation_130: Rotation_0
					{
						minAngle=130;
						maxAngle=-230;
					};
					class Rotation_140: Rotation_0
					{
						minAngle=140;
						maxAngle=-220;
					};
					class Rotation_150: Rotation_0
					{
						minAngle=150;
						maxAngle=-210;
					};
					class Rotation_160: Rotation_0
					{
						minAngle=160;
						maxAngle=-200;
					};
					class Rotation_170: Rotation_0
					{
						minAngle=170;
						maxAngle=-190;
					};
					class Rotation_180: Rotation_0
					{
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_190: Rotation_0
					{
						minAngle=190;
						maxAngle=-170;
					};
					class Rotation_200: Rotation_0
					{
						minAngle=200;
						maxAngle=-160;
					};
					class Rotation_210: Rotation_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_220: Rotation_0
					{
						minAngle=220;
						maxAngle=-140;
					};
					class Rotation_230: Rotation_0
					{
						minAngle=230;
						maxAngle=-130;
					};
					class Rotation_240: Rotation_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_250: Rotation_0
					{
						minAngle=250;
						maxAngle=-110;
					};
					class Rotation_260: Rotation_0
					{
						minAngle=260;
						maxAngle=-100;
					};
					class Rotation_270: Rotation_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_280: Rotation_0
					{
						minAngle=280;
						maxAngle=-80;
					};
					class Rotation_290: Rotation_0
					{
						minAngle=290;
						maxAngle=-70;
					};
					class Rotation_300: Rotation_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_310: Rotation_0
					{
						minAngle=310;
						maxAngle=-50;
					};
					class Rotation_320: Rotation_0
					{
						minAngle=320;
						maxAngle=-40;
					};
					class Rotation_330: Rotation_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_340: Rotation_0
					{
						minAngle=340;
						maxAngle=-20;
					};
					class Rotation_350: Rotation_0
					{
						minAngle=350;
						maxAngle=-10;
					};
					class Rotation_Inv_0: Rotation_0
					{
						min=0;
						max=360;
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_Inv_30: Rotation_Inv_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_Inv_60: Rotation_Inv_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_Inv_90: Rotation_Inv_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_Inv_120: Rotation_Inv_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_Inv_150: Rotation_Inv_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_Inv_180: Rotation_Inv_0
					{
						minAngle=360;
						maxAngle=0;
					};
					class Rotation_Inv_210: Rotation_Inv_0
					{
						minAngle=390;
						maxAngle=30;
					};
					class Rotation_Inv_240: Rotation_Inv_0
					{
						minAngle=420;
						maxAngle=60;
					};
					class Rotation_Inv_270: Rotation_Inv_0
					{
						minAngle=450;
						maxAngle=90;
					};
					class Rotation_Inv_300: Rotation_Inv_0
					{
						minAngle=480;
						maxAngle=120;
					};
					class Rotation_Inv_330: Rotation_Inv_0
					{
						minAngle=510;
						maxAngle=150;
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="user";
						sourceIndex=10;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_WP_Center
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=0.75806499;
					};
					class MovementY
					{
						source="user";
						sourceIndex=5;
						refreshRate=0.1;
						min=0;
						max=2;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,-1};
					};
					class MovementX: MovementY
					{
						sourceIndex=4;
						maxPos[]={-1,0};
						minPos[]={1,0};
					};
					class WP1_PosX: MovementX
					{
						sourceIndex=26;
					};
					class WP1_PosY: MovementY
					{
						sourceIndex=27;
					};
					class WP2_PosX: MovementX
					{
						sourceIndex=28;
					};
					class WP2_PosY: MovementY
					{
						sourceIndex=29;
					};
					class WP3_PosX: MovementX
					{
						sourceIndex=30;
					};
					class WP3_PosY: MovementY
					{
						sourceIndex=31;
					};
					class WP4_PosX: MovementX
					{
						sourceIndex=32;
					};
					class WP4_PosY: MovementY
					{
						sourceIndex=33;
					};
					class WP5_PosX: MovementX
					{
						sourceIndex=34;
					};
					class WP5_PosY: MovementY
					{
						sourceIndex=35;
					};
					class WP6_PosX: MovementX
					{
						sourceIndex=36;
					};
					class WP6_PosY: MovementY
					{
						sourceIndex=37;
					};
					class WP7_PosX: MovementX
					{
						sourceIndex=38;
					};
					class WP7_PosY: MovementY
					{
						sourceIndex=39;
					};
					class WP8_PosX: MovementX
					{
						sourceIndex=40;
					};
					class WP8_PosY: MovementY
					{
						sourceIndex=41;
					};
					class WP9_PosX: MovementX
					{
						sourceIndex=42;
					};
					class WP9_PosY: MovementY
					{
						sourceIndex=43;
					};
					class WP10_PosX: MovementX
					{
						sourceIndex=44;
					};
					class WP10_PosY: MovementY
					{
						sourceIndex=45;
					};
					class WP11_PosX: MovementX
					{
						sourceIndex=46;
					};
					class WP11_PosY: MovementY
					{
						sourceIndex=47;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user4>=1)*(user4<=1)";
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								{0,0.815},
								1
							},
							
							{
								{1,0.815},
								1
							},
							{},
							
							{
								{0,0.82499999},
								1
							},
							
							{
								{1,0.82499999},
								1
							},
							{},
							
							{
								{0.02,0.15800001},
								1
							},
							
							{
								{0.07,0.15800001},
								1
							},
							
							{
								{0.045000002,0.138},
								1
							},
							
							{
								{0.02,0.15800001},
								1
							},
							{},
							
							{
								{0.02,0.23800001},
								1
							},
							
							{
								{0.07,0.23800001},
								1
							},
							
							{
								{0.045000002,0.25799999},
								1
							},
							
							{
								{0.02,0.23800001},
								1
							},
							{}
						};
					};
					class StaticClip
					{
						clipTL[]={0,0};
						clipBR[]={1,0.815};
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									"Direction_Center",
									{0,-0.43209699},
									1
								},
								
								{
									"Direction_Center",
									{0.098952003,-0.425529},
									1
								},
								
								{
									"Direction_Center",
									{0.19494,-0.406041},
									1
								},
								
								{
									"Direction_Center",
									{0.285,-0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{0.36639601,-0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{0.43662,-0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{0.49362001,-0.216048},
									1
								},
								
								{
									"Direction_Center",
									{0.53562897,-0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{0.56133598,-0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{0.56999999,0},
									1
								},
								
								{
									"Direction_Center",
									{0.56133598,0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{0.53562897,0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{0.49362001,0.216048},
									1
								},
								
								{
									"Direction_Center",
									{0.43662,0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{0.36639601,0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{0.285,0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{0.19494,0.406041},
									1
								},
								
								{
									"Direction_Center",
									{0.098952003,0.425529},
									1
								},
								
								{
									"Direction_Center",
									{0,0.43209699},
									1
								},
								
								{
									"Direction_Center",
									{-0.098952003,0.425529},
									1
								},
								
								{
									"Direction_Center",
									{-0.19494,0.406041},
									1
								},
								
								{
									"Direction_Center",
									{-0.285,0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{-0.36639601,0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{-0.43662,0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{-0.49362001,0.216048},
									1
								},
								
								{
									"Direction_Center",
									{-0.53562897,0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{-0.56133598,0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{-0.56999999,0},
									1
								},
								
								{
									"Direction_Center",
									{-0.56133598,-0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{-0.53562897,-0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{-0.49362001,-0.216048},
									1
								},
								
								{
									"Direction_Center",
									{-0.43662,-0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{-0.36639601,-0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{-0.285,-0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{-0.19494,-0.406041},
									1
								},
								
								{
									"Direction_Center",
									{-0.098952003,-0.425529},
									1
								},
								
								{
									"Direction_Center",
									{0,-0.43209699},
									1
								},
								{}
							};
						};
						class Purple
						{
							color[]={0.11,0.02,0.12};
							alpha=0.40000001;
							class WP
							{
								condition="wpvalid";
								class Draw
								{
									points[]=
									{
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0,
												0.3075
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.022,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.014,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.014,
												0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.014,
												0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.014,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.022,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0,
												0.3075
											},
											1
										},
										{},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.0099999998,
												-0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.0099999998,
												-0.3075
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.3075
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.27000001
											},
											1
										}
									};
								};
								class WP1
								{
									condition="user26>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="1-WPIndex";
										class WaypointShape
										{
											width=16;
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.0151613},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP2
								{
									condition="user28>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=1)*(WPIndex<=1)";
										class WaypointShape
										{
											width=16;
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP1_PosX",
												1,
												"WP1_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP3
								{
									condition="user30>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=2)*(WPIndex<=2)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP4
								{
									condition="user32>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=3)*(WPIndex<=3)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP5
								{
									condition="user34>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=4)*(WPIndex<=4)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP6
								{
									condition="user36>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=5)*(WPIndex<=5)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP7
								{
									condition="user38>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=6)*(WPIndex<=6)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP8
								{
									condition="user40>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=7)*(WPIndex<=7)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP9
								{
									condition="user42>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=8)*(WPIndex<=8)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP10
								{
									condition="user44>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=9)*(WPIndex<=9)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP10_PosX",
												1,
												"WP10_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class CustomWP
								{
									condition="user46>=0";
									color[]={1,0.5,0};
									alpha=0.5;
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.0151613},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
							};
						};
					};
					class BtnIND
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.95999998},
							1
						};
						right[]=
						{
							{0.23999999,0.95999998},
							1
						};
						down[]=
						{
							{0.20999999,0.98500001},
							1
						};
					};
					class BtnSWAP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.95999998},
							1
						};
						right[]=
						{
							{0.49000001,0.95999998},
							1
						};
						down[]=
						{
							{0.46000001,0.98500001},
							1
						};
					};
					class BtnSMS
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.60000002,0.95999998},
							1
						};
						right[]=
						{
							{0.63,0.95999998},
							1
						};
						down[]=
						{
							{0.60000002,0.98500001},
							1
						};
					};
					class BtnDCLT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.95999998},
							1
						};
						right[]=
						{
							{0.75,0.95999998},
							1
						};
						down[]=
						{
							{0.72000003,0.98500001},
							1
						};
					};
					class BtnDEL1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.41800001},
							1
						};
						right[]=
						{
							{0.033,0.41800001},
							1
						};
						down[]=
						{
							{0.0099999998,0.435},
							1
						};
					};
					class BtnDEL2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.44},
							1
						};
						right[]=
						{
							{0.033,0.44},
							1
						};
						down[]=
						{
							{0.0099999998,0.45699999},
							1
						};
					};
					class BtnDEL3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.46200001},
							1
						};
						right[]=
						{
							{0.033,0.46200001},
							1
						};
						down[]=
						{
							{0.0099999998,0.479},
							1
						};
					};
					class BtnADHSI
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.345},
							1
						};
						right[]=
						{
							{0.033,0.345},
							1
						};
						down[]=
						{
							{0.0099999998,0.36199999},
							1
						};
					};
					class MapScale
					{
						source="user";
						sourceIndex=9;
						sourceScale=1;
						sourceLength=2;
						align="right";
						scale=1;
						pos[]=
						{
							{0.02,0.185},
							1
						};
						right[]=
						{
							{0.050000001,0.185},
							1
						};
						down[]=
						{
							{0.02,0.20999999},
							1
						};
					};
					class BtnAnm1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.41800001},
							1
						};
						right[]=
						{
							{1.013,0.41800001},
							1
						};
						down[]=
						{
							{0.99000001,0.435},
							1
						};
					};
					class BtnAnm2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.44},
							1
						};
						right[]=
						{
							{1.013,0.44},
							1
						};
						down[]=
						{
							{0.99000001,0.45699999},
							1
						};
					};
					class BtnAnm3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.46200001},
							1
						};
						right[]=
						{
							{1.013,0.46200001},
							1
						};
						down[]=
						{
							{0.99000001,0.479},
							1
						};
					};
					class BtnRout1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.51200002},
							1
						};
						right[]=
						{
							{1.013,0.51200002},
							1
						};
						down[]=
						{
							{0.99000001,0.52899998},
							1
						};
					};
					class BtnRout2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.53399998},
							1
						};
						right[]=
						{
							{1.013,0.53399998},
							1
						};
						down[]=
						{
							{0.99000001,0.551},
							1
						};
					};
					class BtnRout3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.55599999},
							1
						};
						right[]=
						{
							{1.013,0.55599999},
							1
						};
						down[]=
						{
							{0.99000001,0.57300001},
							1
						};
					};
					class BtnRout4
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.57800001},
							1
						};
						right[]=
						{
							{1.013,0.57800001},
							1
						};
						down[]=
						{
							{0.99000001,0.59500003},
							1
						};
					};
					class BtnSym1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.32100001},
							1
						};
						right[]=
						{
							{1.013,0.32100001},
							1
						};
						down[]=
						{
							{0.99000001,0.338},
							1
						};
					};
					class BtnSym2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.34299999},
							1
						};
						right[]=
						{
							{1.013,0.34299999},
							1
						};
						down[]=
						{
							{0.99000001,0.36000001},
							1
						};
					};
					class BtnSym3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.36500001},
							1
						};
						right[]=
						{
							{1.013,0.36500001},
							1
						};
						down[]=
						{
							{0.99000001,0.382},
							1
						};
					};
					class BtnDep1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.121},
							1
						};
						right[]=
						{
							{1.013,0.121},
							1
						};
						down[]=
						{
							{0.99000001,0.138},
							1
						};
					};
					class BtnDep2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.14300001},
							1
						};
						right[]=
						{
							{1.013,0.14300001},
							1
						};
						down[]=
						{
							{0.99000001,0.16},
							1
						};
					};
					class BtnDep3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.16500001},
							1
						};
						right[]=
						{
							{1.013,0.16500001},
							1
						};
						down[]=
						{
							{0.99000001,0.182},
							1
						};
					};
					class BtnClrStrm1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92000002,0.63800001},
							1
						};
						right[]=
						{
							{0.94300002,0.63800001},
							1
						};
						down[]=
						{
							{0.92000002,0.65499997},
							1
						};
					};
					class BtnClrStrm2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92000002,0.66000003},
							1
						};
						right[]=
						{
							{0.94300002,0.66000003},
							1
						};
						down[]=
						{
							{0.92000002,0.67699999},
							1
						};
					};
					class BtnClrMan1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.245,0.015},
							1
						};
						right[]=
						{
							{0.26800001,0.015},
							1
						};
						down[]=
						{
							{0.245,0.032000002},
							1
						};
					};
					class BtnClrRoute1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.76999998,0.015},
							1
						};
						right[]=
						{
							{0.79299998,0.015},
							1
						};
						down[]=
						{
							{0.76999998,0.032000002},
							1
						};
					};
					class WPIndex
					{
						source="wpIndex";
						sourceScale=1;
						sourceLength=2;
						align="right";
						scale=1;
						pos[]=
						{
							{0.72000003,0.039999999},
							1
						};
						right[]=
						{
							{0.74299997,0.039999999},
							1
						};
						down[]=
						{
							{0.72000003,0.057},
							1
						};
					};
					class BtnClrRoute2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.76800001,0.039999999},
							1
						};
						right[]=
						{
							{0.79100001,0.039999999},
							1
						};
						down[]=
						{
							{0.76800001,0.057},
							1
						};
					};
					class WPTotal
					{
						source="user";
						sourceIndex=12;
						sourceScale=1;
						sourceLength=2;
						align="right";
						scale=1;
						pos[]=
						{
							{0.77999997,0.039999999},
							1
						};
						right[]=
						{
							{0.80299997,0.039999999},
							1
						};
						down[]=
						{
							{0.77999997,0.057},
							1
						};
					};
					class WPdist
					{
						source="wpdist";
						sourceScale=0.001;
						sourcePrecision=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.31999999,0.85000002},
							1
						};
						right[]=
						{
							{0.34200001,0.85000002},
							1
						};
						down[]=
						{
							{0.31999999,0.86699998},
							1
						};
					};
					class WPDirection
					{
						refreshRate=0.2;
						source="user";
						sourceIndex=10;
						sourceScale=1;
						sourceLength=2;
						align="left";
						scale=1;
						pos[]=
						{
							
							{
								"0.32-0.015",
								"0.85+0.02*1"
							},
							1
						};
						right[]=
						{
							
							{
								0.32699999,
								"0.85+0.02*1"
							},
							1
						};
						down[]=
						{
							
							{
								"0.32-0.015",
								0.88700002
							},
							1
						};
					};
					class WPDirectionDeg
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.31999999,0.86699998},
							1
						};
						right[]=
						{
							{0.33700001,0.86699998},
							1
						};
						down[]=
						{
							{0.31999999,0.88},
							1
						};
					};
					class WPDirectionRelative: WPDirection
					{
						sourceIndex=11;
						sourceScale=1;
						sourceLength=4;
						sourcePrecision=1;
						pos[]=
						{
							
							{
								0.31999999,
								"0.85+0.02*2"
							},
							1
						};
						right[]=
						{
							
							{
								0.34200001,
								"0.85+0.02*2"
							},
							1
						};
						down[]=
						{
							{0.31999999,0.90700001},
							1
						};
					};
					class TxtTq1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.85000002},
							1
						};
						right[]=
						{
							{0.74199998,0.85000002},
							1
						};
						down[]=
						{
							{0.72000003,0.86699998},
							1
						};
					};
					class TxtTq2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.72+0.13",
								0.85000002
							},
							1
						};
						right[]=
						{
							{0.87199998,0.85000002},
							1
						};
						down[]=
						{
							
							{
								"0.72+0.13",
								0.86699998
							},
							1
						};
					};
					class TQVal
					{
						source="throttle";
						scale=1;
						sourceScale=100;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="left";
						pos[]=
						{
							
							{
								"0.72+0.13",
								0.85000002
							},
							1
						};
						right[]=
						{
							{0.87199998,0.85000002},
							1
						};
						down[]=
						{
							
							{
								"0.72+0.13",
								0.86699998
							},
							1
						};
					};
					class TxtT51
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.87},
							1
						};
						right[]=
						{
							{0.74199998,0.87},
							1
						};
						down[]=
						{
							{0.72000003,0.88700002},
							1
						};
					};
					class TxtT52
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.72+0.13",
								0.86500001
							},
							1
						};
						right[]=
						{
							{0.87,0.86500001},
							1
						};
						down[]=
						{
							
							{
								"0.72+0.13",
								0.88
							},
							1
						};
					};
					class T5Val
					{
						source="rpm";
						scale=1;
						sourceScale=760;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="left";
						pos[]=
						{
							
							{
								"0.72+0.13",
								0.87
							},
							1
						};
						right[]=
						{
							{0.87199998,0.87},
							1
						};
						down[]=
						{
							
							{
								"0.72+0.13",
								0.88700002
							},
							1
						};
					};
					class GreenPolygon
					{
						points[]=
						{
							
							{
								
								{
									{0.31,0.94999999},
									1
								},
								
								{
									{0.44999999,0.94999999},
									1
								},
								
								{
									{0.44999999,1},
									1
								},
								
								{
									{0.31,1},
									1
								}
							}
						};
					};
					class BlackText
					{
						color[]={0,0,0};
						alpha=1;
						class BtnEICAS1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.34,0.95999998},
								1
							};
							right[]=
							{
								{0.37,0.95999998},
								1
							};
							down[]=
							{
								{0.34,0.98500001},
								1
							};
						};
						class BtnEICAS2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.34,0.95999998},
								1
							};
							right[]=
							{
								{0.37,0.95999998},
								1
							};
							down[]=
							{
								{0.34,0.98500001},
								1
							};
						};
						class BtnEICAS3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.34,0.95999998},
								1
							};
							right[]=
							{
								{0.37,0.95999998},
								1
							};
							down[]=
							{
								{0.34,0.98500001},
								1
							};
						};
					};
					class White
					{
						color[]={1,1,1};
						alpha=0.40000001;
						class Static_3
						{
							width=3;
							points[]=
							{
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_10",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_10",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_20",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_20",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_40",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_40",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_50",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_50",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_70",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_70",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_80",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_80",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_100",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_100",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_110",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_110",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_130",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_130",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_140",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_140",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_160",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_160",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_170",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_170",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_190",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_190",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_200",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_200",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_220",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_220",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_230",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_230",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_250",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_250",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_260",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_260",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_280",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_280",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_290",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_290",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_310",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_310",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_320",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_320",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_340",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_340",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_350",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_350",
										0,
										0.22499999
									},
									1
								},
								{},
								{}
							};
						};
						class DrawPolygon
						{
							points[]=
							{
								
								{
									
									{
										"Direction_Center",
										{0,-0.029999999},
										1
									},
									
									{
										"Direction_Center",
										{0.0080000004,-0.029999999},
										1
									},
									
									{
										"Direction_Center",
										{0.0080000004,0.02},
										1
									},
									
									{
										"Direction_Center",
										{0,0.02},
										1
									}
								},
								
								{
									
									{
										"Direction_Center",
										{-0.0275,-0.02},
										1
									},
									
									{
										"Direction_Center",
										{0.037500001,-0.02},
										1
									},
									
									{
										"Direction_Center",
										{0.037500001,-0.012},
										1
									},
									
									{
										"Direction_Center",
										{-0.0275,-0.012},
										1
									}
								},
								
								{
									
									{
										"Direction_Center",
										{-0.0099999998,0.0049999999},
										1
									},
									
									{
										"Direction_Center",
										{0.02,0.0049999999},
										1
									},
									
									{
										"Direction_Center",
										{0.02,0.0099999998},
										1
									},
									
									{
										"Direction_Center",
										{-0.0099999998,0.0099999998},
										1
									}
								}
							};
						};
						class Rotation_0_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_0",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_0",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_0",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_30_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_30",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_30",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_30",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_60_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_60",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_60",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_60",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_90_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_90",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_90",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_90",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_120_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_120",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_120",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_120",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_150_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_150",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_150",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_150",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_180_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_180",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_180",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_180",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_210_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_210",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_210",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_210",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_240_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_240",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_240",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_240",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_270_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_270",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_270",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_270",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_300_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_300",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_300",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_300",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_330_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_330",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_330",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_330",
									0,
									-0.235
								},
								1
							};
						};
					};
				};
			};
			class MFD_Left_Weapons
			{
				topLeft="HUD_2_Top_Left";
				topRight="HUD_2_Top_Right";
				bottomLeft="HUD_2_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-2};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user4>=2)*(user4<=2)";
					class BtnIND
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.95999998},
							1
						};
						right[]=
						{
							{0.23999999,0.95999998},
							1
						};
						down[]=
						{
							{0.20999999,0.98500001},
							1
						};
					};
					class BtnSWAP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.95999998},
							1
						};
						right[]=
						{
							{0.49000001,0.95999998},
							1
						};
						down[]=
						{
							{0.46000001,0.98500001},
							1
						};
					};
					class BtnHSD
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.34,0.95999998},
							1
						};
						right[]=
						{
							{0.37,0.95999998},
							1
						};
						down[]=
						{
							{0.34,0.98500001},
							1
						};
					};
					class BtnDCLT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.95999998},
							1
						};
						right[]=
						{
							{0.75,0.95999998},
							1
						};
						down[]=
						{
							{0.72000003,0.98500001},
							1
						};
					};
					class BtnGun
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.029999999},
							1
						};
						right[]=
						{
							{0.23999999,0.029999999},
							1
						};
						down[]=
						{
							{0.20999999,0.055},
							1
						};
					};
					class BtnTGP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.029999999},
							1
						};
						right[]=
						{
							{0.49000001,0.029999999},
							1
						};
						down[]=
						{
							{0.46000001,0.055},
							1
						};
					};
					class BtnCode
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.029999999},
							1
						};
						right[]=
						{
							{0.75,0.029999999},
							1
						};
						down[]=
						{
							{0.72000003,0.055},
							1
						};
					};
					class PylonText1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.75999999},
							1
						};
						right[]=
						{
							{0.54500002,0.75999999},
							1
						};
						down[]=
						{
							{0.5,0.80000001},
							1
						};
					};
					class WeaponText
					{
						source="weapon";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.81999999},
							1
						};
						right[]=
						{
							{0.54500002,0.81999999},
							1
						};
						down[]=
						{
							{0.5,0.86000001},
							1
						};
					};
					class AmmoText
					{
						source="ammo";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.88999999},
							1
						};
						right[]=
						{
							{0.54500002,0.88999999},
							1
						};
						down[]=
						{
							{0.5,0.93000001},
							1
						};
					};
					class Static
					{
						width=12;
						points[]=
						{
							
							{
								{0.205,0.15000001},
								1
							},
							
							{
								{0.34999999,0.15000001},
								1
							},
							
							{
								{0.5,0.34999999},
								1
							},
							{},
							
							{
								{0.205,0.25},
								1
							},
							
							{
								{0.30000001,0.25},
								1
							},
							
							{
								{0.40000001,0.34999999},
								1
							},
							{},
							
							{
								{0.205,0.55000001},
								1
							},
							
							{
								{0.22,0.55000001},
								1
							},
							
							{
								{0.28,0.34999999},
								1
							},
							{},
							
							{
								{0.80000001,0.55000001},
								1
							},
							
							{
								{0.77999997,0.55000001},
								1
							},
							
							{
								{0.72000003,0.34999999},
								1
							},
							{},
							
							{
								{0.80000001,0.25},
								1
							},
							
							{
								{0.69999999,0.25},
								1
							},
							
							{
								{0.60000002,0.34999999},
								1
							},
							{},
							
							{
								{0.50562501,0.69062501},
								1
							},
							
							{
								{0.51539099,0.671094},
								1
							},
							
							{
								{0.63062501,0.66132802},
								1
							},
							
							{
								{0.63062501,0.624219},
								1
							},
							
							{
								{0.52710903,0.60273403},
								1
							},
							
							{
								{0.52125001,0.57539099},
								1
							},
							
							{
								{0.53101599,0.41328099},
								1
							},
							
							{
								{0.79468799,0.36250001},
								1
							},
							
							{
								{0.79468799,0.30781299},
								1
							},
							
							{
								{0.53101599,0.29414099},
								1
							},
							
							{
								{0.52515602,0.18867201},
								1
							},
							
							{
								{0.52125001,0.149609},
								1
							},
							
							{
								{0.51539099,0.133984},
								1
							},
							
							{
								{0.50562501,0.124219},
								1
							},
							
							{
								{0.495859,0.133984},
								1
							},
							
							{
								{0.49000001,0.149609},
								1
							},
							
							{
								{0.48414099,0.18867201},
								1
							},
							
							{
								{0.47828099,0.29414099},
								1
							},
							
							{
								{0.216562,0.30781299},
								1
							},
							
							{
								{0.216562,0.36250001},
								1
							},
							
							{
								{0.480234,0.41328099},
								1
							},
							
							{
								{0.49000001,0.57539099},
								1
							},
							
							{
								{0.48414099,0.60273403},
								1
							},
							
							{
								{0.38062501,0.624219},
								1
							},
							
							{
								{0.38062501,0.66132802},
								1
							},
							
							{
								{0.495859,0.671094},
								1
							},
							
							{
								{0.50562501,0.69062501},
								1
							}
						};
					};
					class Static_3
					{
						width=3;
						points[]=
						{
							
							{
								{0.02,0.11},
								1
							},
							
							{
								{0.205,0.11},
								1
							},
							
							{
								{0.205,0.19},
								1
							},
							
							{
								{0.02,0.19},
								1
							},
							
							{
								{0.02,0.11},
								1
							},
							{},
							
							{
								{0.02,0.20999999},
								1
							},
							
							{
								{0.205,0.20999999},
								1
							},
							
							{
								{0.205,0.28999999},
								1
							},
							
							{
								{0.02,0.28999999},
								1
							},
							
							{
								{0.02,0.20999999},
								1
							},
							{},
							
							{
								{0.02,0.50999999},
								1
							},
							
							{
								{0.205,0.50999999},
								1
							},
							
							{
								{0.205,0.58999997},
								1
							},
							
							{
								{0.02,0.58999997},
								1
							},
							
							{
								{0.02,0.50999999},
								1
							},
							{},
							
							{
								{0.80000001,0.50999999},
								1
							},
							
							{
								{0.98500001,0.50999999},
								1
							},
							
							{
								{0.98500001,0.58999997},
								1
							},
							
							{
								{0.80000001,0.58999997},
								1
							},
							
							{
								{0.80000001,0.50999999},
								1
							},
							{},
							
							{
								{0.80000001,0.20999999},
								1
							},
							
							{
								{0.98500001,0.20999999},
								1
							},
							
							{
								{0.98500001,0.28999999},
								1
							},
							
							{
								{0.80000001,0.28999999},
								1
							},
							
							{
								{0.80000001,0.20999999},
								1
							},
							{},
							
							{
								{0.68000001,0.11},
								1
							},
							
							{
								{0.99000001,0.11},
								1
							},
							
							{
								{0.99000001,0.19},
								1
							},
							
							{
								{0.68000001,0.19},
								1
							},
							
							{
								{0.68000001,0.11},
								1
							},
							{},
							
							{
								{0,0.71499997},
								1
							},
							
							{
								{1,0.71499997},
								1
							},
							{},
							
							{
								{0,0.72500002},
								1
							},
							
							{
								{1,0.72500002},
								1
							},
							{}
						};
					};
					class White
					{
						color[]={1,1,1};
						alpha=0.5;
						class Static_3
						{
							width=6;
							points[]={};
						};
					};
					class GreenPolygon
					{
						points[]=
						{
							
							{
								
								{
									{0.57499999,0.94999999},
									1
								},
								
								{
									{0.69999999,0.94999999},
									1
								},
								
								{
									{0.69999999,1},
									1
								},
								
								{
									{0.57499999,1},
									1
								}
							}
						};
					};
					class BlackText
					{
						color[]={0,0,0};
						alpha=1;
						class BtnSMS1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.60000002,0.95999998},
								1
							};
							right[]=
							{
								{0.63,0.95999998},
								1
							};
							down[]=
							{
								{0.60000002,0.98500001},
								1
							};
						};
						class BtnSMS2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.60000002,0.95999998},
								1
							};
							right[]=
							{
								{0.63,0.95999998},
								1
							};
							down[]=
							{
								{0.60000002,0.98500001},
								1
							};
						};
						class BtnSMS3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.60000002,0.95999998},
								1
							};
							right[]=
							{
								{0.63,0.95999998},
								1
							};
							down[]=
							{
								{0.60000002,0.98500001},
								1
							};
						};
					};
					class Pylon1
					{
						pos[]=
						{
							{0.27000001,0.34999999},
							1
						};
						pylon=1;
						name="RHS_A29_Weap_MFD";
					};
					class Pylon2: Pylon1
					{
						pos[]=
						{
							{0.40000001,0.34999999},
							1
						};
						pylon=2;
					};
					class Pylon3: Pylon1
					{
						pos[]=
						{
							{0.5,0.34999999},
							1
						};
						pylon=3;
					};
					class Pylon4: Pylon1
					{
						pos[]=
						{
							{0.60000002,0.34999999},
							1
						};
						pylon=4;
					};
					class Pylon5: Pylon1
					{
						pos[]=
						{
							{0.73000002,0.34999999},
							1
						};
						pylon=5;
					};
					class Pylon1_Text
					{
						pos[]=
						{
							{0.029999999,0.5},
							1
						};
						pylon=1;
						name="RHS_A29_Weap_MFD_Inventory";
					};
					class Pylon2_Text: Pylon1_Text
					{
						pos[]=
						{
							{0.029999999,0.2},
							1
						};
						pylon=2;
					};
					class Pylon3_Text: Pylon1_Text
					{
						pos[]=
						{
							{0.029999999,0.1},
							1
						};
						pylon=3;
					};
					class Pylon4_Text: Pylon1_Text
					{
						pos[]=
						{
							{0.81,0.2},
							1
						};
						pylon=4;
					};
					class Pylon5_Text: Pylon1_Text
					{
						pos[]=
						{
							{0.81,0.5},
							1
						};
						pylon=5;
					};
				};
			};
			class MFD_Left_Weapons2
			{
				topLeft="HUD_2_Top_Left";
				topRight="HUD_2_Top_Right";
				bottomLeft="HUD_2_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-1};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user4>=2)*(user4<=2)";
					class Gatling_Ammo
					{
						source="ammo";
						sourceIndex=1;
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.25,0.059999999},
							1
						};
						right[]=
						{
							{0.28,0.059999999},
							1
						};
						down[]=
						{
							{0.25,0.085000001},
							1
						};
					};
					class CM_Name
					{
						source="CMWeapon";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.98000002,0.125},
							1
						};
						right[]=
						{
							{1.01,0.125},
							1
						};
						down[]=
						{
							{0.98000002,0.15000001},
							1
						};
					};
					class CM_Ammo
					{
						source="CMAmmo";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.98000002,0.155},
							1
						};
						right[]=
						{
							{1.01,0.155},
							1
						};
						down[]=
						{
							{0.98000002,0.18000001},
							1
						};
					};
				};
			};
			class MFD_Left_FLIR
			{
				topLeft="HUD_2_Top_Left";
				topRight="HUD_2_Top_Right";
				bottomLeft="HUD_2_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={0};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Turret_Center
					{
						pos[]={0.67000002,0.875};
					};
					class Cross_Center
					{
						pos[]={0.5,0.44999999};
					};
					class TurretRotation
					{
						source="weaponHeading";
						sourceIndex=0;
						min=-180;
						max=180;
						minAngle=0;
						maxAngle=360;
						sourceOffset=-180;
						aspectRatio=0.75806499;
					};
					class TurretHorizontal
					{
						source="weaponHeading";
						min=0;
						max=180;
						sourceScale=1;
						maxPos[]=
						{
							"-0.364*0",
							0
						};
						minPos[]=
						{
							"+0.364*1",
							0
						};
					};
					class TurretHorizontal2: TurretHorizontal
					{
						min=180;
						max=360;
						maxPos[]={0,0};
						minPos[]=
						{
							"+0.364*1",
							0
						};
					};
					class TurretHorizontal3: TurretHorizontal
					{
						min=179.99001;
						max=180;
						maxPos[]={0,0};
						minPos[]=
						{
							"-0.364*2",
							0
						};
					};
					class TurretVertical: TurretHorizontal
					{
						source="user";
						sourceIndex=23;
						sourceOffset=0;
						min=-90;
						max=30;
						maxPos[]={0,0.296};
						minPos[]={0,0};
					};
					class Wind_Center_Rotate
					{
						source="windage";
						sourceScale=1;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=360;
						aspectRatio=0.75806499;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user4>=3)*(user4<=3)";
					class BtnIND
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.95999998},
							1
						};
						right[]=
						{
							{0.23999999,0.95999998},
							1
						};
						down[]=
						{
							{0.20999999,0.98500001},
							1
						};
					};
					class BtnSWAP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.95999998},
							1
						};
						right[]=
						{
							{0.49000001,0.95999998},
							1
						};
						down[]=
						{
							{0.46000001,0.98500001},
							1
						};
					};
					class BtnHSD
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.60000002,0.95999998},
							1
						};
						right[]=
						{
							{0.63,0.95999998},
							1
						};
						down[]=
						{
							{0.60000002,0.98500001},
							1
						};
					};
					class BtnDCLT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.95999998},
							1
						};
						right[]=
						{
							{0.75,0.95999998},
							1
						};
						down[]=
						{
							{0.72000003,0.98500001},
							1
						};
					};
					class BtnSTOW
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.83999997},
							1
						};
						right[]=
						{
							{0.037,0.83999997},
							1
						};
						down[]=
						{
							{0.0099999998,0.86000001},
							1
						};
					};
					class TxtTarget
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.22,0.81},
							1
						};
						right[]=
						{
							{0.24699999,0.81},
							1
						};
						down[]=
						{
							{0.22,0.82999998},
							1
						};
					};
					class TxtTargetDist
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.2,0.85000002},
							1
						};
						right[]=
						{
							{0.227,0.85000002},
							1
						};
						down[]=
						{
							{0.2,0.87},
							1
						};
					};
					class TargetDist
					{
						source="laserDist";
						scale=1;
						sourceScale=1;
						sourcePrecision=0;
						sourceLength=4;
						sourceOffset=0;
						align="right";
						pos[]=
						{
							{0.28999999,0.85000002},
							1
						};
						right[]=
						{
							{0.317,0.85000002},
							1
						};
						down[]=
						{
							{0.28999999,0.87},
							1
						};
					};
					class BtnGAINLVL1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.0099999998},
							1
						};
						right[]=
						{
							{0.237,0.0099999998},
							1
						};
						down[]=
						{
							{0.20999999,0.029999999},
							1
						};
					};
					class BtnGAINLVL2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.039999999},
							1
						};
						right[]=
						{
							{0.237,0.039999999},
							1
						};
						down[]=
						{
							{0.20999999,0.059999999},
							1
						};
					};
					class BtnBRT1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.34,0.0099999998},
							1
						};
						right[]=
						{
							{0.36700001,0.0099999998},
							1
						};
						down[]=
						{
							{0.34,0.029999999},
							1
						};
					};
					class BtnBRT2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.34,0.039999999},
							1
						};
						right[]=
						{
							{0.36700001,0.039999999},
							1
						};
						down[]=
						{
							{0.34,0.059999999},
							1
						};
					};
					class BtnWHT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.0099999998},
							1
						};
						right[]=
						{
							{0.48699999,0.0099999998},
							1
						};
						down[]=
						{
							{0.46000001,0.029999999},
							1
						};
					};
					class BtnCOMP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.60000002,0.0099999998},
							1
						};
						right[]=
						{
							{0.62699997,0.0099999998},
							1
						};
						down[]=
						{
							{0.60000002,0.029999999},
							1
						};
					};
					class BtnMENU
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.0099999998},
							1
						};
						right[]=
						{
							{0.74699998,0.0099999998},
							1
						};
						down[]=
						{
							{0.72000003,0.029999999},
							1
						};
					};
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								"Turret_Center",
								{0,-0.037903201},
								1
							},
							
							{
								"Turret_Center",
								{0,-0.0606452},
								1
							},
							{},
							
							{
								"Turret_Center",
								{0.050000001,1.6568e-009},
								1
							},
							
							{
								"Turret_Center",
								{0.079999998,2.65088e-009},
								1
							},
							{},
							
							{
								"Turret_Center",
								{-4.3711399e-009,0.037903201},
								1
							},
							
							{
								"Turret_Center",
								{-6.9938202e-009,0.0606452},
								1
							},
							{},
							
							{
								"Turret_Center",
								{-0.050000001,-4.51991e-010},
								1
							},
							
							{
								"Turret_Center",
								{-0.079999998,-7.2318601e-010},
								1
							},
							{}
						};
					};
					class White
					{
						color[]={1,1,1};
						alpha=0.60000002;
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										
										{
											"TurretRotation",
											-0.0049999999,
											0
										},
										1
									},
									
									{
										
										{
											"TurretRotation",
											0.0049999999,
											0
										},
										1
									},
									
									{
										
										{
											"TurretRotation",
											0.0049999999,
											0.050000001
										},
										1
									},
									
									{
										
										{
											"TurretRotation",
											-0.0049999999,
											0.050000001
										},
										1
									}
								},
								
								{
									
									{
										
										{
											"TurretRotation",
											-0.0099999998,
											0.050000001
										},
										1
									},
									
									{
										
										{
											"TurretRotation",
											0,
											0.07
										},
										1
									},
									
									{
										
										{
											"TurretRotation",
											0.0099999998,
											0.050000001
										},
										1
									}
								},
								
								{
									
									{
										"TurretHorizontal",
										1,
										"TurretHorizontal2",
										1,
										"TurretHorizontal3",
										1,
										{0.49000001,0.63999999},
										1
									},
									
									{
										"TurretHorizontal",
										1,
										"TurretHorizontal2",
										1,
										"TurretHorizontal3",
										1,
										{0.5,0.65499997},
										1
									},
									
									{
										"TurretHorizontal",
										1,
										"TurretHorizontal2",
										1,
										"TurretHorizontal3",
										1,
										{0.50999999,0.63999999},
										1
									}
								},
								
								{
									
									{
										"TurretVertical",
										1,
										{0.1,0.242},
										1
									},
									
									{
										"TurretVertical",
										1,
										{0.085000001,0.25},
										1
									},
									
									{
										"TurretVertical",
										1,
										{0.1,0.25799999},
										1
									}
								}
							};
						};
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									
									{
										0.059999999,
										"0.25+0.074*0"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*0"
									},
									1
								},
								{},
								
								{
									
									{
										0.059999999,
										"0.25+0.074*1"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*1"
									},
									1
								},
								{},
								
								{
									
									{
										0.059999999,
										"0.25+0.074*2"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*2"
									},
									1
								},
								{},
								
								{
									
									{
										0.059999999,
										"0.25+0.074*3"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*3"
									},
									1
								},
								{},
								
								{
									
									{
										0.059999999,
										"0.25+0.074*4"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*4"
									},
									1
								},
								{},
								
								{
									
									{
										0.07,
										"0.25+0.074*0.5"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*0.5"
									},
									1
								},
								{},
								
								{
									
									{
										0.07,
										"0.25+0.074*1.5"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*1.5"
									},
									1
								},
								{},
								
								{
									
									{
										0.07,
										"0.25+0.074*2.5"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*2.5"
									},
									1
								},
								{},
								
								{
									
									{
										0.07,
										"0.25+0.074*3.5"
									},
									1
								},
								
								{
									
									{
										0.079999998,
										"0.25+0.074*3.5"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.091*0",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5+0.091*0",
										"0.66+0.02"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.091*1",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5+0.091*1",
										"0.66+0.01"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.091*2",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5+0.091*2",
										"0.66+0.02"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.091*3",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5+0.091*3",
										"0.66+0.01"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.091*4",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5+0.091*4",
										"0.66+0.02"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5-0.091*1",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5-0.091*1",
										"0.66+0.01"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5-0.091*2",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5-0.091*2",
										"0.66+0.02"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5-0.091*3",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5-0.091*3",
										"0.66+0.01"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5-0.091*4",
										0.66000003
									},
									1
								},
								
								{
									
									{
										"0.5-0.091*4",
										"0.66+0.02"
									},
									1
								},
								{}
							};
						};
						class LeftDeg1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.050000001,0.245},
								1
							};
							right[]=
							{
								{0.068000004,0.245},
								1
							};
							down[]=
							{
								{0.050000001,0.259},
								1
							};
						};
						class LeftDeg2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.050000001,0.31900001},
								1
							};
							right[]=
							{
								{0.068000004,0.31900001},
								1
							};
							down[]=
							{
								{0.050000001,0.333},
								1
							};
						};
						class LeftDeg3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.050000001,0.39300001},
								1
							};
							right[]=
							{
								{0.068000004,0.39300001},
								1
							};
							down[]=
							{
								{0.050000001,0.40700001},
								1
							};
						};
						class LeftDeg4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.050000001,0.46700001},
								1
							};
							right[]=
							{
								{0.068000004,0.46700001},
								1
							};
							down[]=
							{
								{0.050000001,0.48100001},
								1
							};
						};
						class LeftDeg5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.050000001,0.54100001},
								1
							};
							right[]=
							{
								{0.068000004,0.54100001},
								1
							};
							down[]=
							{
								{0.050000001,0.55500001},
								1
							};
						};
						class BottomDeg1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.498+0.182*0",
									0.685
								},
								1
							};
							right[]=
							{
								{0.51599997,0.685},
								1
							};
							down[]=
							{
								
								{
									"0.498+0.182*0",
									0.699
								},
								1
							};
						};
						class BottomDeg2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.498+0.182*1",
									0.685
								},
								1
							};
							right[]=
							{
								{0.69800001,0.685},
								1
							};
							down[]=
							{
								
								{
									"0.498+0.182*1",
									0.699
								},
								1
							};
						};
						class BottomDeg3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.498+0.182*2",
									0.685
								},
								1
							};
							right[]=
							{
								{0.88,0.685},
								1
							};
							down[]=
							{
								
								{
									"0.498+0.182*2",
									0.699
								},
								1
							};
						};
						class BottomDeg4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.498-0.182*1",
									0.685
								},
								1
							};
							right[]=
							{
								{0.33399999,0.685},
								1
							};
							down[]=
							{
								
								{
									"0.498-0.182*1",
									0.699
								},
								1
							};
						};
						class BottomDeg5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.498-0.182*2",
									0.685
								},
								1
							};
							right[]=
							{
								{0.152,0.685},
								1
							};
							down[]=
							{
								
								{
									"0.498-0.182*2",
									0.699
								},
								1
							};
						};
					};
					class TestString
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.2,0.30000001},
							1
						};
						right[]=
						{
							{0.23999999,0.30000001},
							1
						};
						down[]=
						{
							{0.2,0.34},
							1
						};
					};
					class Black
					{
						color[]={0,0,0};
						class CameraMode
						{
							source="userText";
							sourceIndex=0;
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.89999998,0.2},
								1
							};
							right[]=
							{
								{0.93000001,0.2},
								1
							};
							down[]=
							{
								{0.89999998,0.22499999},
								1
							};
						};
						class ZoomLevel
						{
							source="user";
							sourceIndex=24;
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.87,0.23999999},
								1
							};
							right[]=
							{
								{0.89999998,0.23999999},
								1
							};
							down[]=
							{
								{0.87,0.26499999},
								1
							};
						};
						class ZoomLevelStatic
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.89999998,0.23999999},
								1
							};
							right[]=
							{
								{0.93000001,0.23999999},
								1
							};
							down[]=
							{
								{0.89999998,0.26499999},
								1
							};
						};
						class Static
						{
							points[]=
							{
								
								{
									{0.5,0.13500001},
									1
								},
								
								{
									{0.5,0.155},
									1
								},
								{},
								
								{
									"Cross_Center",
									{0,-0.083387099},
									1
								},
								
								{
									"Cross_Center",
									{0,-0.037903201},
									1
								},
								{},
								
								{
									"Cross_Center",
									{0,0.037903201},
									1
								},
								
								{
									"Cross_Center",
									{0,0.083387099},
									1
								},
								{},
								
								{
									"Cross_Center",
									{-0.11,0},
									1
								},
								
								{
									"Cross_Center",
									{-0.050000001,0},
									1
								},
								{},
								
								{
									"Cross_Center",
									{0.050000001,0},
									1
								},
								
								{
									"Cross_Center",
									{0.11,0},
									1
								},
								{}
							};
						};
						class HeadingText1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.46000001,0.16},
								1
							};
							right[]=
							{
								{0.47999999,0.16},
								1
							};
							down[]=
							{
								{0.46000001,0.177},
								1
							};
						};
						class HeadingText2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.56,0.16},
								1
							};
							right[]=
							{
								{0.57999998,0.16},
								1
							};
							down[]=
							{
								{0.56,0.177},
								1
							};
						};
						class HeadingVal
						{
							source="heading";
							scale=1;
							sourceScale=1;
							sourcePrecision=0;
							sourceLength=3;
							sourceOffset=0;
							align="center";
							pos[]=
							{
								{0.51999998,0.16},
								1
							};
							right[]=
							{
								{0.54000002,0.16},
								1
							};
							down[]=
							{
								{0.51999998,0.177},
								1
							};
						};
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										
										{
											"Wind_Center_Rotate",
											-0.0049999999,
											-0.02
										},
										1
									},
									
									{
										
										{
											"Wind_Center_Rotate",
											0.0049999999,
											-0.02
										},
										1
									},
									
									{
										
										{
											"Wind_Center_Rotate",
											0.0049999999,
											0.029999999
										},
										1
									},
									
									{
										
										{
											"Wind_Center_Rotate",
											-0.0049999999,
											0.029999999
										},
										1
									}
								},
								
								{
									
									{
										
										{
											"Wind_Center_Rotate",
											-0.0099999998,
											"0.05-0.02"
										},
										1
									},
									
									{
										
										{
											"Wind_Center_Rotate",
											0,
											"0.07-0.02"
										},
										1
									},
									
									{
										
										{
											"Wind_Center_Rotate",
											0.0099999998,
											"0.05-0.02"
										},
										1
									}
								}
							};
						};
						class HeadingScale
						{
							horizontal=1;
							source="heading";
							sourceScale=0.1;
							width=4;
							NeverEatSeaWeed=1;
							top=0.25;
							bottom=0.75;
							lineXleft=0.15700001;
							lineYright=0.147;
							lineXleftMajor=0.15700001;
							lineYrightMajor=0.13699999;
							majorLineEach=3;
							numberEach=3;
							step=1;
							stepSize=0.0263889;
							align="center";
							scale=1;
							pos[]={0.24600001,0.112};
							right[]={0.266,0.112};
							down[]={0.24600001,0.132};
						};
						class LaserActive
						{
							condition="laserOn";
							class Static
							{
								points[]=
								{
									
									{
										"Cross_Center",
										{0.0099999998,-0.00758065},
										1
									},
									
									{
										"Cross_Center",
										{-0.0099999998,0.00758065},
										1
									},
									{},
									
									{
										"Cross_Center",
										{-0.0099999998,-0.00758065},
										1
									},
									
									{
										"Cross_Center",
										{0.0099999998,0.00758065},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.02,-0.083387099},
										1
									},
									
									{
										"Cross_Center",
										{-0.02,-0.083387099},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.02,0.083387099},
										1
									},
									
									{
										"Cross_Center",
										{-0.02,0.083387099},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.11,-0.0151613},
										1
									},
									
									{
										"Cross_Center",
										{0.11,0.0151613},
										1
									},
									{},
									
									{
										"Cross_Center",
										{-0.11,0.0151613},
										1
									},
									
									{
										"Cross_Center",
										{-0.11,-0.0151613},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel1
						{
							condition="user24<=3";
							class Static
							{
								points[]=
								{
									
									{
										"Cross_Center",
										{-0.28,-0.108403},
										1
									},
									
									{
										"Cross_Center",
										{-0.28,-0.14782301},
										1
									},
									
									{
										"Cross_Center",
										{-0.20999999,-0.14782301},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.28,-0.108403},
										1
									},
									
									{
										"Cross_Center",
										{0.28,-0.14782301},
										1
									},
									
									{
										"Cross_Center",
										{0.20999999,-0.14782301},
										1
									},
									{},
									
									{
										"Cross_Center",
										{-0.28,0.108403},
										1
									},
									
									{
										"Cross_Center",
										{-0.28,0.14782301},
										1
									},
									
									{
										"Cross_Center",
										{-0.20999999,0.14782301},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.28,0.108403},
										1
									},
									
									{
										"Cross_Center",
										{0.28,0.14782301},
										1
									},
									
									{
										"Cross_Center",
										{0.20999999,0.14782301},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel2: ZoomLevel1
						{
							condition="(user24>=4)*(user24<=4)";
							class Static
							{
								points[]=
								{
									
									{
										"Cross_Center",
										{-0.23999999,-0.100065},
										1
									},
									
									{
										"Cross_Center",
										{-0.23999999,-0.136452},
										1
									},
									
									{
										"Cross_Center",
										{-0.18000001,-0.136452},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.23999999,-0.100065},
										1
									},
									
									{
										"Cross_Center",
										{0.23999999,-0.136452},
										1
									},
									
									{
										"Cross_Center",
										{0.18000001,-0.136452},
										1
									},
									{},
									
									{
										"Cross_Center",
										{-0.23999999,0.100065},
										1
									},
									
									{
										"Cross_Center",
										{-0.23999999,0.136452},
										1
									},
									
									{
										"Cross_Center",
										{-0.18000001,0.136452},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.23999999,0.100065},
										1
									},
									
									{
										"Cross_Center",
										{0.23999999,0.136452},
										1
									},
									
									{
										"Cross_Center",
										{0.18000001,0.136452},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel3: ZoomLevel1
						{
							condition="(user24>=8)*(user24<=8)";
							class Static
							{
								points[]=
								{
									
									{
										"Cross_Center",
										{-0.22,-0.091725796},
										1
									},
									
									{
										"Cross_Center",
										{-0.22,-0.125081},
										1
									},
									
									{
										"Cross_Center",
										{-0.16500001,-0.125081},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.22,-0.091725796},
										1
									},
									
									{
										"Cross_Center",
										{0.22,-0.125081},
										1
									},
									
									{
										"Cross_Center",
										{0.16500001,-0.125081},
										1
									},
									{},
									
									{
										"Cross_Center",
										{-0.22,0.091725796},
										1
									},
									
									{
										"Cross_Center",
										{-0.22,0.125081},
										1
									},
									
									{
										"Cross_Center",
										{-0.16500001,0.125081},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.22,0.091725796},
										1
									},
									
									{
										"Cross_Center",
										{0.22,0.125081},
										1
									},
									
									{
										"Cross_Center",
										{0.16500001,0.125081},
										1
									},
									{}
								};
							};
						};
						class ZoomLevel4: ZoomLevel1
						{
							condition="(user24>=18)*(user24<=18)";
							class Static
							{
								points[]=
								{
									
									{
										"Cross_Center",
										{-0.18000001,-0.075048402},
										1
									},
									
									{
										"Cross_Center",
										{-0.18000001,-0.102339},
										1
									},
									
									{
										"Cross_Center",
										{-0.13500001,-0.102339},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.18000001,-0.075048402},
										1
									},
									
									{
										"Cross_Center",
										{0.18000001,-0.102339},
										1
									},
									
									{
										"Cross_Center",
										{0.13500001,-0.102339},
										1
									},
									{},
									
									{
										"Cross_Center",
										{-0.18000001,0.075048402},
										1
									},
									
									{
										"Cross_Center",
										{-0.18000001,0.102339},
										1
									},
									
									{
										"Cross_Center",
										{-0.13500001,0.102339},
										1
									},
									{},
									
									{
										"Cross_Center",
										{0.18000001,0.075048402},
										1
									},
									
									{
										"Cross_Center",
										{0.18000001,0.102339},
										1
									},
									
									{
										"Cross_Center",
										{0.13500001,0.102339},
										1
									},
									{}
								};
							};
						};
					};
					class GreenPolygon
					{
						points[]=
						{
							
							{
								
								{
									{0.31,0.94999999},
									1
								},
								
								{
									{0.435,0.94999999},
									1
								},
								
								{
									{0.435,1},
									1
								},
								
								{
									{0.31,1},
									1
								}
							}
						};
					};
					class BlackText
					{
						color[]={0,0,0};
						alpha=1;
						class BtnFLIR1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
						class BtnFLIR2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
						class BtnFLIR3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
					};
				};
			};
			class MFD_Left_Sensors_Clip
			{
				topLeft="HUD_2_Top_Left";
				topRight="HUD_2_Top_Right";
				bottomLeft="HUD_2_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0.120968;
				borderBottom=0.120968;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-2};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						pos[]=
						{
							-0,
							"(0.03-0.122)"
						};
					};
					class Static_Offset
					{
						pos[]=
						{
							0.5,
							"(0.53-0.1)"
						};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user4>=4)*(user4<=4)";
					class Group_RWR
					{
						color[]={0.12,0,0};
						class RWR
						{
							pos[]=
							{
								"Sensor_Offset",
								
								{
									"0+0.12",
									"0+0.12"
								},
								1
							};
							down[]=
							{
								"Sensor_Offset",
								
								{
									"1-0.12",
									"1-0.12"
								},
								1
							};
							showTargetTypes="1+2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 1024";
							width=4;
							sensorLineType=1;
							sensorLineWidth=3;
							targetLineWidth=-0.0016;
							targetLineLength=0.02;
							range="user25";
							class MissileThreat
							{
								color[]={1,0,0};
								class TargetLines
								{
									width=2;
									points[]=
									{
										
										{
											{0,-0.02},
											1
										},
										
										{
											{0.0034719999,-0.019695999},
											1
										},
										
										{
											{0.0068399999,-0.018794},
											1
										},
										
										{
											{0.0099999998,-0.01732},
											1
										},
										
										{
											{0.012856,-0.01532},
											1
										},
										
										{
											{0.01532,-0.012856},
											1
										},
										
										{
											{0.01732,-0.0099999998},
											1
										},
										
										{
											{0.018794,-0.0068399999},
											1
										},
										
										{
											{0.019695999,-0.0034719999},
											1
										},
										
										{
											{0.02,0},
											1
										},
										
										{
											{0.019695999,0.0034719999},
											1
										},
										
										{
											{0.018794,0.0068399999},
											1
										},
										
										{
											{0.01732,0.0099999998},
											1
										},
										
										{
											{0.01532,0.012856},
											1
										},
										
										{
											{0.012856,0.01532},
											1
										},
										
										{
											{0.0099999998,0.01732},
											1
										},
										
										{
											{0.0068399999,0.018794},
											1
										},
										
										{
											{0.0034719999,0.019695999},
											1
										},
										
										{
											{0,0.02},
											1
										},
										
										{
											{-0.0034719999,0.019695999},
											1
										},
										
										{
											{-0.0068399999,0.018794},
											1
										},
										
										{
											{-0.0099999998,0.01732},
											1
										},
										
										{
											{-0.012856,0.01532},
											1
										},
										
										{
											{-0.01532,0.012856},
											1
										},
										
										{
											{-0.01732,0.0099999998},
											1
										},
										
										{
											{-0.018794,0.0068399999},
											1
										},
										
										{
											{-0.019695999,0.0034719999},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{-0.019695999,-0.0034719999},
											1
										},
										
										{
											{-0.018794,-0.0068399999},
											1
										},
										
										{
											{-0.01732,-0.0099999998},
											1
										},
										
										{
											{-0.01532,-0.012856},
											1
										},
										
										{
											{-0.012856,-0.01532},
											1
										},
										
										{
											{-0.0099999998,-0.01732},
											1
										},
										
										{
											{-0.0068399999,-0.018794},
											1
										},
										
										{
											{-0.0034719999,-0.019695999},
											1
										},
										
										{
											{0,-0.02},
											1
										}
									};
								};
								class TextM
								{
									source="static";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0099999998},
										1
									};
									right[]=
									{
										{0.02,-0.0099999998},
										1
									};
									down[]=
									{
										{0,0.0099999998},
										1
									};
								};
							};
							class lockingThreat
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									width=2;
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.02},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.02},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
							};
							class rwr
							{
								class TargetLines
								{
									width=2;
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.02},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.02},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
								class TextA
								{
									source="static";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0099999998},
										1
									};
									right[]=
									{
										{0.02,-0.0099999998},
										1
									};
									down[]=
									{
										{0,0.0099999998},
										1
									};
								};
							};
							class rwrFriendly: rwr
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class rwrEnemy: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class markedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									width=3;
									points[]=
									{
										
										{
											{-0.017000001,-0.017000001},
											1
										},
										
										{
											{-0.0099999998,-0.017000001},
											1
										},
										{},
										
										{
											{0.017000001,-0.017000001},
											1
										},
										
										{
											{0.0099999998,-0.017000001},
											1
										},
										{},
										
										{
											{-0.017000001,-0.017000001},
											1
										},
										
										{
											{-0.017000001,-0.0099999998},
											1
										},
										{},
										
										{
											{0.017000001,-0.017000001},
											1
										},
										
										{
											{0.017000001,-0.0099999998},
											1
										},
										{},
										
										{
											{-0.017000001,0.017000001},
											1
										},
										
										{
											{-0.0099999998,0.017000001},
											1
										},
										{},
										
										{
											{0.017000001,0.017000001},
											1
										},
										
										{
											{0.0099999998,0.017000001},
											1
										},
										{},
										
										{
											{-0.017000001,0.017000001},
											1
										},
										
										{
											{-0.017000001,0.0099999998},
											1
										},
										{},
										
										{
											{0.017000001,0.017000001},
											1
										},
										
										{
											{0.017000001,0.0099999998},
											1
										},
										{}
									};
								};
							};
							class assignedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									width=7;
									points[]=
									{
										
										{
											{0,-0.017999999},
											1
										},
										
										{
											{0.0031248,-0.017726401},
											1
										},
										
										{
											{0.0061559998,-0.016914601},
											1
										},
										
										{
											{0.0089999996,-0.015588},
											1
										},
										
										{
											{0.0115704,-0.013788},
											1
										},
										
										{
											{0.013788,-0.0115704},
											1
										},
										
										{
											{0.015588,-0.0089999996},
											1
										},
										
										{
											{0.016914601,-0.0061559998},
											1
										},
										
										{
											{0.017726401,-0.0031248},
											1
										},
										
										{
											{0.017999999,0},
											1
										},
										
										{
											{0.017726401,0.0031248},
											1
										},
										
										{
											{0.016914601,0.0061559998},
											1
										},
										
										{
											{0.015588,0.0089999996},
											1
										},
										
										{
											{0.013788,0.0115704},
											1
										},
										
										{
											{0.0115704,0.013788},
											1
										},
										
										{
											{0.0089999996,0.015588},
											1
										},
										
										{
											{0.0061559998,0.016914601},
											1
										},
										
										{
											{0.0031248,0.017726401},
											1
										},
										
										{
											{0,0.017999999},
											1
										},
										
										{
											{-0.0031248,0.017726401},
											1
										},
										
										{
											{-0.0061559998,0.016914601},
											1
										},
										
										{
											{-0.0089999996,0.015588},
											1
										},
										
										{
											{-0.0115704,0.013788},
											1
										},
										
										{
											{-0.013788,0.0115704},
											1
										},
										
										{
											{-0.015588,0.0089999996},
											1
										},
										
										{
											{-0.016914601,0.0061559998},
											1
										},
										
										{
											{-0.017726401,0.0031248},
											1
										},
										
										{
											{-0.017999999,0},
											1
										},
										
										{
											{-0.017726401,-0.0031248},
											1
										},
										
										{
											{-0.016914601,-0.0061559998},
											1
										},
										
										{
											{-0.015588,-0.0089999996},
											1
										},
										
										{
											{-0.013788,-0.0115704},
											1
										},
										
										{
											{-0.0115704,-0.013788},
											1
										},
										
										{
											{-0.0089999996,-0.015588},
											1
										},
										
										{
											{-0.0061559998,-0.016914601},
											1
										},
										
										{
											{-0.0031248,-0.017726401},
											1
										},
										
										{
											{0,-0.017999999},
											1
										}
									};
								};
							};
							class target
							{
								class TargetLines
								{
									width=2;
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.02},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.02},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
								class TextA
								{
									source="static";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0080000004},
										1
									};
									right[]=
									{
										{0.02,-0.0080000004},
										1
									};
									down[]=
									{
										{0,0.012},
										1
									};
								};
							};
							class targetFriendly: target
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetEnemy: target
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
								};
								class TextA
								{
									source="static";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetGroundFriendly: targetGround
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetGroundEnemy: targetGround
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines
								{
								};
								class TextA
								{
									source="static";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
									width=4;
									points[]=
									{
										
										{
											{0,-0.02},
											1
										},
										
										{
											{-1.74846e-009,0.02},
											1
										},
										{},
										
										{
											{0.02,8.7422802e-010},
											1
										},
										
										{
											{-0.02,-2.38498e-010},
											1
										},
										{},
										
										{
											{0.0106066,-0.0106066},
											1
										},
										
										{
											{-0.0106066,0.0106066},
											1
										},
										{},
										
										{
											{0.0106066,0.0106066},
											1
										},
										
										{
											{-0.0106066,-0.0106066},
											1
										},
										{}
									};
								};
							};
							class targetLaserFriendly: targetLaser
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserGroup: targetLaser
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVG: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
								{
									width=2;
									points[]=
									{
										
										{
											{0,-0.013},
											1
										},
										
										{
											{0.0022568,-0.0128024},
											1
										},
										
										{
											{0.0044459999,-0.0122161},
											1
										},
										
										{
											{0.0065000001,-0.011258},
											1
										},
										
										{
											{0.0083563998,-0.0099579999},
											1
										},
										
										{
											{0.0099579999,-0.0083563998},
											1
										},
										
										{
											{0.011258,-0.0065000001},
											1
										},
										
										{
											{0.0122161,-0.0044459999},
											1
										},
										
										{
											{0.0128024,-0.0022568},
											1
										},
										
										{
											{0.013,0},
											1
										},
										
										{
											{0.0128024,0.0022568},
											1
										},
										
										{
											{0.0122161,0.0044459999},
											1
										},
										
										{
											{0.011258,0.0065000001},
											1
										},
										
										{
											{0.0099579999,0.0083563998},
											1
										},
										
										{
											{0.0083563998,0.0099579999},
											1
										},
										
										{
											{0.0065000001,0.011258},
											1
										},
										
										{
											{0.0044459999,0.0122161},
											1
										},
										
										{
											{0.0022568,0.0128024},
											1
										},
										
										{
											{0,0.013},
											1
										},
										
										{
											{-0.0022568,0.0128024},
											1
										},
										
										{
											{-0.0044459999,0.0122161},
											1
										},
										
										{
											{-0.0065000001,0.011258},
											1
										},
										
										{
											{-0.0083563998,0.0099579999},
											1
										},
										
										{
											{-0.0099579999,0.0083563998},
											1
										},
										
										{
											{-0.011258,0.0065000001},
											1
										},
										
										{
											{-0.0122161,0.0044459999},
											1
										},
										
										{
											{-0.0128024,0.0022568},
											1
										},
										
										{
											{-0.013,0},
											1
										},
										
										{
											{-0.0128024,-0.0022568},
											1
										},
										
										{
											{-0.0122161,-0.0044459999},
											1
										},
										
										{
											{-0.011258,-0.0065000001},
											1
										},
										
										{
											{-0.0099579999,-0.0083563998},
											1
										},
										
										{
											{-0.0083563998,-0.0099579999},
											1
										},
										
										{
											{-0.0065000001,-0.011258},
											1
										},
										
										{
											{-0.0044459999,-0.0122161},
											1
										},
										
										{
											{-0.0022568,-0.0128024},
											1
										},
										
										{
											{0,-0.013},
											1
										}
									};
								};
								class TextA
								{
									source="static";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetAirFriendly: targetAir
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetAirEnemy: targetAir
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines
								{
								};
								class TextA
								{
									source="static";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0089999996},
										1
									};
									right[]=
									{
										{0.02,-0.0089999996},
										1
									};
									down[]=
									{
										{0,0.011},
										1
									};
								};
							};
							class targetAirRemoteFriendly: targetAirRemote
							{
								color[]={0,1,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
							class targetAirRemoteEnemy: targetAirRemote
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
								class TextA: TextA
								{
								};
							};
						};
					};
				};
			};
			class MFD_Left_Sensors
			{
				topLeft="HUD_2_Top_Left";
				topRight="HUD_2_Top_Right";
				bottomLeft="HUD_2_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-2};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						pos[]=
						{
							0,
							"(0.03-0.1)"
						};
					};
					class Static_Offset
					{
						pos[]=
						{
							0.5,
							"(0.53-0.1)"
						};
					};
					class Rotation_0
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="heading";
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=0.75806499;
					};
					class Rotation_30: Rotation_0
					{
						minAngle=30;
						maxAngle=-330;
					};
					class Rotation_60: Rotation_0
					{
						minAngle=60;
						maxAngle=-300;
					};
					class Rotation_90: Rotation_0
					{
						minAngle=90;
						maxAngle=-270;
					};
					class Rotation_120: Rotation_0
					{
						minAngle=120;
						maxAngle=-240;
					};
					class Rotation_150: Rotation_0
					{
						minAngle=150;
						maxAngle=-210;
					};
					class Rotation_180: Rotation_0
					{
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_210: Rotation_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_240: Rotation_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_270: Rotation_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_300: Rotation_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_330: Rotation_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_Inv_0: Rotation_0
					{
						min=0;
						max=360;
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_Inv_90: Rotation_Inv_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_Inv_180: Rotation_Inv_0
					{
						minAngle=360;
						maxAngle=0;
					};
					class Rotation_Inv_270: Rotation_Inv_0
					{
						minAngle=450;
						maxAngle=90;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user4>=4)*(user4<=4)";
					class Draw_Static
					{
						width=6;
						points[]=
						{
							
							{
								{0.029999999,0.886177},
								1
							},
							
							{
								{0.15000001,0.886177},
								1
							},
							
							{
								{0.15000001,0.81946802},
								1
							},
							
							{
								{0.029999999,0.81946802},
								1
							},
							
							{
								{0.029999999,0.886177},
								1
							},
							{},
							
							{
								{0.02,0.15800001},
								1
							},
							
							{
								{0.07,0.15800001},
								1
							},
							
							{
								{0.045000002,0.138},
								1
							},
							
							{
								{0.02,0.15800001},
								1
							},
							{},
							
							{
								{0.02,0.23800001},
								1
							},
							
							{
								{0.07,0.23800001},
								1
							},
							
							{
								{0.045000002,0.25799999},
								1
							},
							
							{
								{0.02,0.23800001},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.28806499},
								1
							},
							
							{
								"Static_Offset",
								{0.065967999,-0.28368601},
								1
							},
							
							{
								"Static_Offset",
								{0.12996,-0.27069399},
								1
							},
							
							{
								"Static_Offset",
								{0.19,-0.24946401},
								1
							},
							
							{
								"Static_Offset",
								{0.24426401,-0.22065701},
								1
							},
							
							{
								"Static_Offset",
								{0.29108,-0.185168},
								1
							},
							
							{
								"Static_Offset",
								{0.32907999,-0.144032},
								1
							},
							
							{
								"Static_Offset",
								{0.357086,-0.098518103},
								1
							},
							
							{
								"Static_Offset",
								{0.37422401,-0.050007999},
								1
							},
							
							{
								"Static_Offset",
								{0.38,0},
								1
							},
							
							{
								"Static_Offset",
								{0.37422401,0.050007999},
								1
							},
							
							{
								"Static_Offset",
								{0.357086,0.098518103},
								1
							},
							
							{
								"Static_Offset",
								{0.32907999,0.144032},
								1
							},
							
							{
								"Static_Offset",
								{0.29108,0.185168},
								1
							},
							
							{
								"Static_Offset",
								{0.24426401,0.22065701},
								1
							},
							
							{
								"Static_Offset",
								{0.19,0.24946401},
								1
							},
							
							{
								"Static_Offset",
								{0.12996,0.27069399},
								1
							},
							
							{
								"Static_Offset",
								{0.065967999,0.28368601},
								1
							},
							
							{
								"Static_Offset",
								{0,0.28806499},
								1
							},
							
							{
								"Static_Offset",
								{-0.065967999,0.28368601},
								1
							},
							
							{
								"Static_Offset",
								{-0.12996,0.27069399},
								1
							},
							
							{
								"Static_Offset",
								{-0.19,0.24946401},
								1
							},
							
							{
								"Static_Offset",
								{-0.24426401,0.22065701},
								1
							},
							
							{
								"Static_Offset",
								{-0.29108,0.185168},
								1
							},
							
							{
								"Static_Offset",
								{-0.32907999,0.144032},
								1
							},
							
							{
								"Static_Offset",
								{-0.357086,0.098518103},
								1
							},
							
							{
								"Static_Offset",
								{-0.37422401,0.050007999},
								1
							},
							
							{
								"Static_Offset",
								{-0.38,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.37422401,-0.050007999},
								1
							},
							
							{
								"Static_Offset",
								{-0.357086,-0.098518103},
								1
							},
							
							{
								"Static_Offset",
								{-0.32907999,-0.144032},
								1
							},
							
							{
								"Static_Offset",
								{-0.29108,-0.185168},
								1
							},
							
							{
								"Static_Offset",
								{-0.24426401,-0.22065701},
								1
							},
							
							{
								"Static_Offset",
								{-0.19,-0.24946401},
								1
							},
							
							{
								"Static_Offset",
								{-0.12996,-0.27069399},
								1
							},
							
							{
								"Static_Offset",
								{-0.065967999,-0.28368601},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.28806499},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.144032},
								1
							},
							
							{
								"Static_Offset",
								{0.032984,-0.14184301},
								1
							},
							
							{
								"Static_Offset",
								{0.06498,-0.13534699},
								1
							},
							
							{
								"Static_Offset",
								{0.094999999,-0.124732},
								1
							},
							
							{
								"Static_Offset",
								{0.122132,-0.110329},
								1
							},
							
							{
								"Static_Offset",
								{0.14554,-0.092583902},
								1
							},
							
							{
								"Static_Offset",
								{0.16453999,-0.072016098},
								1
							},
							
							{
								"Static_Offset",
								{0.178543,-0.049259},
								1
							},
							
							{
								"Static_Offset",
								{0.187112,-0.025003999},
								1
							},
							
							{
								"Static_Offset",
								{0.19,0},
								1
							},
							
							{
								"Static_Offset",
								{0.187112,0.025003999},
								1
							},
							
							{
								"Static_Offset",
								{0.178543,0.049259},
								1
							},
							
							{
								"Static_Offset",
								{0.16453999,0.072016098},
								1
							},
							
							{
								"Static_Offset",
								{0.14554,0.092583902},
								1
							},
							
							{
								"Static_Offset",
								{0.122132,0.110329},
								1
							},
							
							{
								"Static_Offset",
								{0.094999999,0.124732},
								1
							},
							
							{
								"Static_Offset",
								{0.06498,0.13534699},
								1
							},
							
							{
								"Static_Offset",
								{0.032984,0.14184301},
								1
							},
							
							{
								"Static_Offset",
								{0,0.144032},
								1
							},
							
							{
								"Static_Offset",
								{-0.032984,0.14184301},
								1
							},
							
							{
								"Static_Offset",
								{-0.06498,0.13534699},
								1
							},
							
							{
								"Static_Offset",
								{-0.094999999,0.124732},
								1
							},
							
							{
								"Static_Offset",
								{-0.122132,0.110329},
								1
							},
							
							{
								"Static_Offset",
								{-0.14554,0.092583902},
								1
							},
							
							{
								"Static_Offset",
								{-0.16453999,0.072016098},
								1
							},
							
							{
								"Static_Offset",
								{-0.178543,0.049259},
								1
							},
							
							{
								"Static_Offset",
								{-0.187112,0.025003999},
								1
							},
							
							{
								"Static_Offset",
								{-0.19,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.187112,-0.025003999},
								1
							},
							
							{
								"Static_Offset",
								{-0.178543,-0.049259},
								1
							},
							
							{
								"Static_Offset",
								{-0.16453999,-0.072016098},
								1
							},
							
							{
								"Static_Offset",
								{-0.14554,-0.092583902},
								1
							},
							
							{
								"Static_Offset",
								{-0.122132,-0.110329},
								1
							},
							
							{
								"Static_Offset",
								{-0.094999999,-0.124732},
								1
							},
							
							{
								"Static_Offset",
								{-0.06498,-0.13534699},
								1
							},
							
							{
								"Static_Offset",
								{-0.032984,-0.14184301},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.144032},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.28999999},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.31},
								1
							},
							
							{
								"Static_Offset",
								{0.050000001,-0.31},
								1
							},
							
							{
								"Static_Offset",
								{0.050000001,-0.34999999},
								1
							},
							
							{
								"Static_Offset",
								{-0.050000001,-0.34999999},
								1
							},
							
							{
								"Static_Offset",
								{-0.050000001,-0.31},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.31},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_0",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_0",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_30",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_30",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_60",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_60",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_90",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_90",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_120",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_120",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_150",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_150",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_180",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_180",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_210",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_210",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_240",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_240",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_270",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_270",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_300",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_300",
									0,
									0.23879001
								},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_330",
									0,
									0.269113
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"Rotation_330",
									0,
									0.23879001
								},
								1
							},
							{},
							{}
						};
					};
					class Rotation_0_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_0",
								0,
								-0.345
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_0",
								-0.039999999,
								-0.345
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_0",
								0,
								-0.31
							},
							1
						};
					};
					class Rotation_90_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_90",
								0,
								-0.345
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_90",
								-0.039999999,
								-0.345
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_90",
								0,
								-0.31
							},
							1
						};
					};
					class Rotation_180_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_180",
								0,
								-0.345
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_180",
								-0.039999999,
								-0.345
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_180",
								0,
								-0.31
							},
							1
						};
					};
					class Rotation_270_Text
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_270",
								0,
								-0.345
							},
							1
						};
						right[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_270",
								-0.039999999,
								-0.345
							},
							1
						};
						down[]=
						{
							"Static_Offset",
							1,
							
							{
								"Rotation_Inv_270",
								0,
								-0.31
							},
							1
						};
					};
					class BtnIND
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.95999998},
							1
						};
						right[]=
						{
							{0.23999999,0.95999998},
							1
						};
						down[]=
						{
							{0.20999999,0.98500001},
							1
						};
					};
					class BtnSWAP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.95999998},
							1
						};
						right[]=
						{
							{0.49000001,0.95999998},
							1
						};
						down[]=
						{
							{0.46000001,0.98500001},
							1
						};
					};
					class BtnHSD
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.60000002,0.95999998},
							1
						};
						right[]=
						{
							{0.63,0.95999998},
							1
						};
						down[]=
						{
							{0.60000002,0.98500001},
							1
						};
					};
					class BtnDCLT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.95999998},
							1
						};
						right[]=
						{
							{0.75,0.95999998},
							1
						};
						down[]=
						{
							{0.72000003,0.98500001},
							1
						};
					};
					class BtnSAR
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.015},
							1
						};
						right[]=
						{
							{0.233,0.015},
							1
						};
						down[]=
						{
							{0.20999999,0.032000002},
							1
						};
					};
					class BtnFAC
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.61000001,0.015},
							1
						};
						right[]=
						{
							{0.63300002,0.015},
							1
						};
						down[]=
						{
							{0.61000001,0.032000002},
							1
						};
					};
					class BtnINT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.74000001,0.015},
							1
						};
						right[]=
						{
							{0.76300001,0.015},
							1
						};
						down[]=
						{
							{0.74000001,0.032000002},
							1
						};
					};
					class BtnSen1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.41800001},
							1
						};
						right[]=
						{
							{1.013,0.41800001},
							1
						};
						down[]=
						{
							{0.99000001,0.435},
							1
						};
					};
					class BtnSen2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.44},
							1
						};
						right[]=
						{
							{1.013,0.44},
							1
						};
						down[]=
						{
							{0.99000001,0.45699999},
							1
						};
					};
					class BtnSen3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.46200001},
							1
						};
						right[]=
						{
							{1.013,0.46200001},
							1
						};
						down[]=
						{
							{0.99000001,0.479},
							1
						};
					};
					class BtnNett1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.121},
							1
						};
						right[]=
						{
							{1.013,0.121},
							1
						};
						down[]=
						{
							{0.99000001,0.138},
							1
						};
					};
					class BtnNett2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.14300001},
							1
						};
						right[]=
						{
							{1.013,0.14300001},
							1
						};
						down[]=
						{
							{0.99000001,0.16},
							1
						};
					};
					class BtnNett3
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.99000001,0.16500001},
							1
						};
						right[]=
						{
							{1.013,0.16500001},
							1
						};
						down[]=
						{
							{0.99000001,0.182},
							1
						};
					};
					class GreenPolygon
					{
						points[]=
						{
							
							{
								
								{
									{0.31,0.94999999},
									1
								},
								
								{
									{0.435,0.94999999},
									1
								},
								
								{
									{0.435,1},
									1
								},
								
								{
									{0.31,1},
									1
								}
							}
						};
					};
					class Black
					{
						color[]={0,0,0};
						alpha=1;
						class BtnFLIR1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.37,0.95999998},
								1
							};
							right[]=
							{
								{0.40000001,0.95999998},
								1
							};
							down[]=
							{
								{0.37,0.98500001},
								1
							};
						};
						class BtnFLIR2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.37,0.95999998},
								1
							};
							right[]=
							{
								{0.40000001,0.95999998},
								1
							};
							down[]=
							{
								{0.37,0.98500001},
								1
							};
						};
						class BtnFLIR3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.37,0.95999998},
								1
							};
							right[]=
							{
								{0.40000001,0.95999998},
								1
							};
							down[]=
							{
								{0.37,0.98500001},
								1
							};
						};
						class Static
						{
							points[]=
							{
								
								{
									
									{
										{0.60000002,0.31},
										1
									},
									
									{
										{0.64999998,0.31},
										1
									},
									
									{
										{0.64999998,0.34999999},
										1
									},
									
									{
										{0.60000002,0.34999999},
										1
									}
								},
								
								{
									
									{
										{0.745,0.20999999},
										1
									},
									
									{
										{0.815,0.20999999},
										1
									},
									
									{
										{0.815,0.25999999},
										1
									},
									
									{
										{0.745,0.25999999},
										1
									}
								}
							};
						};
					};
					class White
					{
						color[]={1,1,1};
						alpha=0.40000001;
						class MChaff_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.75,0.69999999},
								1
							};
							right[]=
							{
								{0.77999997,0.69999999},
								1
							};
							down[]=
							{
								{0.75,0.72500002},
								1
							};
						};
						class MFlare_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.75,0.74000001},
								1
							};
							right[]=
							{
								{0.77999997,0.74000001},
								1
							};
							down[]=
							{
								{0.75,0.76499999},
								1
							};
						};
						class Prog_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.75,0.77999997},
								1
							};
							right[]=
							{
								{0.77999997,0.77999997},
								1
							};
							down[]=
							{
								{0.75,0.80500001},
								1
							};
						};
						class ChaffSource
						{
							source="cmammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.93000001,
									"0.85-0.15"
								},
								1
							};
							right[]=
							{
								
								{
									0.95999998,
									"0.85-0.15"
								},
								1
							};
							down[]=
							{
								{0.93000001,0.72500002},
								1
							};
						};
						class FlareSource: ChaffSource
						{
							pos[]=
							{
								
								{
									0.93000001,
									"0.89-0.15"
								},
								1
							};
							right[]=
							{
								
								{
									0.95999998,
									"0.89-0.15"
								},
								1
							};
							down[]=
							{
								{0.93000001,0.76499999},
								1
							};
						};
						class ProgS_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.93000001,0.77999997},
								1
							};
							right[]=
							{
								{0.95999998,0.77999997},
								1
							};
							down[]=
							{
								{0.93000001,0.80500001},
								1
							};
						};
						class Range_TextVal1
						{
							source="coordinateX";
							scale=1;
							sourceScale=0.0099999998;
							sourcePrecision=0;
							sourceLength=3;
							sourceOffset=0;
							align="left";
							pos[]=
							{
								{0.5,0.74000001},
								1
							};
							right[]=
							{
								{0.52999997,0.74000001},
								1
							};
							down[]=
							{
								{0.5,0.76499999},
								1
							};
						};
						class Range_TextVal2
						{
							source="coordinateY";
							scale=1;
							sourceScale=0.0099999998;
							sourcePrecision=0;
							sourceLength=3;
							sourceOffset=0;
							align="left";
							pos[]=
							{
								{0.60000002,0.74000001},
								1
							};
							right[]=
							{
								{0.63,0.74000001},
								1
							};
							down[]=
							{
								{0.60000002,0.76499999},
								1
							};
						};
						class DrawPolygon
						{
							points[]=
							{
								
								{
									
									{
										"Static_Offset",
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										"Static_Offset",
										{0.003,-0.029999999},
										1
									},
									
									{
										"Static_Offset",
										{0.003,0.02},
										1
									},
									
									{
										"Static_Offset",
										{-0.0049999999,0.02},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										{-0.032499999,-0.02},
										1
									},
									
									{
										"Static_Offset",
										{0.032499999,-0.02},
										1
									},
									
									{
										"Static_Offset",
										{0.032499999,-0.012},
										1
									},
									
									{
										"Static_Offset",
										{-0.032499999,-0.012},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										{-0.015,0.0049999999},
										1
									},
									
									{
										"Static_Offset",
										{0.015,0.0049999999},
										1
									},
									
									{
										"Static_Offset",
										{0.015,0.0099999998},
										1
									},
									
									{
										"Static_Offset",
										{-0.015,0.0099999998},
										1
									}
								}
							};
						};
					};
					class BtnDatalink1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.090000004,0.82999998},
							1
						};
						right[]=
						{
							{0.112,0.82999998},
							1
						};
						down[]=
						{
							{0.090000004,0.85000002},
							1
						};
					};
					class BtnDatalink2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.090000004,0.86000001},
							1
						};
						right[]=
						{
							{0.112,0.86000001},
							1
						};
						down[]=
						{
							{0.090000004,0.88},
							1
						};
					};
					class BtnHook
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.059999999,0.75},
							1
						};
						right[]=
						{
							{0.082000002,0.75},
							1
						};
						down[]=
						{
							{0.059999999,0.76999998},
							1
						};
					};
					class TargetInfo
					{
						condition="targetHeight >= 1";
						class BtnDatalink1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.505,0.77999997},
								1
							};
							right[]=
							{
								{0.52700001,0.77999997},
								1
							};
							down[]=
							{
								{0.505,0.80000001},
								1
							};
						};
						class TargetInfo1
						{
							source="targetHeight";
							scale=1;
							sourceScale=1;
							sourcePrecision=0;
							sourceLength=1;
							sourceOffset=0;
							align="left";
							pos[]=
							{
								{0.56999999,0.81},
								1
							};
							right[]=
							{
								{0.60000002,0.81},
								1
							};
							down[]=
							{
								{0.56999999,0.83499998},
								1
							};
						};
						class TargetInfo2
						{
							source="LarTargetDist";
							scale=1;
							sourceScale=1;
							sourcePrecision=0;
							sourceLength=1;
							sourceOffset=0;
							align="left";
							pos[]=
							{
								{0.56999999,0.83999997},
								1
							};
							right[]=
							{
								{0.60000002,0.83999997},
								1
							};
							down[]=
							{
								{0.56999999,0.86500001},
								1
							};
						};
						class TargetInfo3
						{
							source="LarTargetSpeed";
							scale=1;
							sourceScale=1;
							sourcePrecision=0;
							sourceLength=1;
							sourceOffset=0;
							align="left";
							pos[]=
							{
								{0.56999999,0.87},
								1
							};
							right[]=
							{
								{0.60000002,0.87},
								1
							};
							down[]=
							{
								{0.56999999,0.89499998},
								1
							};
						};
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.41,0.77499998},
									1
								},
								
								{
									{0.59500003,0.77499998},
									1
								},
								
								{
									{0.59500003,0.90499997},
									1
								},
								
								{
									{0.41,0.90499997},
									1
								},
								
								{
									{0.41,0.77499998},
									1
								},
								{}
							};
						};
					};
					class HeadingText
					{
						source="heading";
						sourceScale=1;
						sourceLength=3;
						refreshRate=0.1;
						align="center";
						scale=1;
						pos[]=
						{
							{0.5,0.090000004},
							1
						};
						right[]=
						{
							{0.52999997,0.090000004},
							1
						};
						down[]=
						{
							{0.5,0.115},
							1
						};
					};
					class Range_TextVal1
					{
						source="user";
						sourceIndex=25;
						sourceScale=0.001;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						scale=1;
						align="left";
						pos[]=
						{
							{0.81,0.22},
							1
						};
						right[]=
						{
							{0.85000002,0.22},
							1
						};
						down[]=
						{
							{0.81,0.25},
							1
						};
					};
					class Range_TextVal2
					{
						source="user";
						sourceIndex=25;
						sourceScale=0.00050000002;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						scale=1;
						align="left";
						pos[]=
						{
							{0.63999999,0.315},
							1
						};
						right[]=
						{
							{0.67000002,0.315},
							1
						};
						down[]=
						{
							{0.63999999,0.34},
							1
						};
					};
					class Range_TextVal3
					{
						source="user";
						sourceIndex=25;
						sourceScale=0.001;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						scale=1;
						align="right";
						pos[]=
						{
							{0.02,0.185},
							1
						};
						right[]=
						{
							{0.050000001,0.185},
							1
						};
						down[]=
						{
							{0.02,0.20999999},
							1
						};
					};
				};
			};
			class HUD_Instruments_Middle
			{
				topLeft="HUD_3_Top_Left";
				topRight="HUD_3_Top_Right";
				bottomLeft="HUD_3_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Direction_Center
					{
						pos[]={0.5,0.69999999};
					};
					class Horizont_Center
					{
						pos[]={0.5,0.25};
					};
					class Horizont_Rotate
					{
						source="horizonBank";
						sourceScale=1;
						min="rad(-360)";
						max="rad(360)";
						minAngle="360-180";
						maxAngle="-360-180";
						aspectRatio=0.85000002;
					};
					class L_Center
					{
						pos[]={0.25,0.41};
					};
					class Level0
					{
						pos0[]=
						{
							"0.65-0.15",
							0.245
						};
						pos10[]={0.66000003,0.39500001};
						angle=0;
					};
					class Level0_Background: Level0
					{
						pos0[]={0,0};
						pos10[]={0.02,0.30000001};
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class Rotation_0
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="heading";
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=0.85000002;
					};
					class Rotation_10: Rotation_0
					{
						minAngle=10;
						maxAngle=-350;
					};
					class Rotation_20: Rotation_0
					{
						minAngle=20;
						maxAngle=-340;
					};
					class Rotation_30: Rotation_0
					{
						minAngle=30;
						maxAngle=-330;
					};
					class Rotation_40: Rotation_0
					{
						minAngle=40;
						maxAngle=-320;
					};
					class Rotation_50: Rotation_0
					{
						minAngle=50;
						maxAngle=-310;
					};
					class Rotation_60: Rotation_0
					{
						minAngle=60;
						maxAngle=-300;
					};
					class Rotation_70: Rotation_0
					{
						minAngle=70;
						maxAngle=-290;
					};
					class Rotation_80: Rotation_0
					{
						minAngle=80;
						maxAngle=-280;
					};
					class Rotation_90: Rotation_0
					{
						minAngle=90;
						maxAngle=-270;
					};
					class Rotation_100: Rotation_0
					{
						minAngle=100;
						maxAngle=-260;
					};
					class Rotation_110: Rotation_0
					{
						minAngle=110;
						maxAngle=-250;
					};
					class Rotation_120: Rotation_0
					{
						minAngle=120;
						maxAngle=-240;
					};
					class Rotation_130: Rotation_0
					{
						minAngle=130;
						maxAngle=-230;
					};
					class Rotation_140: Rotation_0
					{
						minAngle=140;
						maxAngle=-220;
					};
					class Rotation_150: Rotation_0
					{
						minAngle=150;
						maxAngle=-210;
					};
					class Rotation_160: Rotation_0
					{
						minAngle=160;
						maxAngle=-200;
					};
					class Rotation_170: Rotation_0
					{
						minAngle=170;
						maxAngle=-190;
					};
					class Rotation_180: Rotation_0
					{
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_190: Rotation_0
					{
						minAngle=190;
						maxAngle=-170;
					};
					class Rotation_200: Rotation_0
					{
						minAngle=200;
						maxAngle=-160;
					};
					class Rotation_210: Rotation_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_220: Rotation_0
					{
						minAngle=220;
						maxAngle=-140;
					};
					class Rotation_230: Rotation_0
					{
						minAngle=230;
						maxAngle=-130;
					};
					class Rotation_240: Rotation_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_250: Rotation_0
					{
						minAngle=250;
						maxAngle=-110;
					};
					class Rotation_260: Rotation_0
					{
						minAngle=260;
						maxAngle=-100;
					};
					class Rotation_270: Rotation_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_280: Rotation_0
					{
						minAngle=280;
						maxAngle=-80;
					};
					class Rotation_290: Rotation_0
					{
						minAngle=290;
						maxAngle=-70;
					};
					class Rotation_300: Rotation_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_310: Rotation_0
					{
						minAngle=310;
						maxAngle=-50;
					};
					class Rotation_320: Rotation_0
					{
						minAngle=320;
						maxAngle=-40;
					};
					class Rotation_330: Rotation_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_340: Rotation_0
					{
						minAngle=340;
						maxAngle=-20;
					};
					class Rotation_350: Rotation_0
					{
						minAngle=350;
						maxAngle=-10;
					};
					class Rotation_Inv_0: Rotation_0
					{
						min=0;
						max=360;
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_Inv_30: Rotation_Inv_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_Inv_60: Rotation_Inv_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_Inv_90: Rotation_Inv_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_Inv_120: Rotation_Inv_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_Inv_150: Rotation_Inv_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_Inv_180: Rotation_Inv_0
					{
						minAngle=360;
						maxAngle=0;
					};
					class Rotation_Inv_210: Rotation_Inv_0
					{
						minAngle=390;
						maxAngle=30;
					};
					class Rotation_Inv_240: Rotation_Inv_0
					{
						minAngle=420;
						maxAngle=60;
					};
					class Rotation_Inv_270: Rotation_Inv_0
					{
						minAngle=450;
						maxAngle=90;
					};
					class Rotation_Inv_300: Rotation_Inv_0
					{
						minAngle=480;
						maxAngle=120;
					};
					class Rotation_Inv_330: Rotation_Inv_0
					{
						minAngle=510;
						maxAngle=150;
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="user";
						sourceIndex=10;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_WP_Center
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=0.85000002;
					};
					class ClimbFixed
					{
						pos[]={1.05,0.56999999};
					};
					class ClimbRotate
					{
						source="vspeed";
						sourceScale=0.3048;
						min=-6;
						max=6;
						minAngle=-48;
						maxAngle=48;
						aspectRatio=0.85000002;
					};
				};
				class Draw
				{
					condition="on";
					alpha=1;
					color[]={0,0.12,0};
					class HorizontBackground
					{
						color[]={0,0.54000002,0.81999999};
						alpha=0.1;
						clipTL[]={0.25999999,0.039999999};
						clipBR[]={0.74000001,0.46000001};
						class Static
						{
							points[]=
							{
								
								{
									
									{
										"Level0",
										{-10,-20},
										1
									},
									
									{
										"Level0",
										{10,-20},
										1
									},
									
									{
										"Level0",
										{10,0},
										1
									},
									
									{
										"Level0",
										{-10,0},
										1
									}
								}
							};
						};
						class StaticBlack
						{
							color[]={0.2,0.079999998,0};
							alpha=0.1;
							class Static
							{
								points[]=
								{
									
									{
										
										{
											"Level0",
											{-10,0},
											1
										},
										
										{
											"Level0",
											{10,0},
											1
										},
										
										{
											"Level0",
											{10,20},
											1
										},
										
										{
											"Level0",
											{-10,20},
											1
										}
									}
								};
							};
						};
						class HorizontWhite
						{
							color[]={0,0,0};
							alpha=0.89999998;
							class Dimmed
							{
								class Level0
								{
									width=7;
									points[]=
									{
										
										{
											"Level0",
											{0.25,0},
											1
										},
										
										{
											"Level0",
											{0.064999998,0},
											1
										},
										{},
										
										{
											"Level0",
											{-0.064999998,0},
											1
										},
										
										{
											"Level0",
											{-0.25,0},
											1
										}
									};
								};
							};
							class Level0
							{
								width=16;
								points[]={};
							};
							class LevelP5: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP5",
										{-0.035999998,0.039999999},
										1
									},
									
									{
										"LevelP5",
										{0.035999998,0.039999999},
										1
									}
								};
							};
							class LevelP10: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP10",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP10",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_10_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP15: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP15",
										{-0.035999998,0.039999999},
										1
									},
									
									{
										"LevelP15",
										{0.035999998,0.039999999},
										1
									}
								};
							};
							class LevelP20: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP20",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP20",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_20_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP25: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP25",
										{-0.035999998,0.039999999},
										1
									},
									
									{
										"LevelP25",
										{0.035999998,0.039999999},
										1
									}
								};
							};
							class LevelP30: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP30",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP30",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_30_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP35: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP35",
										{-0.035999998,0.039999999},
										1
									},
									
									{
										"LevelP35",
										{0.035999998,0.039999999},
										1
									}
								};
							};
							class LevelP40: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP40",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP40",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_40_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP45: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP45",
										{-0.035999998,0.039999999},
										1
									},
									
									{
										"LevelP45",
										{0.035999998,0.039999999},
										1
									}
								};
							};
							class LevelP50: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP50",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP50",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_50_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP60: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP60",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP60",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_60
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP60",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_60_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP60",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP60",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP70: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP70",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP70",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_70
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP70",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_70_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP70",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP70",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP80: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP80",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP80",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_80
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP80",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_80_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP80",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP80",
									{0.090000004,0.055},
									1
								};
							};
							class LevelP90: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP90",
										{-0.075999998,0.039999999},
										1
									},
									
									{
										"LevelP90",
										{0.075999998,0.039999999},
										1
									}
								};
							};
							class VALP_1_90
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{-0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP90",
									{-0.059999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.090000004,0.055},
									1
								};
							};
							class VALP_1_90_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{0.090000004,0.029999999},
									1
								};
								right[]=
								{
									"LevelP90",
									{0.12,0.029999999},
									1
								};
								down[]=
								{
									"LevelP90",
									{0.090000004,0.055},
									1
								};
							};
						};
						class HorizontBlack
						{
							color[]={1,1,1};
							alpha=0.30000001;
							class Level0
							{
								width=7;
								points[]={};
							};
							class LevelM5: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM5",
										{-0.035999998,-0.039999999},
										1
									},
									
									{
										"LevelM5",
										{0.035999998,-0.039999999},
										1
									}
								};
							};
							class LevelM10: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM10",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM10",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM10",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_10_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM10",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM15: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM15",
										{-0.035999998,-0.039999999},
										1
									},
									
									{
										"LevelM15",
										{0.035999998,-0.039999999},
										1
									}
								};
							};
							class LevelM20: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM20",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM20",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM20",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_20_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM20",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM25: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM25",
										{-0.035999998,-0.039999999},
										1
									},
									
									{
										"LevelM25",
										{0.035999998,-0.039999999},
										1
									}
								};
							};
							class LevelM30: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM30",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM30",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM30",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_30_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM30",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM35: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM35",
										{-0.035999998,-0.039999999},
										1
									},
									
									{
										"LevelM35",
										{0.035999998,-0.039999999},
										1
									}
								};
							};
							class LevelM40: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM40",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM40",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM40",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_40_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM40",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM45: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM45",
										{-0.035999998,-0.039999999},
										1
									},
									
									{
										"LevelM45",
										{0.035999998,-0.039999999},
										1
									}
								};
							};
							class LevelM50: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM50",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM50",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM50",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_50_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM50",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM60: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM60",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM60",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_60
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM60",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_60_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM60",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM60",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM60",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM70: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM70",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM70",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_70
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM70",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_70_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM70",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM70",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM70",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM80: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM80",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM80",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_80
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM80",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_80_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM80",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM80",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM80",
									{0.090000004,-0.025},
									1
								};
							};
							class LevelM90: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM90",
										{-0.075999998,-0.039999999},
										1
									},
									
									{
										"LevelM90",
										{0.075999998,-0.039999999},
										1
									}
								};
							};
							class VALM_1_90
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM90",
									{-0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.059999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.090000004,-0.025},
									1
								};
							};
							class VALM_1_90_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM90",
									{0.090000004,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM90",
									{0.12,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM90",
									{0.090000004,-0.025},
									1
								};
							};
						};
						class HorizonYellow
						{
							color[]={0.62,0.36000001,0};
							alpha=0.89999998;
							class Static
							{
								width=8;
								points[]=
								{
									
									{
										
										{
											"Horizont_Center",
											{-0.125,0},
											1
										},
										
										{
											"Horizont_Center",
											{-0.025,0},
											1
										},
										
										{
											"Horizont_Center",
											{-0.025,-0.029999999},
											1
										}
									},
									
									{
										
										{
											"Horizont_Center",
											{-0.025,-0.0099999998},
											1
										},
										
										{
											"Horizont_Center",
											{-0.025,-0.029999999},
											1
										},
										
										{
											"Horizont_Center",
											{0,-0.035},
											1
										},
										
										{
											"Horizont_Center",
											{0,-0.0099999998},
											1
										}
									},
									
									{
										
										{
											"Horizont_Center",
											{0.125,0},
											1
										},
										
										{
											"Horizont_Center",
											{0.025,0},
											1
										},
										
										{
											"Horizont_Center",
											{0.025,-0.029999999},
											1
										}
									},
									
									{
										
										{
											"Horizont_Center",
											{0.025,-0.0099999998},
											1
										},
										
										{
											"Horizont_Center",
											{0.025,-0.029999999},
											1
										},
										
										{
											"Horizont_Center",
											{0,-0.035},
											1
										},
										
										{
											"Horizont_Center",
											{0,-0.0099999998},
											1
										}
									},
									
									{
										
										{
											"Horizont_Center",
											{-0.011,-0.155},
											1
										},
										
										{
											"Horizont_Center",
											{0.011,-0.155},
											1
										},
										
										{
											"Horizont_Center",
											{0,-0.16500001},
											1
										}
									}
								};
							};
						};
						class HorizonDarkBlue
						{
							color[]={0,0.0099999998,0.079999998};
							alpha=1;
							class Static
							{
								width=8;
								points[]=
								{
									
									{
										"Horizont_Rotate",
										{-4.0214498e-008,-0.1955},
										1
									},
									
									{
										"Horizont_Rotate",
										{-4.7208299e-008,-0.2295},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{0.0530276,-0.20331401},
										1
									},
									
									{
										"Horizont_Rotate",
										{0.058438599,-0.22406},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{0.0950891,-0.17333101},
										1
									},
									
									{
										"Horizont_Rotate",
										{0.111994,-0.204146},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{0.136971,-0.151729},
										1
									},
									
									{
										"Horizont_Rotate",
										{0.15219,-0.168588},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{0.1647,-0.117469},
										1
									},
									
									{
										"Horizont_Rotate",
										{0.183851,-0.131129},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{-0.053027701,-0.20331401},
										1
									},
									
									{
										"Horizont_Rotate",
										{-0.0584387,-0.22406},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{-0.0950891,-0.17333101},
										1
									},
									
									{
										"Horizont_Rotate",
										{-0.111994,-0.204146},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{-0.136971,-0.151729},
										1
									},
									
									{
										"Horizont_Rotate",
										{-0.15219,-0.168588},
										1
									},
									{},
									
									{
										"Horizont_Rotate",
										{-0.1647,-0.117469},
										1
									},
									
									{
										"Horizont_Rotate",
										{-0.183851,-0.131129},
										1
									},
									{}
								};
							};
						};
					};
					class BlackCover
					{
						color[]={0.050000001,0.050000001,0.050000001};
						alpha=1;
						class DrawPolygon
						{
							points[]=
							{
								
								{
									
									{
										{0.25,0.039999999},
										1
									},
									
									{
										{0.75,0.039999999},
										1
									},
									
									{
										{0.75,0.46000001},
										1
									},
									
									{
										{0.25,0.46000001},
										1
									}
								}
							};
						};
					};
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								"L_Center",
								{0,-0.023800001},
								1
							},
							
							{
								"L_Center",
								{0.0048608002,-0.0234382},
								1
							},
							
							{
								"L_Center",
								{0.0095760003,-0.0223649},
								1
							},
							
							{
								"L_Center",
								{0.014,-0.0206108},
								1
							},
							
							{
								"L_Center",
								{0.017998399,-0.0182308},
								1
							},
							
							{
								"L_Center",
								{0.021447999,-0.0152986},
								1
							},
							
							{
								"L_Center",
								{0.024248,-0.0119},
								1
							},
							
							{
								"L_Center",
								{0.026311601,-0.0081396},
								1
							},
							
							{
								"L_Center",
								{0.027574399,-0.0041316799},
								1
							},
							
							{
								"L_Center",
								{0.028000001,0},
								1
							},
							
							{
								"L_Center",
								{0.027574399,0.0041316799},
								1
							},
							
							{
								"L_Center",
								{0.026311601,0.0081396},
								1
							},
							
							{
								"L_Center",
								{0.024248,0.0119},
								1
							},
							
							{
								"L_Center",
								{0.021447999,0.0152986},
								1
							},
							
							{
								"L_Center",
								{0.017998399,0.0182308},
								1
							},
							
							{
								"L_Center",
								{0.014,0.0206108},
								1
							},
							
							{
								"L_Center",
								{0.0095760003,0.0223649},
								1
							},
							
							{
								"L_Center",
								{0.0048608002,0.0234382},
								1
							},
							
							{
								"L_Center",
								{0,0.023800001},
								1
							},
							
							{
								"L_Center",
								{-0.0048608002,0.0234382},
								1
							},
							
							{
								"L_Center",
								{-0.0095760003,0.0223649},
								1
							},
							
							{
								"L_Center",
								{-0.014,0.0206108},
								1
							},
							
							{
								"L_Center",
								{-0.017998399,0.0182308},
								1
							},
							
							{
								"L_Center",
								{-0.021447999,0.0152986},
								1
							},
							
							{
								"L_Center",
								{-0.024248,0.0119},
								1
							},
							
							{
								"L_Center",
								{-0.026311601,0.0081396},
								1
							},
							
							{
								"L_Center",
								{-0.027574399,0.0041316799},
								1
							},
							
							{
								"L_Center",
								{-0.028000001,0},
								1
							},
							
							{
								"L_Center",
								{-0.027574399,-0.0041316799},
								1
							},
							
							{
								"L_Center",
								{-0.026311601,-0.0081396},
								1
							},
							
							{
								"L_Center",
								{-0.024248,-0.0119},
								1
							},
							
							{
								"L_Center",
								{-0.021447999,-0.0152986},
								1
							},
							
							{
								"L_Center",
								{-0.017998399,-0.0182308},
								1
							},
							
							{
								"L_Center",
								{-0.014,-0.0206108},
								1
							},
							
							{
								"L_Center",
								{-0.0095760003,-0.0223649},
								1
							},
							
							{
								"L_Center",
								{-0.0048608002,-0.0234382},
								1
							},
							
							{
								"L_Center",
								{0,-0.023800001},
								1
							},
							{},
							
							{
								{0.050000001,0.34850001},
								1
							},
							
							{
								{0.23,0.34850001},
								1
							},
							
							{
								{0.23,0.0425},
								1
							},
							
							{
								{0.050000001,0.0425},
								1
							},
							
							{
								{0.050000001,0.34850001},
								1
							},
							{},
							
							{
								{0.76999998,0.34850001},
								1
							},
							
							{
								{0.94999999,0.34850001},
								1
							},
							
							{
								{0.94999999,0.0425},
								1
							},
							
							{
								{0.76999998,0.0425},
								1
							},
							
							{
								{0.76999998,0.34850001},
								1
							},
							{}
						};
					};
					class Group_White
					{
						color[]={1,1,1};
						alpha=0.40000001;
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.89857101,0.83999997},
									1
								},
								
								{
									{0.90428603,0.84571397},
									1
								},
								
								{
									{0.91571403,0.85142899},
									1
								},
								
								{
									{0.92428601,0.85428602},
									1
								},
								
								{
									{0.93285698,0.85428602},
									1
								},
								
								{
									{0.93857098,0.85428602},
									1
								},
								
								{
									{0.94714302,0.85142899},
									1
								},
								
								{
									{0.95571399,0.84571397},
									1
								},
								
								{
									{0.967143,0.83999997},
									1
								},
								
								{
									{0.94999999,0.83999997},
									1
								},
								
								{
									{0.967143,0.85428602},
									1
								},
								
								{
									{0.967143,0.83999997},
									1
								},
								{},
								
								{
									{0.89857101,0.73714298},
									1
								},
								
								{
									{0.90428603,0.73142898},
									1
								},
								
								{
									{0.912857,0.72571403},
									1
								},
								
								{
									{0.918571,0.722857},
									1
								},
								
								{
									{0.92714298,0.722857},
									1
								},
								
								{
									{0.93857098,0.722857},
									1
								},
								
								{
									{0.94428599,0.72571403},
									1
								},
								
								{
									{0.95285702,0.728571},
									1
								},
								
								{
									{0.95857102,0.73142898},
									1
								},
								
								{
									{0.96428603,0.73428601},
									1
								},
								
								{
									{0.967143,0.73714298},
									1
								},
								
								{
									{0.94714302,0.73714298},
									1
								},
								
								{
									{0.967143,0.72000003},
									1
								},
								
								{
									{0.967143,0.73714298},
									1
								},
								{},
								
								{
									"Horizont_Center",
									{0,-0.1955},
									1
								},
								
								{
									"Horizont_Center",
									{0.039928,-0.19252799},
									1
								},
								
								{
									"Horizont_Center",
									{0.078659996,-0.18371101},
									1
								},
								
								{
									"Horizont_Center",
									{0.115,-0.169303},
									1
								},
								
								{
									"Horizont_Center",
									{0.147844,-0.149753},
									1
								},
								
								{
									"Horizont_Center",
									{0.17618001,-0.12566701},
									1
								},
								
								{
									"Horizont_Center",
									{0.19918001,-0.097750001},
									1
								},
								
								{
									"Horizont_Center",
									{0.216131,-0.066861004},
									1
								},
								
								{
									"Horizont_Center",
									{0.226504,-0.033938799},
									1
								},
								
								{
									"Horizont_Center",
									{0.23,0},
									1
								},
								
								{
									"Horizont_Center",
									{0.226504,0.033938799},
									1
								},
								
								{
									"Horizont_Center",
									{0.216131,0.066861004},
									1
								},
								
								{
									"Horizont_Center",
									{0.19918001,0.097750001},
									1
								},
								
								{
									"Horizont_Center",
									{0.17618001,0.12566701},
									1
								},
								
								{
									"Horizont_Center",
									{0.147844,0.149753},
									1
								},
								
								{
									"Horizont_Center",
									{0.115,0.169303},
									1
								},
								
								{
									"Horizont_Center",
									{0.078659996,0.18371101},
									1
								},
								
								{
									"Horizont_Center",
									{0.039928,0.19252799},
									1
								},
								
								{
									"Horizont_Center",
									{0,0.1955},
									1
								},
								
								{
									"Horizont_Center",
									{-0.039928,0.19252799},
									1
								},
								
								{
									"Horizont_Center",
									{-0.078659996,0.18371101},
									1
								},
								
								{
									"Horizont_Center",
									{-0.115,0.169303},
									1
								},
								
								{
									"Horizont_Center",
									{-0.147844,0.149753},
									1
								},
								
								{
									"Horizont_Center",
									{-0.17618001,0.12566701},
									1
								},
								
								{
									"Horizont_Center",
									{-0.19918001,0.097750001},
									1
								},
								
								{
									"Horizont_Center",
									{-0.216131,0.066861004},
									1
								},
								
								{
									"Horizont_Center",
									{-0.226504,0.033938799},
									1
								},
								
								{
									"Horizont_Center",
									{-0.23,0},
									1
								},
								
								{
									"Horizont_Center",
									{-0.226504,-0.033938799},
									1
								},
								
								{
									"Horizont_Center",
									{-0.216131,-0.066861004},
									1
								},
								
								{
									"Horizont_Center",
									{-0.19918001,-0.097750001},
									1
								},
								
								{
									"Horizont_Center",
									{-0.17618001,-0.12566701},
									1
								},
								
								{
									"Horizont_Center",
									{-0.147844,-0.149753},
									1
								},
								
								{
									"Horizont_Center",
									{-0.115,-0.169303},
									1
								},
								
								{
									"Horizont_Center",
									{-0.078659996,-0.18371101},
									1
								},
								
								{
									"Horizont_Center",
									{-0.039928,-0.19252799},
									1
								},
								
								{
									"Horizont_Center",
									{0,-0.1955},
									1
								},
								{}
							};
						};
						class Static_3
						{
							width=3;
							points[]=
							{
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_10",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_10",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_20",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_20",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_40",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_40",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_50",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_50",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_70",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_70",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_80",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_80",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_100",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_100",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_110",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_110",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_130",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_130",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_140",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_140",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_160",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_160",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_170",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_170",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_190",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_190",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_200",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_200",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_220",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_220",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_230",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_230",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_250",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_250",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_260",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_260",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_280",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_280",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_290",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_290",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_310",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_310",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_320",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_320",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_340",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_340",
										0,
										0.22499999
									},
									1
								},
								{},
								{},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_350",
										0,
										0.25999999
									},
									1
								},
								
								{
									"Direction_Center",
									1,
									
									{
										"Rotation_350",
										0,
										0.22499999
									},
									1
								},
								{},
								{}
							};
						};
						class DrawPolygon
						{
							points[]=
							{
								
								{
									
									{
										"Direction_Center",
										{0,-0.039999999},
										1
									},
									
									{
										"Direction_Center",
										{0.0099999998,-0.039999999},
										1
									},
									
									{
										"Direction_Center",
										{0.0099999998,0.02},
										1
									},
									
									{
										"Direction_Center",
										{0,0.02},
										1
									}
								},
								
								{
									
									{
										"Direction_Center",
										{-0.0275,-0.029999999},
										1
									},
									
									{
										"Direction_Center",
										{0.037500001,-0.029999999},
										1
									},
									
									{
										"Direction_Center",
										{0.037500001,-0.02},
										1
									},
									
									{
										"Direction_Center",
										{-0.0275,-0.02},
										1
									}
								},
								
								{
									
									{
										"Direction_Center",
										{-0.0099999998,0},
										1
									},
									
									{
										"Direction_Center",
										{0.02,0},
										1
									},
									
									{
										"Direction_Center",
										{0.02,0.0099999998},
										1
									},
									
									{
										"Direction_Center",
										{-0.0099999998,0.0099999998},
										1
									}
								}
							};
						};
						class Rotation_0_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_0",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_0",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_0",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_30_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_30",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_30",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_30",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_60_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_60",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_60",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_60",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_90_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_90",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_90",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_90",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_120_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_120",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_120",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_120",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_150_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_150",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_150",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_150",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_180_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_180",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_180",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_180",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_210_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_210",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_210",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_210",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_240_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_240",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_240",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_240",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_270_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_270",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_270",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_270",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_300_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_300",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_300",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_300",
									0,
									-0.235
								},
								1
							};
						};
						class Rotation_330_Text
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_330",
									0,
									-0.25999999
								},
								1
							};
							right[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_330",
									-0.029999999,
									-0.25999999
								},
								1
							};
							down[]=
							{
								"Direction_Center",
								1,
								
								{
									"Rotation_Inv_330",
									0,
									-0.235
								},
								1
							};
						};
						class Black_Background
						{
							color[]={0,0,0};
							alpha=1;
							class DrawPolygon
							{
								points[]=
								{
									
									{
										
										{
											{0.44999999,0.47499999},
											1
										},
										
										{
											{0.55000001,0.47499999},
											1
										},
										
										{
											{0.55000001,0.51499999},
											1
										},
										
										{
											{0.44999999,0.51499999},
											1
										}
									}
								};
							};
						};
						class Static_Heading
						{
							width=3;
							points[]=
							{
								
								{
									{0.44999999,0.51340002},
									1
								},
								
								{
									{0.55000001,0.51340002},
									1
								},
								
								{
									{0.55000001,0.47260001},
									1
								},
								
								{
									{0.44999999,0.47260001},
									1
								},
								
								{
									{0.44999999,0.51340002},
									1
								},
								{}
							};
						};
						class HeadingNumber
						{
							source="heading";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.47999999},
								1
							};
							right[]=
							{
								{0.53500003,0.47999999},
								1
							};
							down[]=
							{
								{0.5,0.50999999},
								1
							};
						};
						class BtnILS
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.02,0.44},
								1
							};
							right[]=
							{
								{0.059999999,0.44},
								1
							};
							down[]=
							{
								{0.02,0.47},
								1
							};
						};
						class BtnCRS
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.97000003,0.75999999},
								1
							};
							right[]=
							{
								{1,0.75999999},
								1
							};
							down[]=
							{
								{0.97000003,0.78500003},
								1
							};
						};
						class BtnCRS_DIR
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.97000003,0.79000002},
								1
							};
							right[]=
							{
								{1,0.79000002},
								1
							};
							down[]=
							{
								{0.97000003,0.815},
								1
							};
						};
						class ClimbNumber
						{
							source="vspeed";
							sourceScale=30.799999;
							refreshRate=0.050000001;
							align="left";
							scale=1;
							pos[]=
							{
								{0.95499998,0.56},
								1
							};
							right[]=
							{
								{0.98000002,0.56},
								1
							};
							down[]=
							{
								{0.95499998,0.57999998},
								1
							};
						};
						class ClimbNumber0
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.97500002,0.56},
								1
							};
							right[]=
							{
								{1,0.56},
								1
							};
							down[]=
							{
								{0.97500002,0.57999998},
								1
							};
						};
						class ClimbArrow
						{
							width=4;
							points[]=
							{
								
								{
									"ClimbRotate",
									{-0.22499999,-0.0060000001},
									1
								},
								
								{
									"ClimbRotate",
									{-0.235,0},
									1
								},
								
								{
									"ClimbRotate",
									{-0.22499999,0.0060000001},
									1
								},
								
								{
									"ClimbRotate",
									{-0.22499999,-0.0060000001},
									1
								},
								{},
								
								{
									"ClimbRotate",
									{-0.235,0},
									1
								},
								
								{
									"ClimbRotate",
									{-0.175,0},
									1
								}
							};
						};
						class ClimbLine
						{
							width=4;
							points[]=
							{
								
								{
									{0.88,0.55000001},
									1
								},
								
								{
									{0.88,0.59399998},
									1
								},
								
								{
									{0.98000002,0.59399998},
									1
								},
								
								{
									{0.98000002,0.55000001},
									1
								},
								
								{
									{0.88,0.55000001},
									1
								},
								{}
							};
						};
					};
					class Group_Blue
					{
						color[]={0.02,0.87,0.89999998};
						class ClimbLine
						{
							width=4;
							points[]=
							{
								
								{
									{0.028571401,0.83999997},
									1
								},
								
								{
									{0.034285702,0.84571397},
									1
								},
								
								{
									{0.0457143,0.85142899},
									1
								},
								
								{
									{0.054285701,0.85428602},
									1
								},
								
								{
									{0.062857203,0.85428602},
									1
								},
								
								{
									{0.068571404,0.85428602},
									1
								},
								
								{
									{0.077142902,0.85142899},
									1
								},
								
								{
									{0.085714303,0.84571397},
									1
								},
								
								{
									{0.097142801,0.83999997},
									1
								},
								
								{
									{0.079999998,0.83999997},
									1
								},
								
								{
									{0.097142801,0.85428602},
									1
								},
								
								{
									{0.097142801,0.83999997},
									1
								},
								{},
								
								{
									{0.028571401,0.73714298},
									1
								},
								
								{
									{0.034285702,0.73142898},
									1
								},
								
								{
									{0.042857099,0.72571403},
									1
								},
								
								{
									{0.0485714,0.722857},
									1
								},
								
								{
									{0.057142898,0.722857},
									1
								},
								
								{
									{0.068571404,0.722857},
									1
								},
								
								{
									{0.074285701,0.72571403},
									1
								},
								
								{
									{0.082857102,0.728571},
									1
								},
								
								{
									{0.088571399,0.73142898},
									1
								},
								
								{
									{0.094285697,0.73428601},
									1
								},
								
								{
									{0.097142801,0.73714298},
									1
								},
								
								{
									{0.077142902,0.73714298},
									1
								},
								
								{
									{0.097142801,0.72000003},
									1
								},
								
								{
									{0.097142801,0.73714298},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.235,8.7313499e-009},
									1
								},
								
								{
									"ClimbFixed",
									{-0.25999999,9.6602202e-009},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.247567,-0.029574299},
									1
								},
								
								{
									"ClimbFixed",
									{-0.25747001,-0.030757301},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.225896,-0.055058599},
									1
								},
								
								{
									"ClimbFixed",
									{-0.249928,-0.060915802},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.228386,-0.086431503},
									1
								},
								
								{
									"ClimbFixed",
									{-0.23752201,-0.089888804},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.19929101,-0.105851},
									1
								},
								
								{
									"ClimbFixed",
									{-0.22049201,-0.117112},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.19151101,-0.136592},
									1
								},
								
								{
									"ClimbFixed",
									{-0.19917201,-0.142056},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.15724599,-0.148443},
									1
								},
								
								{
									"ClimbFixed",
									{-0.17397401,-0.164235},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.17397401,-0.164235},
									1
								},
								
								{
									"ClimbFixed",
									{-0.210344,-0.12990101},
									1
								},
								
								{
									"ClimbFixed",
									{-0.23752201,-0.089888804},
									1
								},
								
								{
									"ClimbFixed",
									{-0.254318,-0.045948502},
									1
								},
								
								{
									"ClimbFixed",
									{-0.25999999,9.6602202e-009},
									1
								}
							};
						};
						class Climb2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.76499999,0.49000001},
								1
							};
							right[]=
							{
								{0.79500002,0.49000001},
								1
							};
							down[]=
							{
								{0.76499999,0.51499999},
								1
							};
						};
						class Climb4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.79500002,0.43000001},
								1
							};
							right[]=
							{
								{0.82499999,0.43000001},
								1
							};
							down[]=
							{
								{0.79500002,0.45500001},
								1
							};
						};
						class Climb6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.83999997,0.38},
								1
							};
							right[]=
							{
								{0.87,0.38},
								1
							};
							down[]=
							{
								{0.83999997,0.405},
								1
							};
						};
						class BtnHDG
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.1,0.75999999},
								1
							};
							right[]=
							{
								{0.13,0.75999999},
								1
							};
							down[]=
							{
								{0.1,0.78500003},
								1
							};
						};
						class BtnHDG_DIR
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.1,0.79000002},
								1
							};
							right[]=
							{
								{0.13,0.79000002},
								1
							};
							down[]=
							{
								{0.1,0.815},
								1
							};
						};
					};
					class Group_Red
					{
						color[]={0.12,0,0};
						class ClimbLine
						{
							width=4;
							points[]=
							{
								
								{
									"ClimbFixed",
									{-0.244537,0.044181298},
									1
								},
								
								{
									"ClimbFixed",
									{-0.254318,0.045948502},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.214683,0.081245698},
									1
								},
								
								{
									"ClimbFixed",
									{-0.23752201,0.089888804},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.202254,0.124904},
									1
								},
								
								{
									"ClimbFixed",
									{-0.210344,0.12990101},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.15724599,0.148443},
									1
								},
								
								{
									"ClimbFixed",
									{-0.17397401,0.164235},
									1
								},
								{},
								
								{
									"ClimbFixed",
									{-0.25999999,9.6602202e-009},
									1
								},
								
								{
									"ClimbFixed",
									{-0.254318,0.045948502},
									1
								},
								
								{
									"ClimbFixed",
									{-0.23752201,0.089888804},
									1
								},
								
								{
									"ClimbFixed",
									{-0.210344,0.12990101},
									1
								},
								
								{
									"ClimbFixed",
									{-0.17397401,0.164235},
									1
								}
							};
						};
						class Climb2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.76499999,0.62},
								1
							};
							right[]=
							{
								{0.79500002,0.62},
								1
							};
							down[]=
							{
								{0.76499999,0.64499998},
								1
							};
						};
						class Climb4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.79500002,0.67000002},
								1
							};
							right[]=
							{
								{0.82499999,0.67000002},
								1
							};
							down[]=
							{
								{0.79500002,0.69499999},
								1
							};
						};
						class Climb6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.83999997,0.73000002},
								1
							};
							right[]=
							{
								{0.87,0.73000002},
								1
							};
							down[]=
							{
								{0.83999997,0.755},
								1
							};
						};
					};
					class SpeedScale
					{
						horizontal=0;
						source="speed";
						sourceScale=1.9438444;
						width=4;
						top=0.34999999;
						bottom=0.050000001;
						lineXleft=0.23;
						lineYright=0.2;
						lineXleftMajor=0.23;
						lineYrightMajor=0.18000001;
						majorLineEach=4;
						numberEach=4;
						step=5;
						stepSize=0.02;
						align="left";
						scale=1;
						pos[]={0.14,0.34};
						right[]={0.17,0.34};
						down[]={0.14,0.36500001};
					};
					class ALtitudeScale
					{
						horizontal=0;
						source="altitudeASL";
						sourceScale="0.001 * 3.2808399";
						sourceOffset=-6;
						sourcePrecision=1;
						width=4;
						top=0.34999999;
						bottom=0.050000001;
						lineXleft=0.76999998;
						lineYright=0.80000001;
						lineXleftMajor=0.76999998;
						lineYrightMajor=0.81999999;
						majorLineEach=4;
						numberEach=4;
						step=0.050000001;
						stepSize=0.02;
						align="left";
						scale=0.0099999998;
						pos[]={0.91000003,0.34};
						right[]={0.94,0.34};
						down[]={0.91000003,0.36500001};
					};
					class ScaleBackground
					{
						color[]={0,0,0};
						class DrawPolygon
						{
							points[]=
							{
								
								{
									
									{
										{0.07,0.17749999},
										1
									},
									
									{
										{0.14,0.17749999},
										1
									},
									
									{
										{0.14,0.22750001},
										1
									},
									
									{
										{0.07,0.22750001},
										1
									}
								},
								
								{
									
									{
										{0.14,0.155},
										1
									},
									
									{
										{0.18000001,0.155},
										1
									},
									
									{
										{0.18000001,0.25},
										1
									},
									
									{
										{0.14,0.25},
										1
									}
								},
								
								{
									
									{
										{0.18000001,0.19140001},
										1
									},
									
									{
										{0.2,0.20100001},
										1
									},
									
									{
										{0.18000001,0.2106},
										1
									}
								},
								
								{
									
									{
										{0.81999999,0.17749999},
										1
									},
									
									{
										{0.88999999,0.17749999},
										1
									},
									
									{
										{0.88999999,0.22750001},
										1
									},
									
									{
										{0.81999999,0.22750001},
										1
									}
								},
								
								{
									
									{
										{0.88999999,0.155},
										1
									},
									
									{
										{0.94,0.155},
										1
									},
									
									{
										{0.94,0.25},
										1
									},
									
									{
										{0.88999999,0.25},
										1
									}
								},
								
								{
									
									{
										{0.81999999,0.1934},
										1
									},
									
									{
										{0.80000001,0.20299999},
										1
									},
									
									{
										{0.81999999,0.21259999},
										1
									}
								}
							};
						};
						class DrawOutline
						{
							color[]={1,1,1};
							alpha=0.5;
							class Outline
							{
								width=4;
								points[]=
								{
									
									{
										{0.18000001,0.1875},
										1
									},
									
									{
										{0.18000001,0.1525},
										1
									},
									
									{
										{0.14,0.1525},
										1
									},
									
									{
										{0.14,0.17749999},
										1
									},
									
									{
										{0.07,0.17749999},
										1
									},
									
									{
										{0.07,0.22750001},
										1
									},
									
									{
										{0.14,0.22750001},
										1
									},
									
									{
										{0.14,0.2525},
										1
									},
									
									{
										{0.18000001,0.2525},
										1
									},
									
									{
										{0.18000001,0.21250001},
										1
									},
									
									{
										{0.2,0.2},
										1
									},
									
									{
										{0.18000001,0.1875},
										1
									},
									{},
									
									{
										{0.94,0.1525},
										1
									},
									
									{
										{0.88999999,0.1525},
										1
									},
									
									{
										{0.88999999,0.17749999},
										1
									},
									
									{
										{0.81999999,0.17749999},
										1
									},
									
									{
										{0.81999999,0.1875},
										1
									},
									
									{
										{0.80000001,0.2025},
										1
									},
									
									{
										{0.81999999,0.2175},
										1
									},
									
									{
										{0.81999999,0.22750001},
										1
									},
									
									{
										{0.88999999,0.22750001},
										1
									},
									
									{
										{0.88999999,0.2525},
										1
									},
									
									{
										{0.94,0.2525},
										1
									},
									
									{
										{0.94,0.1525},
										1
									}
								};
							};
							class SpeedText
							{
								source="speed";
								scale=1;
								sourceScale=0.19438399;
								sourcePrecision=0;
								sourceLength=1;
								sourceOffset=-0.47999999;
								align="left";
								pos[]=
								{
									{0.14,0.19},
									1
								};
								right[]=
								{
									{0.175,0.19},
									1
								};
								down[]=
								{
									{0.14,0.22},
									1
								};
							};
							class ClipScale
							{
								clipTL[]={0.147,0.15000001};
								clipBR[]={0.17,0.25};
								class SpeedScale
								{
									horizontal=0;
									source="speed";
									sourceScale=1.9438444;
									sourceLength=4;
									width=4;
									top=0.34999999;
									bottom=0.050000001;
									lineXleft=0;
									lineYright=0;
									lineXleftMajor=0;
									lineYrightMajor=0;
									majorLineEach=1;
									numberEach=1;
									step=1;
									stepSize=0.033333302;
									align="left";
									scale=1;
									pos[]={0.145,0.34};
									right[]={0.175,0.34};
									down[]={0.145,0.36500001};
								};
							};
							class AltitudeText
							{
								source="altitudeAGL";
								scale=1;
								sourceScale=0.032808401;
								sourcePrecision=0;
								sourceLength=3;
								sourceOffset=-0.47999999;
								align="left";
								pos[]=
								{
									{0.89499998,0.19},
									1
								};
								right[]=
								{
									{0.92299998,0.19},
									1
								};
								down[]=
								{
									{0.89499998,0.215},
									1
								};
							};
							class ClipScale2
							{
								clipTL[]={0.89499998,0.15000001};
								clipBR[]={0.935,0.25};
								class SpeedScale
								{
									horizontal=0;
									source="altitudeASL";
									sourceScale="3.2808399*0.1";
									sourceOffset=-6;
									sourceLength=6;
									sourcePrecision=0;
									top=0.34999999;
									bottom=0.050000001;
									lineXleft=0;
									lineYright=0;
									lineXleftMajor=0;
									lineYrightMajor=0;
									majorLineEach=1;
									numberEach=1;
									step=1;
									stepSize=0.033333302;
									align="left";
									scale=1;
									pos[]={0.88499999,0.34};
									right[]={0.91000003,0.34};
									down[]={0.88499999,0.36000001};
								};
							};
							class ClipScale3
							{
								clipTL[]={0.91500002,0.15000001};
								clipBR[]={0.935,0.25};
								class SpeedScale
								{
									horizontal=0;
									source="altitudeASL";
									sourceScale="3.2808399*0.1";
									sourceOffset=-6;
									sourceLength=10;
									sourcePrecision=2;
									top=0.34999999;
									bottom=0.050000001;
									lineXleft=0;
									lineYright=0;
									lineXleftMajor=0;
									lineYrightMajor=0;
									majorLineEach=1;
									numberEach=1;
									step=1;
									stepSize=0.033333302;
									align="left";
									scale=1;
									pos[]={0.90499997,0.34};
									right[]={0.93000001,0.34};
									down[]={0.90499997,0.36000001};
								};
							};
						};
					};
					class WPvalid
					{
						condition="wpvalid";
						class WPIndex
						{
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									"0.02+0.07",
									0.52999997
								},
								1
							};
							right[]=
							{
								{0.12,0.52999997},
								1
							};
							down[]=
							{
								
								{
									"0.02+0.07",
									0.55500001
								},
								1
							};
						};
						class WPdist
						{
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.02,
									"0.53+0.045"
								},
								1
							};
							right[]=
							{
								
								{
									0.050000001,
									"0.53+0.045"
								},
								1
							};
							down[]=
							{
								{0.02,0.60000002},
								1
							};
						};
						class WPstatic
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.02,0.52999997},
								1
							};
							right[]=
							{
								{0.050000001,0.52999997},
								1
							};
							down[]=
							{
								{0.02,0.55500001},
								1
							};
						};
						class WPTime
						{
							source="userText";
							sourceIndex=1;
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.02,0.62},
								1
							};
							right[]=
							{
								{0.050000001,0.62},
								1
							};
							down[]=
							{
								{0.02,0.64499998},
								1
							};
						};
					};
					class WPNone
					{
						condition="1-wpvalid";
						class WPTex1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.02,0.54000002},
								1
							};
							right[]=
							{
								{0.059999999,0.54000002},
								1
							};
							down[]=
							{
								{0.02,0.56999999},
								1
							};
						};
						class WPTex2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.02,0.58999997},
								1
							};
							right[]=
							{
								{0.059999999,0.58999997},
								1
							};
							down[]=
							{
								{0.02,0.62},
								1
							};
						};
					};
					class Purple
					{
						color[]={0.11,0.02,0.12};
						alpha=0.40000001;
						class WP
						{
							condition="wpvalid";
							class Draw
							{
								points[]={};
							};
							class Polygon
							{
								points[]=
								{
									
									{
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.0099999998,
												-0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.0099999998,
												-0.29249999
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.29249999
											},
											1
										}
									},
									
									{
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0,
												0.29249999
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.022,
												0.2775
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.022,
												0.2775
											},
											1
										}
									},
									
									{
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.014,
												0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.014,
												0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.014,
												0.2775
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.014,
												0.2775
											},
											1
										}
									}
								};
							};
						};
					};
					class BtnIND
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.14,0.94},
							1
						};
						right[]=
						{
							{0.18000001,0.94},
							1
						};
						down[]=
						{
							{0.14,0.97000003},
							1
						};
					};
					class BtnEW
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.62,0.94},
							1
						};
						right[]=
						{
							{0.66000003,0.94},
							1
						};
						down[]=
						{
							{0.62,0.97000003},
							1
						};
					};
					class BtnDCLT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.755,0.94},
							1
						};
						right[]=
						{
							{0.79500002,0.94},
							1
						};
						down[]=
						{
							{0.755,0.97000003},
							1
						};
					};
					class BtnBCN
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.13,0.40000001},
							1
						};
						right[]=
						{
							{0.16,0.40000001},
							1
						};
						down[]=
						{
							{0.13,0.41999999},
							1
						};
					};
					class BtnL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.23999999,0.40000001},
							1
						};
						right[]=
						{
							{0.27000001,0.40000001},
							1
						};
						down[]=
						{
							{0.23999999,0.41999999},
							1
						};
					};
					class MText
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.050000001,0.35499999},
							1
						};
						right[]=
						{
							{0.075000003,0.35499999},
							1
						};
						down[]=
						{
							{0.050000001,0.375},
							1
						};
					};
					class AtmPressText
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.94999999,0.35499999},
							1
						};
						right[]=
						{
							{0.97500002,0.35499999},
							1
						};
						down[]=
						{
							{0.94999999,0.375},
							1
						};
					};
					class GreenPolygon
					{
						points[]=
						{
							
							{
								
								{
									{0.27000001,0.93000001},
									1
								},
								
								{
									{0.41499999,0.93000001},
									1
								},
								
								{
									{0.41499999,0.98000002},
									1
								},
								
								{
									{0.27000001,0.98000002},
									1
								}
							}
						};
					};
					class BlackText
					{
						color[]={0,0,0};
						alpha=1;
						class BtnEICAS1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31,0.94},
								1
							};
							right[]=
							{
								{0.34,0.94},
								1
							};
							down[]=
							{
								{0.31,0.96499997},
								1
							};
						};
						class BtnEICAS2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31,0.94},
								1
							};
							right[]=
							{
								{0.34,0.94},
								1
							};
							down[]=
							{
								{0.31,0.96499997},
								1
							};
						};
						class BtnEICAS3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31,0.94},
								1
							};
							right[]=
							{
								{0.34,0.94},
								1
							};
							down[]=
							{
								{0.31,0.96499997},
								1
							};
						};
					};
				};
			};
			class HUD_BFI
			{
				topLeft="Pilot_BFI_Top_Left";
				topRight="Pilot_BFI_Top_Right";
				bottomLeft="Pilot_BFI_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Horizont_Center
					{
						pos[]={0.49000001,0.5};
					};
					class Horizont_Rotate
					{
						source="horizonBank";
						sourceScale=1;
						min="rad(-360)";
						max="rad(360)";
						minAngle="360-180";
						maxAngle="-360-180";
						aspectRatio=1.09302;
					};
					class HorizonBankRot
					{
						source="gmeterXgrav";
						min=-1;
						max=1;
						minPos[]={0.28999999,0.89999998};
						maxPos[]={0.69,0.89999998};
						aspectRatio=1;
					};
					class L_Center
					{
						pos[]={0.25,0.41};
					};
					class Level0
					{
						pos0[]={0.5,0.495};
						pos10[]={0.801,0.824};
						angle=0;
					};
					class Level0_Background: Level0
					{
						pos0[]={0,0};
						pos10[]={0.301,0.329};
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					condition="on";
					alpha=0.30000001;
					color[]={1,1,1};
					class HorizontBackground
					{
						color[]={0,0.54000002,0.81999999};
						alpha=0.2;
						clipTL[]={0.17,0.2};
						clipBR[]={0.80000001,0.81999999};
						class Static
						{
							points[]=
							{
								
								{
									
									{
										"Level0",
										{-10,-20},
										1
									},
									
									{
										"Level0",
										{10,-20},
										1
									},
									
									{
										"Level0",
										{10,0},
										1
									},
									
									{
										"Level0",
										{-10,0},
										1
									}
								}
							};
						};
						class StaticBlack
						{
							color[]={0.2,0.079999998,0};
							alpha=0.2;
							class Static
							{
								points[]=
								{
									
									{
										
										{
											"Level0",
											{-10,0},
											1
										},
										
										{
											"Level0",
											{10,0},
											1
										},
										
										{
											"Level0",
											{10,20},
											1
										},
										
										{
											"Level0",
											{-10,20},
											1
										}
									}
								};
							};
						};
						class HorizontWhite
						{
							color[]={1,1,1};
							alpha=0.89999998;
							class Dimmed
							{
								class Level0
								{
									width=3;
									points[]=
									{
										
										{
											"Level0",
											{0.75,0},
											1
										},
										
										{
											"Level0",
											{-0.75,0},
											1
										}
									};
								};
							};
							class Level0
							{
								width=16;
								points[]={};
							};
							class LevelP5: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP5",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP5",
										{0.086000003,-0.039999999},
										1
									},
									{},
									
									{
										"LevelP5",
										{-0.16599999,0.039999999},
										1
									},
									
									{
										"LevelP5",
										{0.16599999,0.039999999},
										1
									}
								};
							};
							class LevelP10: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP10",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP10",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP10",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP10",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_10
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_10_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP15: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP15",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP15",
										{0.086000003,-0.039999999},
										1
									},
									{},
									
									{
										"LevelP15",
										{-0.16599999,0.039999999},
										1
									},
									
									{
										"LevelP15",
										{0.16599999,0.039999999},
										1
									}
								};
							};
							class LevelP20: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP20",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP20",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP20",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP20",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_20
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_20_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP25: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP25",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP25",
										{0.086000003,-0.039999999},
										1
									},
									{},
									
									{
										"LevelP25",
										{-0.16599999,0.039999999},
										1
									},
									
									{
										"LevelP25",
										{0.16599999,0.039999999},
										1
									}
								};
							};
							class LevelP30: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP30",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP30",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP30",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP30",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_30
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_30_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP35: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP35",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP35",
										{0.086000003,-0.039999999},
										1
									},
									{},
									
									{
										"LevelP35",
										{-0.16599999,0.039999999},
										1
									},
									
									{
										"LevelP35",
										{0.16599999,0.039999999},
										1
									}
								};
							};
							class LevelP40: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP40",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP40",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP40",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP40",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_40
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_40_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP45: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP45",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP45",
										{0.086000003,-0.039999999},
										1
									},
									{},
									
									{
										"LevelP45",
										{-0.16599999,0.039999999},
										1
									},
									
									{
										"LevelP45",
										{0.16599999,0.039999999},
										1
									}
								};
							};
							class LevelP50: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP50",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP50",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP50",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP50",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_50
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_50_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP60: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP60",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP60",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP60",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP60",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_60
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP60",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_60_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP60",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP60",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP70: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP70",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP70",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP70",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP70",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_70
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP70",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_70_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP70",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP70",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP80: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP80",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP80",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP80",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP80",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_80
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP80",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_80_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP80",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP80",
									{0.28999999,0.079999998},
									1
								};
							};
							class LevelP90: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelP90",
										{-0.24600001,0.039999999},
										1
									},
									
									{
										"LevelP90",
										{0.24600001,0.039999999},
										1
									},
									{},
									
									{
										"LevelP90",
										{-0.086000003,-0.039999999},
										1
									},
									
									{
										"LevelP90",
										{0.086000003,-0.039999999},
										1
									}
								};
							};
							class VALP_1_90
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{-0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP90",
									{-0.23999999,0.029999999},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.28999999,0.079999998},
									1
								};
							};
							class VALP_1_90_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{0.28999999,0.029999999},
									1
								};
								right[]=
								{
									"LevelP90",
									{0.34,0.029999999},
									1
								};
								down[]=
								{
									"LevelP90",
									{0.28999999,0.079999998},
									1
								};
							};
						};
						class HorizontBlack
						{
							color[]={1,1,1};
							alpha=0.30000001;
							class Level0
							{
								width=7;
								points[]={};
							};
							class LevelM5: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM5",
										{-0.16599999,-0.039999999},
										1
									},
									
									{
										"LevelM5",
										{0.16599999,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM5",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class LevelM10: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM10",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM10",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM10",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_10
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM10",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_10_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM10",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.28999999,0},
									1
								};
							};
							class LevelM15: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM15",
										{-0.16599999,-0.039999999},
										1
									},
									
									{
										"LevelM15",
										{0.16599999,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM15",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class LevelM20: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM20",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM20",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM20",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_20
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM20",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_20_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM20",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.28999999,0},
									1
								};
							};
							class LevelM25: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM25",
										{-0.16599999,-0.039999999},
										1
									},
									
									{
										"LevelM25",
										{0.16599999,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM25",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class LevelM30: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM30",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM30",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM30",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_30
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM30",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_30_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM30",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.28999999,0},
									1
								};
							};
							class LevelM35: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM35",
										{-0.16599999,-0.039999999},
										1
									},
									
									{
										"LevelM35",
										{0.16599999,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM35",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class LevelM40: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM40",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM40",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM40",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_40
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM40",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_40_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM40",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.28999999,0},
									1
								};
							};
							class LevelM45: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM45",
										{-0.16599999,-0.039999999},
										1
									},
									
									{
										"LevelM45",
										{0.16599999,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM45",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class LevelM50: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM50",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM50",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM50",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_50
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM50",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_50_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM50",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.28999999,0},
									1
								};
							};
							class LevelM60: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM60",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM60",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM60",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_60
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM60",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_60_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM60",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM60",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM60",
									{0.28999999,0},
									1
								};
							};
							class LevelM70: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM70",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM70",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM70",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_70
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM70",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_70_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM70",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM70",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM70",
									{0.28999999,0},
									1
								};
							};
							class LevelM80: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM80",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM80",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM80",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_80
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM80",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_80_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM80",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM80",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM80",
									{0.28999999,0},
									1
								};
							};
							class LevelM90: Level0
							{
								width=3;
								points[]=
								{
									
									{
										"LevelM90",
										{-0.24600001,-0.039999999},
										1
									},
									
									{
										"LevelM90",
										{0.24600001,-0.039999999},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.086000003,0.039999999},
										1
									},
									
									{
										"LevelM90",
										{0.086000003,0.039999999},
										1
									}
								};
							};
							class VALM_1_90
							{
								source="static";
								align="left";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM90",
									{-0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.23999999,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.28999999,0},
									1
								};
							};
							class VALM_1_90_R
							{
								source="static";
								align="right";
								scale=1;
								sourceScale=1;
								sourceLength=2;
								pos[]=
								{
									"LevelM90",
									{0.28999999,-0.050000001},
									1
								};
								right[]=
								{
									"LevelM90",
									{0.34,-0.050000001},
									1
								};
								down[]=
								{
									"LevelM90",
									{0.28999999,0},
									1
								};
							};
						};
						class HorizonYellow
						{
							color[]={0.62,0.36000001,0};
							alpha=0.89999998;
							class Static
							{
								width=8;
								points[]={};
							};
						};
						class Black
						{
							color[]={0,0,0};
							alpha=1;
							class Static
							{
								points[]=
								{
									
									{
										
										{
											"Horizont_Center",
											{0.1,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{0.22,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{0.22,0.015},
											1
										},
										
										{
											"Horizont_Center",
											{0.1,0.015},
											1
										}
									},
									
									{
										
										{
											"Horizont_Center",
											{0.1,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{0.13,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{0.13,0.046999998},
											1
										},
										
										{
											"Horizont_Center",
											{0.1,0.046999998},
											1
										}
									},
									
									{
										
										{
											"Horizont_Center",
											{-0.22,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{-0.1,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{-0.1,0.015},
											1
										},
										
										{
											"Horizont_Center",
											{-0.22,0.015},
											1
										}
									},
									
									{
										
										{
											"Horizont_Center",
											{-0.13,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{-0.1,-0.015},
											1
										},
										
										{
											"Horizont_Center",
											{-0.1,0.046999998},
											1
										},
										
										{
											"Horizont_Center",
											{-0.13,0.046999998},
											1
										}
									}
								};
							};
						};
					};
					class Static
					{
						width=6;
						points[]=
						{
							
							{
								{0.050000001,0.82999998},
								1
							},
							
							{
								{0.17,0.82999998},
								1
							},
							
							{
								{0.17,0.13},
								1
							},
							{},
							
							{
								{0.94999999,0.82999998},
								1
							},
							
							{
								{0.80000001,0.82999998},
								1
							},
							
							{
								{0.80000001,0.18000001},
								1
							},
							
							{
								{0.94999999,0.18000001},
								1
							},
							{},
							
							{
								{0.208,0.85500002},
								1
							},
							
							{
								{0.77200001,0.85500002},
								1
							},
							
							{
								{0.77200001,0.94},
								1
							},
							
							{
								{0.208,0.94},
								1
							},
							
							{
								{0.208,0.85500002},
								1
							},
							{},
							
							{
								{0.537,0.85500002},
								1
							},
							
							{
								{0.537,0.94},
								1
							},
							{},
							
							{
								{0.44299999,0.94},
								1
							},
							
							{
								{0.44299999,0.85500002},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{-0.023,-0.015},
								1
							},
							
							{
								"Horizont_Center",
								{0.023,-0.015},
								1
							},
							
							{
								"Horizont_Center",
								{0.023,0.015},
								1
							},
							
							{
								"Horizont_Center",
								{-0.023,0.015},
								1
							},
							
							{
								"Horizont_Center",
								{-0.023,-0.015},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{-0.1,-0.015},
								1
							},
							
							{
								"Horizont_Center",
								{-0.22,-0.015},
								1
							},
							
							{
								"Horizont_Center",
								{-0.22,0.015},
								1
							},
							
							{
								"Horizont_Center",
								{-0.13,0.015},
								1
							},
							
							{
								"Horizont_Center",
								{-0.13,0.045000002},
								1
							},
							
							{
								"Horizont_Center",
								{-0.1,0.045000002},
								1
							},
							
							{
								"Horizont_Center",
								{-0.1,-0.015},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{0.1,-0.015},
								1
							},
							
							{
								"Horizont_Center",
								{0.22,-0.015},
								1
							},
							
							{
								"Horizont_Center",
								{0.22,0.015},
								1
							},
							
							{
								"Horizont_Center",
								{0.13,0.015},
								1
							},
							
							{
								"Horizont_Center",
								{0.13,0.045000002},
								1
							},
							
							{
								"Horizont_Center",
								{0.1,0.045000002},
								1
							},
							
							{
								"Horizont_Center",
								{0.1,-0.015},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{-4.0214498e-008,-0.25139499},
								1
							},
							
							{
								"Horizont_Center",
								{-4.7208299e-008,-0.29511601},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{0.0530276,-0.26144299},
								1
							},
							
							{
								"Horizont_Center",
								{0.058438599,-0.28812101},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{0.0950891,-0.22288799},
								1
							},
							
							{
								"Horizont_Center",
								{0.111994,-0.26251301},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{0.136971,-0.19510999},
								1
							},
							
							{
								"Horizont_Center",
								{0.15219,-0.21678799},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{0.1647,-0.15105499},
								1
							},
							
							{
								"Horizont_Center",
								{0.183851,-0.16862001},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{-0.053027701,-0.26144299},
								1
							},
							
							{
								"Horizont_Center",
								{-0.0584387,-0.28812101},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{-0.0950891,-0.22288799},
								1
							},
							
							{
								"Horizont_Center",
								{-0.111994,-0.26251301},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{-0.136971,-0.19510999},
								1
							},
							
							{
								"Horizont_Center",
								{-0.15219,-0.21678799},
								1
							},
							{},
							
							{
								"Horizont_Center",
								{-0.1647,-0.15105499},
								1
							},
							
							{
								"Horizont_Center",
								{-0.183851,-0.16862001},
								1
							},
							{}
						};
					};
					class Polygon
					{
						points[]=
						{
							
							{
								
								{
									"Horizont_Rotate",
									{0.02,-0.229},
									1
								},
								
								{
									"Horizont_Rotate",
									{0,-0.25099999},
									1
								},
								
								{
									"Horizont_Rotate",
									{-0.02,-0.229},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0052094501,-0.0322925},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0102606,-0.0308132},
									1
								},
								
								{
									"HorizonBankRot",
									{0.015,-0.028397599},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.015,-0.028397599},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0192836,-0.0251191},
									1
								},
								
								{
									"HorizonBankRot",
									{0.022981299,-0.021077501},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.022981299,-0.021077501},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0259808,-0.016395301},
									1
								},
								
								{
									"HorizonBankRot",
									{0.028190801,-0.0112151},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.028190801,-0.0112151},
									1
								},
								
								{
									"HorizonBankRot",
									{0.029544201,-0.0056940401},
									1
								},
								
								{
									"HorizonBankRot",
									{0.029999999,1.43333e-009},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.029999999,1.43333e-009},
									1
								},
								
								{
									"HorizonBankRot",
									{0.029544201,0.0056940499},
									1
								},
								
								{
									"HorizonBankRot",
									{0.028190801,0.0112151},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.028190801,0.0112151},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0259808,0.016395399},
									1
								},
								
								{
									"HorizonBankRot",
									{0.022981299,0.021077501},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.022981299,0.021077501},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0192836,0.0251191},
									1
								},
								
								{
									"HorizonBankRot",
									{0.015,0.028397599},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.015,0.028397599},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0102606,0.0308132},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0052094501,0.0322925},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0052094501,0.0322925},
									1
								},
								
								{
									"HorizonBankRot",
									{-2.6226801e-009,0.032790702},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0052094501,0.0322925},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0052094501,0.0322925},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0102606,0.0308132},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.015,0.028397599},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.015,0.028397599},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0192836,0.0251191},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.022981299,0.021077501},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.022981299,0.021077501},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0259808,0.016395301},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.028190801,0.0112151},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.028190801,0.0112151},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.029544201,0.0056940401},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.029999999,-3.9102499e-010},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.029999999,-3.9102499e-010},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.029544201,-0.0056940601},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.028190801,-0.0112151},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.028190801,-0.0112151},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0259808,-0.016395399},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.022981299,-0.021077501},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.022981299,-0.021077501},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0192836,-0.0251191},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.015,-0.028397599},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.015,-0.028397599},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0102606,-0.0308132},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0052094399,-0.0322925},
									1
								}
							},
							
							{
								
								{
									"HorizonBankRot",
									1,
									{0,0},
									1
								},
								
								{
									"HorizonBankRot",
									{-0.0052094399,-0.0322925},
									1
								},
								
								{
									"HorizonBankRot",
									{5.2453699e-009,-0.032790702},
									1
								},
								
								{
									"HorizonBankRot",
									{0.0052094501,-0.0322925},
									1
								}
							}
						};
					};
					class Group_Green
					{
						color[]={0,0.15000001,0};
						alpha=0.40000001;
						class AtmPressText
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.89999998,0.090000004},
								1
							};
							right[]=
							{
								{0.94999999,0.090000004},
								1
							};
							down[]=
							{
								{0.89999998,0.155},
								1
							};
						};
						class AtmPressText2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.98000002,0.115},
								1
							};
							right[]=
							{
								{1.01,0.115},
								1
							};
							down[]=
							{
								{0.98000002,0.155},
								1
							};
						};
					};
					class SpeedScale
					{
						horizontal=0;
						source="speed";
						sourceScale=1.9438444;
						width=4;
						top=0.81999999;
						bottom=0.17;
						lineXleft=0.17;
						lineYright=0.17;
						lineXleftMajor=0.17;
						lineYrightMajor=0.12;
						majorLineEach=4;
						numberEach=4;
						step=5;
						stepSize=0.043333299;
						align="left";
						scale=1;
						pos[]={0.14,0.73000002};
						right[]={0.18000001,0.73000002};
						down[]={0.14,0.76999998};
					};
					class ClipScaleAlt
					{
						clipTL[]={0.147,0.15000001};
						clipBR[]={0.97000003,0.75};
						class ALtitudeScale
						{
							horizontal=0;
							source="altitudeASL";
							sourceScale="1 * 3.2808399";
							sourceOffset=-6;
							sourcePrecision=0;
							width=4;
							top=0.81999999;
							bottom=0.17;
							lineXleft=0.86000001;
							lineYright=0.86000001;
							lineXleftMajor=0.81;
							lineYrightMajor=0.86000001;
							majorLineEach=4;
							numberEach=4;
							step=5;
							stepSize=0.051333301;
							align="left";
							scale=0.0099999998;
							pos[]={0.89999998,0.76999998};
							right[]={0.93000001,0.76999998};
							down[]={0.89999998,0.80000001};
						};
					};
					class ScaleBackground
					{
						color[]={0,0,0};
						alpha=1;
						class DrawPolygon
						{
							points[]=
							{
								
								{
									
									{
										{0.039999999,0.44999999},
										1
									},
									
									{
										{0.18000001,0.44999999},
										1
									},
									
									{
										{0.18000001,0.54500002},
										1
									},
									
									{
										{0.039999999,0.54500002},
										1
									}
								},
								
								{
									
									{
										{0.79000002,0.44999999},
										1
									},
									
									{
										{0.98000002,0.44999999},
										1
									},
									
									{
										{0.98000002,0.54500002},
										1
									},
									
									{
										{0.79000002,0.54500002},
										1
									}
								}
							};
						};
						class DrawOutline
						{
							color[]={1,1,1};
							alpha=0.2;
							class Outline
							{
								width=4;
								points[]=
								{
									
									{
										{0.039999999,0.44999999},
										1
									},
									
									{
										{0.18000001,0.44999999},
										1
									},
									
									{
										{0.18000001,0.54500002},
										1
									},
									
									{
										{0.039999999,0.54500002},
										1
									},
									
									{
										{0.039999999,0.44999999},
										1
									},
									{},
									
									{
										{0.79000002,0.44999999},
										1
									},
									
									{
										{0.98000002,0.44999999},
										1
									},
									
									{
										{0.98000002,0.54500002},
										1
									},
									
									{
										{0.79000002,0.54500002},
										1
									},
									
									{
										{0.79000002,0.44999999},
										1
									}
								};
							};
							class SpeedText
							{
								source="speed";
								scale=1;
								sourceScale=0.19438399;
								sourcePrecision=0;
								sourceLength=1;
								sourceOffset=-0.47999999;
								align="left";
								pos[]=
								{
									{0.14,0.47499999},
									1
								};
								right[]=
								{
									{0.185,0.47499999},
									1
								};
								down[]=
								{
									{0.14,0.51999998},
									1
								};
							};
							class ClipScale
							{
								clipTL[]={0.147,0.44999999};
								clipBR[]={0.17,0.55000001};
								class SpeedScale
								{
									horizontal=0;
									source="speed";
									sourceScale=1.9438444;
									sourceLength=4;
									width=4;
									top=0.34999999;
									bottom=0.050000001;
									lineXleft=0;
									lineYright=0;
									lineXleftMajor=0;
									lineYrightMajor=0;
									majorLineEach=1;
									numberEach=1;
									step=1;
									stepSize=0.033333302;
									align="left";
									scale=1;
									pos[]={0.145,0.63999999};
									right[]={0.175,0.63999999};
									down[]={0.145,0.66500002};
								};
							};
							class AltitudeText
							{
								source="altitudeAGL";
								scale=1;
								sourceScale=0.032808401;
								sourcePrecision=0;
								sourceLength=3;
								sourceOffset=-0.47999999;
								align="left";
								pos[]=
								{
									{0.91000003,0.47499999},
									1
								};
								right[]=
								{
									{0.95499998,0.47499999},
									1
								};
								down[]=
								{
									{0.91000003,0.51999998},
									1
								};
							};
							class ClipScale2
							{
								clipTL[]={0.91500002,0.44999999};
								clipBR[]={0.94499999,0.55000001};
								class SpeedScale
								{
									horizontal=0;
									source="altitudeASL";
									sourceScale="3.2808399*0.1";
									sourceOffset=-6;
									sourceLength=6;
									sourcePrecision=0;
									top=0.34999999;
									bottom=0.050000001;
									lineXleft=0;
									lineYright=0;
									lineXleftMajor=0;
									lineYrightMajor=0;
									majorLineEach=1;
									numberEach=1;
									step=1;
									stepSize=0.033333302;
									align="left";
									scale=1;
									pos[]={0.903,0.63999999};
									right[]={0.93300003,0.63999999};
									down[]={0.903,0.67000002};
								};
							};
							class ClipScale3
							{
								clipTL[]={0.94999999,0.44999999};
								clipBR[]={0.97500002,0.55000001};
								class SpeedScale
								{
									horizontal=0;
									source="altitudeASL";
									sourceScale="3.2808399*0.1";
									sourceOffset=-6;
									sourceLength=10;
									sourcePrecision=2;
									top=0.34999999;
									bottom=0.050000001;
									lineXleft=0;
									lineYright=0;
									lineXleftMajor=0;
									lineYrightMajor=0;
									majorLineEach=1;
									numberEach=1;
									step=1;
									stepSize=0.033333302;
									align="left";
									scale=1;
									pos[]={0.91399997,0.63999999};
									right[]={0.94400001,0.63999999};
									down[]={0.91399997,0.67000002};
								};
							};
						};
					};
				};
			};
			class MFD_Right_Engine
			{
				topLeft="HUD_4_Top_Left";
				topRight="HUD_4_Top_Right";
				bottomLeft="HUD_4_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-2};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class TQ_Center
					{
						pos[]={0.227,0.29300001};
					};
					class TQ_Center_Rotate
					{
						source="throttle";
						sourceScale=1;
						min=0.2;
						max=1;
						minAngle=-420;
						maxAngle=-180;
						aspectRatio=0.75806499;
					};
					class T5_Center
					{
						pos[]={0.51800001,0.29300001};
					};
					class T5_Center_Rotate: TQ_Center_Rotate
					{
						source="rpm";
						min=0;
						max=1;
						maxAngle=-220;
					};
					class Roll_Center
					{
						pos[]={0.105,0.63999999};
					};
					class Roll_Center_Rotate: TQ_Center_Rotate
					{
						source="horizonBank";
						min="rad(-45)";
						max="rad(45)";
						minAngle=-315;
						maxAngle=-405;
					};
					class Pitch_Center_Linear
					{
						source="horizonDive";
						sourceScale=57.29578;
						min=-30;
						max=30;
						minPos[]={0,-0.0425};
						maxPos[]={0,0.0425};
					};
					class Yaw_Center_Linear
					{
						refreshRate=0.30000001;
						source="gmeterX";
						sourceScale=3;
						min=-25;
						max=25;
						minPos[]={0.0425,0};
						maxPos[]={-0.0425,0};
					};
					class Fuel_Center
					{
						pos[]={0.64600003,0.70999998};
					};
					class FuelFlowRot1
					{
						source="fuel";
						sourceScale=8.5;
						min=0;
						max=1;
						minAngle=-92;
						maxAngle=-111.5;
						aspectRatio=0.75806499;
					};
					class FuelFlowRot2: FuelFlowRot1
					{
						maxAngle=-103;
						max=1;
					};
					class FuelFlowRot3: FuelFlowRot1
					{
						maxAngle=-94.5;
						max=1.5;
					};
					class FuelFlowRot4: FuelFlowRot1
					{
						maxAngle=-86;
						max=2;
					};
					class FuelFlowRot5: FuelFlowRot1
					{
						maxAngle=-77.5;
						max=2.5;
					};
					class FuelFlowRot6: FuelFlowRot1
					{
						maxAngle=-69;
						max=3;
					};
					class FuelFlowRot7: FuelFlowRot1
					{
						maxAngle=-60.5;
						max=3.5;
					};
					class FuelFlowRot8: FuelFlowRot1
					{
						maxAngle=-52;
						max=4;
					};
					class FuelFlowRot9: FuelFlowRot1
					{
						maxAngle=-43.5;
						max=4.5;
					};
					class FuelFlowRot10: FuelFlowRot1
					{
						maxAngle=-35;
						max=5;
					};
					class FuelFlowRot11: FuelFlowRot1
					{
						maxAngle=-26.5;
						max=5.5;
					};
					class FuelFlowRot12: FuelFlowRot1
					{
						maxAngle=-18;
						max=6;
					};
					class FuelFlowRot13: FuelFlowRot1
					{
						maxAngle=-9.5;
						max=6.5;
					};
					class FuelFlowRot14: FuelFlowRot1
					{
						maxAngle=-1;
						max=7;
					};
					class FuelFlowRot15: FuelFlowRot1
					{
						maxAngle=7.5;
						max=7.5;
					};
					class FuelFlowRot16: FuelFlowRot1
					{
						maxAngle=16;
						max=8;
					};
					class FuelFlowRot17: FuelFlowRot1
					{
						maxAngle=24.5;
						max=8.5;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user5>=0)*(user5<=0)";
					class DarkBlue
					{
						color[]={0,0.0099999998,0.079999998};
						class Lines
						{
							width=12;
							points[]=
							{
								
								{
									{0.025,0.92000002},
									1
								},
								
								{
									{0.97500002,0.92000002},
									1
								},
								{},
								
								{
									{0.025,0.495},
									1
								},
								
								{
									{0.97500002,0.495},
									1
								},
								{},
								
								{
									{0.025,0.77499998},
									1
								},
								
								{
									{0.44499999,0.77499998},
									1
								},
								{},
								
								{
									{0.44499999,0.92000002},
									1
								},
								
								{
									{0.44499999,0.495},
									1
								},
								{},
								
								{
									{0.0049999999,0.185},
									1
								},
								
								{
									{0.13500001,0.185},
									1
								},
								
								{
									{0.13500001,0.153},
									1
								},
								
								{
									{0.93199998,0.153},
									1
								},
								
								{
									{0.93199998,0.185},
									1
								},
								
								{
									{0.99000001,0.185},
									1
								},
								{},
								
								{
									{0.54500002,0.495},
									1
								},
								
								{
									{0.54500002,0.41},
									1
								},
								
								{
									{0.97500002,0.41},
									1
								},
								{},
								
								{
									{0.70499998,0.41},
									1
								},
								
								{
									{0.70499998,0.153},
									1
								},
								{}
							};
						};
					};
					class White
					{
						color[]={1,1,1};
						alpha=0.40000001;
						class TxtRoll
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.105,0.53799999},
								1
							};
							right[]=
							{
								{0.127,0.53799999},
								1
							};
							down[]=
							{
								{0.105,0.55299997},
								1
							};
						};
						class TxtPitch
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.221,0.53799999},
								1
							};
							right[]=
							{
								{0.243,0.53799999},
								1
							};
							down[]=
							{
								{0.221,0.55299997},
								1
							};
						};
						class TxtYaw
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.37,0.53799999},
								1
							};
							right[]=
							{
								{0.39199999,0.53799999},
								1
							};
							down[]=
							{
								{0.37,0.55299997},
								1
							};
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.13,0.67500001},
								1
							};
							right[]=
							{
								{0.154,0.67500001},
								1
							};
							down[]=
							{
								{0.13,0.69300002},
								1
							};
						};
						class TxtSpeedBrake
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.31,0.67500001},
								1
							};
							right[]=
							{
								{0.33399999,0.67500001},
								1
							};
							down[]=
							{
								{0.31,0.69300002},
								1
							};
						};
						class TxtHyd
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.22,0.82999998},
								1
							};
							right[]=
							{
								{0.242,0.82999998},
								1
							};
							down[]=
							{
								{0.22,0.84500003},
								1
							};
						};
						class TxtCabAlt
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.34999999,0.82999998},
								1
							};
							right[]=
							{
								{0.37200001,0.82999998},
								1
							};
							down[]=
							{
								{0.34999999,0.84500003},
								1
							};
						};
						class TxtFuel
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.64999998,0.76499999},
								1
							};
							right[]=
							{
								{0.685,0.76499999},
								1
							};
							down[]=
							{
								{0.64999998,0.79500002},
								1
							};
						};
						class TxtFuel1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.52999997,0.82499999},
								1
							};
							right[]=
							{
								{0.55500001,0.82499999},
								1
							};
							down[]=
							{
								{0.52999997,0.84500003},
								1
							};
						};
						class TxtFuel2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.75999999,0.82499999},
								1
							};
							right[]=
							{
								{0.78500003,0.82499999},
								1
							};
							down[]=
							{
								{0.75999999,0.84500003},
								1
							};
						};
						class TxtAMP
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.61500001,0.43000001},
								1
							};
							right[]=
							{
								{0.63700002,0.43000001},
								1
							};
							down[]=
							{
								{0.61500001,0.44499999},
								1
							};
						};
						class TxtVOLT
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.75999999,0.43000001},
								1
							};
							right[]=
							{
								{0.78200001,0.43000001},
								1
							};
							down[]=
							{
								{0.75999999,0.44499999},
								1
							};
						};
						class TxtBat
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.90499997,0.43000001},
								1
							};
							right[]=
							{
								{0.92699999,0.43000001},
								1
							};
							down[]=
							{
								{0.90499997,0.44499999},
								1
							};
						};
						class TxtDetot
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.92400002,0.57200003},
								1
							};
							right[]=
							{
								{0.94599998,0.57200003},
								1
							};
							down[]=
							{
								{0.92400002,0.58700001},
								1
							};
						};
						class TxtJoker
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.92400002,0.77600002},
								1
							};
							right[]=
							{
								{0.94599998,0.77600002},
								1
							};
							down[]=
							{
								{0.92400002,0.79100001},
								1
							};
						};
						class TxtFuelFlow1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.54000002,0.53600001},
								1
							};
							right[]=
							{
								{0.56199998,0.53600001},
								1
							};
							down[]=
							{
								{0.54000002,0.551},
								1
							};
						};
						class TxtFuelFlow2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.74000001,0.53600001},
								1
							};
							right[]=
							{
								{0.76200002,0.53600001},
								1
							};
							down[]=
							{
								{0.74000001,0.551},
								1
							};
						};
						class TxtOil
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.84500003,0.16500001},
								1
							};
							right[]=
							{
								{0.88,0.16500001},
								1
							};
							down[]=
							{
								{0.84500003,0.192},
								1
							};
						};
						class TxtOilPress
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.79000002,0.20999999},
								1
							};
							right[]=
							{
								{0.81199998,0.20999999},
								1
							};
							down[]=
							{
								{0.79000002,0.22499999},
								1
							};
						};
						class TxtOilTemp
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88999999,0.20999999},
								1
							};
							right[]=
							{
								{0.912,0.20999999},
								1
							};
							down[]=
							{
								{0.88999999,0.22499999},
								1
							};
						};
						class TxtTorquePerc
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.23,0.16500001},
								1
							};
							right[]=
							{
								{0.26499999,0.16500001},
								1
							};
							down[]=
							{
								{0.23,0.192},
								1
							};
						};
						class TxtTorqueN1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.28999999,0.315},
								1
							};
							right[]=
							{
								{0.31299999,0.315},
								1
							};
							down[]=
							{
								{0.28999999,0.33199999},
								1
							};
						};
						class TxtTorqueN2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.22499999,0.34},
								1
							};
							right[]=
							{
								{0.248,0.34},
								1
							};
							down[]=
							{
								{0.22499999,0.35699999},
								1
							};
						};
						class TxtTorqueN3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.16500001,0.315},
								1
							};
							right[]=
							{
								{0.18799999,0.315},
								1
							};
							down[]=
							{
								{0.16500001,0.33199999},
								1
							};
						};
						class TxtTorqueN4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.16500001,0.255},
								1
							};
							right[]=
							{
								{0.18799999,0.255},
								1
							};
							down[]=
							{
								{0.16500001,0.27200001},
								1
							};
						};
						class TxtTorqueN5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.23,0.23},
								1
							};
							right[]=
							{
								{0.25299999,0.23},
								1
							};
							down[]=
							{
								{0.23,0.24699999},
								1
							};
						};
						class TxtTorqueN6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.285,0.255},
								1
							};
							right[]=
							{
								{0.308,0.255},
								1
							};
							down[]=
							{
								{0.285,0.27200001},
								1
							};
						};
						class TxtTempDeg
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.51499999,0.16500001},
								1
							};
							right[]=
							{
								{0.53799999,0.16500001},
								1
							};
							down[]=
							{
								{0.51499999,0.182},
								1
							};
						};
						class TxtTempDegC
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.515+0.019",
									0.15800001
								},
								1
							};
							right[]=
							{
								{0.55900002,0.15800001},
								1
							};
							down[]=
							{
								
								{
									"0.515+0.019",
									0.175
								},
								1
							};
						};
						class TxtTempN1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.29",
									0.315
								},
								1
							};
							right[]=
							{
								{0.60299999,0.315},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.29",
									0.33199999
								},
								1
							};
						};
						class TxtTempN2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.225",
									0.34
								},
								1
							};
							right[]=
							{
								{0.53799999,0.34},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.225",
									0.35699999
								},
								1
							};
						};
						class TxtTempN3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.165",
									0.315
								},
								1
							};
							right[]=
							{
								{0.47799999,0.315},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.165",
									0.33199999
								},
								1
							};
						};
						class TxtTempN4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.165",
									0.255
								},
								1
							};
							right[]=
							{
								{0.47799999,0.255},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.165",
									0.27200001
								},
								1
							};
						};
						class TxtTempN5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.23",
									0.23
								},
								1
							};
							right[]=
							{
								{0.54299998,0.23},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.23",
									0.24699999
								},
								1
							};
						};
						class TxtTempN6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.29+ 0.285",
									0.255
								},
								1
							};
							right[]=
							{
								{0.59799999,0.255},
								1
							};
							down[]=
							{
								
								{
									"0.29+ 0.285",
									0.27200001
								},
								1
							};
						};
						class TxtNGPerc
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.30000001,0.41},
								1
							};
							right[]=
							{
								{0.34,0.41},
								1
							};
							down[]=
							{
								{0.30000001,0.44},
								1
							};
						};
						class TxtNPPerc
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.185,0.465},
								1
							};
							right[]=
							{
								{0.212,0.465},
								1
							};
							down[]=
							{
								{0.185,0.48199999},
								1
							};
						};
						class TxtOAT
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.050000001,0.38499999},
								1
							};
							right[]=
							{
								{0.077,0.38499999},
								1
							};
							down[]=
							{
								{0.050000001,0.40200001},
								1
							};
						};
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										"Roll_Center_Rotate",
										{-0.0080000004,0.050000001},
										1
									},
									
									{
										"Roll_Center_Rotate",
										{0,0.064999998},
										1
									},
									
									{
										"Roll_Center_Rotate",
										{0.0080000004,0.050000001},
										1
									}
								},
								
								{
									
									{
										"Pitch_Center_Linear",
										{0.22,0.61449999},
										1
									},
									
									{
										"Pitch_Center_Linear",
										{0.208,0.60750002},
										1
									},
									
									{
										"Pitch_Center_Linear",
										{0.22,0.60049999},
										1
									}
								},
								
								{
									
									{
										"Yaw_Center_Linear",
										{0.36000001,0.56999999},
										1
									},
									
									{
										"Yaw_Center_Linear",
										{0.368,0.58499998},
										1
									},
									
									{
										"Yaw_Center_Linear",
										{0.37599999,0.56999999},
										1
									}
								}
							};
						};
						class Static
						{
							width=3;
							points[]=
							{
								
								{
									"Fuel_Center",
									{-0.092387997,0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.14320099,0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.092387997,0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{0.14320099,0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.129343,0.0406138},
									1
								},
								
								{
									"Fuel_Center",
									{-0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.14,4.63905e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.129343,-0.0406138},
									1
								},
								
								{
									"Fuel_Center",
									{-0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{-0.098994903,-0.075044602},
									1
								},
								
								{
									"Fuel_Center",
									{-0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{-0.053575698,-0.098050401},
									1
								},
								
								{
									"Fuel_Center",
									{-0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.106129},
									1
								},
								
								{
									"Fuel_Center",
									{0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{0.053575698,-0.098050401},
									1
								},
								
								{
									"Fuel_Center",
									{0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{0.098994903,-0.075044602},
									1
								},
								
								{
									"Fuel_Center",
									{0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{0.129343,-0.0406138},
									1
								},
								
								{
									"Fuel_Center",
									{0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.14,4.63905e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.129343,0.0406138},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.152022,0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{-0.152022,-0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{-0.128878,-0.065279499},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{-0.086113401,-0.097697698},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{-0.030239001,-0.115242},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.027312599,-0.10409},
									1
								},
								
								{
									"Fuel_Center",
									{0.030239001,-0.115242},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.0777798,-0.088243097},
									1
								},
								
								{
									"Fuel_Center",
									{0.086113401,-0.097697698},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.116406,-0.058962099},
									1
								},
								
								{
									"Fuel_Center",
									{0.128878,-0.065279499},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.13731,-0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.152022,-0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.13731,0.0207048},
									1
								},
								
								{
									"Fuel_Center",
									{0.152022,0.022923101},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.110866,0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{-0.117694,0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.117694,-0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{-0.099776298,-0.050539002},
									1
								},
								
								{
									"Fuel_Center",
									{-0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{-0.066668399,-0.075636901},
									1
								},
								
								{
									"Fuel_Center",
									{-0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{-0.023410801,-0.089219801},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.0909677},
									1
								},
								
								{
									"Fuel_Center",
									{0.023410801,-0.089219801},
									1
								},
								
								{
									"Fuel_Center",
									{0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{0.066668399,-0.075636901},
									1
								},
								
								{
									"Fuel_Center",
									{0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{0.099776298,-0.050539002},
									1
								},
								
								{
									"Fuel_Center",
									{0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{0.117694,-0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.117694,0.017746899},
									1
								},
								
								{
									"Fuel_Center",
									{0.110866,0.034811798},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.155,5.1360902e-009},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{-0.14320099,-0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{-0.109602,-0.083085001},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{-0.059315901,-0.108556},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0,-0.0909677},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.1175},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.045922,-0.084043197},
									1
								},
								
								{
									"Fuel_Center",
									{0.059315901,-0.108556},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.0848528,-0.064323902},
									1
								},
								
								{
									"Fuel_Center",
									{0.109602,-0.083085001},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.110866,-0.034811798},
									1
								},
								
								{
									"Fuel_Center",
									{0.14320099,-0.044965301},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{0.12,3.9763299e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.155,5.1360902e-009},
									1
								},
								{},
								
								{
									"Fuel_Center",
									{-0.092387997,0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.098078497,0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{-0.1,3.3136101e-009},
									1
								},
								
								{
									"Fuel_Center",
									{-0.098078497,-0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{-0.092387997,-0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{-0.083146997,-0.0421158},
									1
								},
								
								{
									"Fuel_Center",
									{-0.070710696,-0.053603299},
									1
								},
								
								{
									"Fuel_Center",
									{-0.055557001,-0.063030802},
									1
								},
								
								{
									"Fuel_Center",
									{-0.038268302,-0.070036002},
									1
								},
								
								{
									"Fuel_Center",
									{-0.019509001,-0.074349903},
									1
								},
								
								{
									"Fuel_Center",
									{0,-0.075806499},
									1
								},
								
								{
									"Fuel_Center",
									{0.019509001,-0.074349903},
									1
								},
								
								{
									"Fuel_Center",
									{0.038268302,-0.070036002},
									1
								},
								
								{
									"Fuel_Center",
									{0.055557001,-0.063030802},
									1
								},
								
								{
									"Fuel_Center",
									{0.070710696,-0.053603299},
									1
								},
								
								{
									"Fuel_Center",
									{0.083146997,-0.0421158},
									1
								},
								
								{
									"Fuel_Center",
									{0.092387997,-0.029009899},
									1
								},
								
								{
									"Fuel_Center",
									{0.098078497,-0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{0.1,3.3136101e-009},
									1
								},
								
								{
									"Fuel_Center",
									{0.098078497,0.0147891},
									1
								},
								
								{
									"Fuel_Center",
									{0.092387997,0.029009899},
									1
								},
								{}
							};
						};
					};
					class LightBlue
					{
						color[]={0,1,1};
						alpha=0.40000001;
						class TxtFuelVal
						{
							source="fuel";
							scale=1;
							sourceScale=1054;
							sourcePrecision=0;
							sourceLength=0;
							sourceOffset=0;
							align="center";
							pos[]=
							{
								{0.64999998,0.72500002},
								1
							};
							right[]=
							{
								{0.685,0.72500002},
								1
							};
							down[]=
							{
								{0.64999998,0.755},
								1
							};
						};
						class TxtFuelVal1
						{
							source="fuel";
							scale=1;
							sourceScale=527;
							sourcePrecision=0;
							sourceLength=0;
							sourceOffset=0;
							align="center";
							pos[]=
							{
								{0.52999997,0.86500001},
								1
							};
							right[]=
							{
								{0.55500001,0.86500001},
								1
							};
							down[]=
							{
								{0.52999997,0.88499999},
								1
							};
						};
						class TxtFuelVal2
						{
							source="fuel";
							scale=1;
							sourceScale=527;
							sourcePrecision=0;
							sourceLength=0;
							sourceOffset=0;
							align="center";
							pos[]=
							{
								{0.75999999,0.86500001},
								1
							};
							right[]=
							{
								{0.78500003,0.86500001},
								1
							};
							down[]=
							{
								{0.75999999,0.88499999},
								1
							};
						};
						class FuelConsumption
						{
							source="throttle";
							sourceScale=200;
							sourceOffset=40;
							refreshRate=0.5;
							align="center";
							scale=1;
							pos[]=
							{
								{0.63,0.53600001},
								1
							};
							right[]=
							{
								{0.65200001,0.53600001},
								1
							};
							down[]=
							{
								{0.63,0.551},
								1
							};
						};
						class TxtTO
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.050000001,0.19499999},
								1
							};
							right[]=
							{
								{0.077,0.19499999},
								1
							};
							down[]=
							{
								{0.050000001,0.212},
								1
							};
						};
						class Static_Bold
						{
							width=22;
							points[]=
							{
								
								{
									"FuelFlowRot4",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot5",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot6",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot7",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot8",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot9",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot10",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot11",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot12",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot13",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot14",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot15",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot16",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot17",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								}
							};
						};
						class Fuel1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.17,-0.0099999998},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.14300001,-0.0099999998},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.17,0.0070000002},
								1
							};
						};
						class Fuel2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.16,-0.055},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.133,-0.055},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.16,-0.037999999},
								1
							};
						};
						class Fuel3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.145,-0.079999998},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.118,-0.079999998},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.145,-0.063000001},
								1
							};
						};
						class Fuel4
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.12,-0.102},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.093000002,-0.102},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.12,-0.085000001},
								1
							};
						};
						class Fuel5
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{-0.059999999,-0.13},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{-0.033,-0.13},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{-0.059999999,-0.113},
								1
							};
						};
						class Fuel6
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0,-0.14},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.027000001,-0.14},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0,-0.123},
								1
							};
						};
						class Fuel7
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.059999999,-0.13},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.086999997,-0.13},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.059999999,-0.113},
								1
							};
						};
						class Fuel8
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.12,-0.106},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.147,-0.106},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.12,-0.089000002},
								1
							};
						};
						class Fuel9
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,-0.055},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.192,-0.055},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,-0.037999999},
								1
							};
						};
						class Fuel10
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.175,-0.0099999998},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.20200001,-0.0099999998},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.175,0.0070000002},
								1
							};
						};
						class Fuel11
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,0.035},
								1
							};
							right[]=
							{
								"Fuel_Center",
								1,
								{0.192,0.035},
								1
							};
							down[]=
							{
								"Fuel_Center",
								1,
								{0.16500001,0.052000001},
								1
							};
						};
					};
					class BtnEject1
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.090000004,0.82999998},
							1
						};
						right[]=
						{
							{0.112,0.82999998},
							1
						};
						down[]=
						{
							{0.090000004,0.85000002},
							1
						};
					};
					class BtnEject2
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.090000004,0.86000001},
							1
						};
						right[]=
						{
							{0.112,0.86000001},
							1
						};
						down[]=
						{
							{0.090000004,0.88},
							1
						};
					};
					class BtnIND
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.20999999,0.95999998},
							1
						};
						right[]=
						{
							{0.23999999,0.95999998},
							1
						};
						down[]=
						{
							{0.20999999,0.98500001},
							1
						};
					};
					class BtnSWAP
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.46000001,0.95999998},
							1
						};
						right[]=
						{
							{0.49000001,0.95999998},
							1
						};
						down[]=
						{
							{0.46000001,0.98500001},
							1
						};
					};
					class BtnHSD
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.60000002,0.95999998},
							1
						};
						right[]=
						{
							{0.63,0.95999998},
							1
						};
						down[]=
						{
							{0.60000002,0.98500001},
							1
						};
					};
					class BtnDCLT
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.72000003,0.95999998},
							1
						};
						right[]=
						{
							{0.75,0.95999998},
							1
						};
						down[]=
						{
							{0.72000003,0.98500001},
							1
						};
					};
					class TxtHydVal
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.22,0.86000001},
							1
						};
						right[]=
						{
							{0.242,0.86000001},
							1
						};
						down[]=
						{
							{0.22,0.875},
							1
						};
					};
					class TxtCabAltVal
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.34999999,0.86000001},
							1
						};
						right[]=
						{
							{0.37200001,0.86000001},
							1
						};
						down[]=
						{
							{0.34999999,0.875},
							1
						};
					};
					class TxtAMPvAL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.61500001,0.465},
							1
						};
						right[]=
						{
							{0.63700002,0.465},
							1
						};
						down[]=
						{
							{0.61500001,0.47999999},
							1
						};
					};
					class TxtVOLTvAL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.75999999,0.465},
							1
						};
						right[]=
						{
							{0.78200001,0.465},
							1
						};
						down[]=
						{
							{0.75999999,0.47999999},
							1
						};
					};
					class TxtBatvAL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.90499997,0.465},
							1
						};
						right[]=
						{
							{0.92699999,0.465},
							1
						};
						down[]=
						{
							{0.90499997,0.47999999},
							1
						};
					};
					class TxtOATDir
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.050000001,0.41},
							1
						};
						right[]=
						{
							{0.077,0.41},
							1
						};
						down[]=
						{
							{0.050000001,0.42699999},
							1
						};
					};
					class NGVal
					{
						source="rpm";
						scale=1;
						sourceScale=100;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.44,0.41},
							1
						};
						right[]=
						{
							{0.47999999,0.41},
							1
						};
						down[]=
						{
							{0.44,0.44},
							1
						};
					};
					class T5Val
					{
						source="rpm";
						scale=1;
						sourceScale=760;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.60500002,0.28099999},
							1
						};
						right[]=
						{
							{0.63700002,0.28099999},
							1
						};
						down[]=
						{
							{0.60500002,0.308},
							1
						};
					};
					class TQVal
					{
						source="throttle";
						scale=1;
						sourceScale=100;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.33000001,0.28099999},
							1
						};
						right[]=
						{
							{0.36199999,0.28099999},
							1
						};
						down[]=
						{
							{0.33000001,0.308},
							1
						};
					};
					class TPVal
					{
						source="rpm";
						scale=1;
						sourceScale=100;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.285,0.465},
							1
						};
						right[]=
						{
							{0.31200001,0.465},
							1
						};
						down[]=
						{
							{0.285,0.48199999},
							1
						};
					};
					class TxtOilPressVaL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.79000002,0.34999999},
							1
						};
						right[]=
						{
							{0.81199998,0.34999999},
							1
						};
						down[]=
						{
							{0.79000002,0.36500001},
							1
						};
					};
					class TxtOilTempVaL
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.88999999,0.34999999},
							1
						};
						right[]=
						{
							{0.912,0.34999999},
							1
						};
						down[]=
						{
							{0.88999999,0.36500001},
							1
						};
					};
					class PitchVal
					{
						source="horizonDive";
						scale=1;
						sourceScale=57.295799;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="right";
						pos[]=
						{
							{0.22499999,0.5995},
							1
						};
						right[]=
						{
							{0.252,0.5995},
							1
						};
						down[]=
						{
							{0.22499999,0.61650002},
							1
						};
					};
					class TxtJokerVal
					{
						source="static";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.92400002,0.80599999},
							1
						};
						right[]=
						{
							{0.94599998,0.80599999},
							1
						};
						down[]=
						{
							{0.92400002,0.82099998},
							1
						};
					};
					class DetotVal
					{
						source="fuel";
						scale=1;
						sourceScale=1054;
						sourcePrecision=0;
						sourceLength=0;
						sourceOffset=0;
						align="center";
						pos[]=
						{
							{0.92400002,0.61000001},
							1
						};
						right[]=
						{
							{0.94599998,0.61000001},
							1
						};
						down[]=
						{
							{0.92400002,0.625},
							1
						};
					};
					class GreenPolygon
					{
						points[]=
						{
							
							{
								
								{
									{0.31,0.94999999},
									1
								},
								
								{
									{0.44999999,0.94999999},
									1
								},
								
								{
									{0.44999999,1},
									1
								},
								
								{
									{0.31,1},
									1
								}
							},
							
							{
								
								{
									{0.80500001,0.25999999},
									1
								},
								
								{
									{0.829,0.25999999},
									1
								},
								
								{
									{0.829,0.27500001},
									1
								},
								
								{
									{0.80500001,0.27500001},
									1
								}
							},
							
							{
								
								{
									{0.801,0.26499999},
									1
								},
								
								{
									{0.77899998,0.257},
									1
								},
								
								{
									{0.78399998,0.26499999},
									1
								}
							},
							
							{
								
								{
									{0.801,0.26499999},
									1
								},
								
								{
									{0.77899998,0.273},
									1
								},
								
								{
									{0.78399998,0.26499999},
									1
								}
							},
							
							{
								
								{
									{0.85500002,0.255},
									1
								},
								
								{
									{0.87900001,0.255},
									1
								},
								
								{
									{0.87900001,0.30500001},
									1
								},
								
								{
									{0.85500002,0.30500001},
									1
								}
							},
							
							{
								
								{
									{0.88300002,0.27500001},
									1
								},
								
								{
									{0.90499997,0.26699999},
									1
								},
								
								{
									{0.89999998,0.27500001},
									1
								}
							},
							
							{
								
								{
									{0.88300002,0.27500001},
									1
								},
								
								{
									{0.90499997,0.28299999},
									1
								},
								
								{
									{0.89999998,0.27500001},
									1
								}
							}
						};
					};
					class Static
					{
						width=6;
						points[]=
						{
							
							{
								{0.89999998,0.75800002},
								1
							},
							
							{
								{0.94999999,0.75800002},
								1
							},
							
							{
								{0.92500001,0.73799998},
								1
							},
							
							{
								{0.89999998,0.75800002},
								1
							},
							{},
							
							{
								{0.89999998,0.83899999},
								1
							},
							
							{
								{0.94999999,0.83899999},
								1
							},
							
							{
								{0.92500001,0.85900003},
								1
							},
							
							{
								{0.89999998,0.83899999},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-1.22392e-008,-0.053064499},
								1
							},
							
							{
								"Roll_Center",
								{-1.39876e-008,-0.0606452},
								1
							},
							{},
							
							{
								"Roll_Center",
								{0.0262224,-0.049200598},
								1
							},
							
							{
								"Roll_Center",
								{0.0299685,-0.0562292},
								1
							},
							{},
							
							{
								"Roll_Center",
								{0.048626099,-0.038171399},
								1
							},
							
							{
								"Roll_Center",
								{0.0555727,-0.043624502},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-0.026222499,-0.049200598},
								1
							},
							
							{
								"Roll_Center",
								{-0.0299685,-0.0562292},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-0.048626099,-0.038171399},
								1
							},
							
							{
								"Roll_Center",
								{-0.0555727,-0.043624502},
								1
							},
							{},
							
							{
								"Roll_Center",
								{-0.0555727,-0.043624502},
								1
							},
							
							{
								"Roll_Center",
								{-0.0299685,-0.0562292},
								1
							},
							
							{
								"Roll_Center",
								{-1.39876e-008,-0.0606452},
								1
							},
							
							{
								"Roll_Center",
								{0.0299685,-0.0562292},
								1
							},
							
							{
								"Roll_Center",
								{0.0555727,-0.043624502},
								1
							},
							{},
							
							{
								{0.19149999,0.565},
								1
							},
							
							{
								{0.19149999,0.64999998},
								1
							},
							{},
							
							{
								{0.19149999,0.60750002},
								1
							},
							
							{
								{0.20649999,0.60750002},
								1
							},
							{},
							
							{
								{0.19149999,0.64999998},
								1
							},
							
							{
								{0.20649999,0.64999998},
								1
							},
							{},
							
							{
								{0.19149999,0.565},
								1
							},
							
							{
								{0.20649999,0.565},
								1
							},
							{},
							
							{
								{0.19149999,0.58625001},
								1
							},
							
							{
								{0.2015,0.58625001},
								1
							},
							{},
							
							{
								{0.19149999,0.62875003},
								1
							},
							
							{
								{0.2015,0.62875003},
								1
							},
							{},
							
							{
								{0.34299999,0.60000002},
								1
							},
							
							{
								{0.39300001,0.60000002},
								1
							},
							{},
							
							{
								{0.368,0.60000002},
								1
							},
							
							{
								{0.368,0.58999997},
								1
							},
							{},
							
							{
								{0.029999999,0.886177},
								1
							},
							
							{
								{0.15000001,0.886177},
								1
							},
							
							{
								{0.15000001,0.81946802},
								1
							},
							
							{
								{0.029999999,0.81946802},
								1
							},
							
							{
								{0.029999999,0.886177},
								1
							},
							{},
							
							{
								"TQ_Center_Rotate",
								{0,0},
								1
							},
							
							{
								"TQ_Center_Rotate",
								{-1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-1.57361e-008,-0.068225801},
								1
							},
							
							{
								"TQ_Center",
								{-1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.045000002,-0.059085298},
								1
							},
							
							{
								"TQ_Center",
								{-0.0550001,-0.072215296},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.077942297,-0.0341129},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,-0.041693501},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.090000004,-9.4882298e-009},
								1
							},
							
							{
								"TQ_Center",
								{-0.11,-1.15967e-008},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.077942297,0.0341129},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,0.041693602},
								1
							},
							{},
							
							{
								"TQ_Center",
								{-0.045000002,0.059085298},
								1
							},
							
							{
								"TQ_Center",
								{-0.055,0.072215296},
								1
							},
							{},
							
							{
								"TQ_Center",
								{2.1464801e-009,0.068225801},
								1
							},
							
							{
								"TQ_Center",
								{2.6234701e-009,0.083387099},
								1
							},
							{},
							
							{
								"TQ_Center",
								{0.045000099,0.059085298},
								1
							},
							
							{
								"TQ_Center",
								{0.0550001,0.072215296},
								1
							},
							{},
							
							{
								"TQ_Center",
								{0.077942297,0.0341129},
								1
							},
							
							{
								"TQ_Center",
								{0.095262803,0.041693501},
								1
							},
							{},
							
							{
								"TQ_Center",
								{0.095262803,0.041693602},
								1
							},
							
							{
								"TQ_Center",
								{0.0777817,0.058963601},
								1
							},
							
							{
								"TQ_Center",
								{0.055,0.072215401},
								1
							},
							
							{
								"TQ_Center",
								{0.028470101,0.080545798},
								1
							},
							
							{
								"TQ_Center",
								{-9.6165103e-009,0.083387099},
								1
							},
							
							{
								"TQ_Center",
								{-0.028470101,0.080545701},
								1
							},
							
							{
								"TQ_Center",
								{-0.055,0.072215296},
								1
							},
							
							{
								"TQ_Center",
								{-0.0777817,0.058963601},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,0.041693501},
								1
							},
							
							{
								"TQ_Center",
								{-0.106252,0.021582199},
								1
							},
							
							{
								"TQ_Center",
								{-0.11,-9.9438102e-010},
								1
							},
							
							{
								"TQ_Center",
								{-0.106252,-0.021582199},
								1
							},
							
							{
								"TQ_Center",
								{-0.095262803,-0.041693602},
								1
							},
							
							{
								"TQ_Center",
								{-0.077781796,-0.058963601},
								1
							},
							
							{
								"TQ_Center",
								{-0.055,-0.072215401},
								1
							},
							
							{
								"TQ_Center",
								{-0.028470101,-0.080545798},
								1
							},
							
							{
								"TQ_Center",
								{1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"T5_Center_Rotate",
								{0,0},
								1
							},
							
							{
								"T5_Center_Rotate",
								{-1.9232999e-008,-0.083387099},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.077942297,-0.0341129},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,-0.041693501},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.090000004,-9.4882298e-009},
								1
							},
							
							{
								"T5_Center",
								{-0.11,-1.15967e-008},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.077942297,0.0341129},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,0.041693602},
								1
							},
							{},
							
							{
								"T5_Center",
								{-0.045000002,0.059085298},
								1
							},
							
							{
								"T5_Center",
								{-0.055,0.072215296},
								1
							},
							{},
							
							{
								"T5_Center",
								{2.1464801e-009,0.068225801},
								1
							},
							
							{
								"T5_Center",
								{2.6234701e-009,0.083387099},
								1
							},
							{},
							
							{
								"T5_Center",
								{0.045000099,0.059085298},
								1
							},
							
							{
								"T5_Center",
								{0.0550001,0.072215296},
								1
							},
							{},
							
							{
								"T5_Center",
								{0.077942297,0.0341129},
								1
							},
							
							{
								"T5_Center",
								{0.095262803,0.041693501},
								1
							},
							{},
							
							{
								"T5_Center",
								{0.095262803,0.041693602},
								1
							},
							
							{
								"T5_Center",
								{0.0777817,0.058963601},
								1
							},
							
							{
								"T5_Center",
								{0.055,0.072215401},
								1
							},
							
							{
								"T5_Center",
								{0.028470101,0.080545798},
								1
							},
							
							{
								"T5_Center",
								{-9.6165103e-009,0.083387099},
								1
							},
							
							{
								"T5_Center",
								{-0.028470101,0.080545701},
								1
							},
							
							{
								"T5_Center",
								{-0.055,0.072215296},
								1
							},
							
							{
								"T5_Center",
								{-0.0777817,0.058963601},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,0.041693501},
								1
							},
							
							{
								"T5_Center",
								{-0.106252,0.021582199},
								1
							},
							
							{
								"T5_Center",
								{-0.11,-9.9438102e-010},
								1
							},
							
							{
								"T5_Center",
								{-0.106252,-0.021582199},
								1
							},
							
							{
								"T5_Center",
								{-0.095262803,-0.041693602},
								1
							},
							
							{
								"T5_Center",
								{-0.077781796,-0.058963601},
								1
							}
						};
					};
					class Static_Bold
					{
						width=22;
						points[]=
						{
							
							{
								"FuelFlowRot4",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot5",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot6",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot7",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot8",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot9",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot10",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot11",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot12",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot13",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot14",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot15",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot16",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							},
							
							{
								"FuelFlowRot17",
								{0,0.13},
								1,
								"Fuel_Center",
								1
							}
						};
					};
					class Yellow
					{
						color[]={0.80000001,0.1,0};
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.31799999,0.60000002},
									1
								},
								
								{
									{0.34299999,0.60000002},
									1
								},
								{},
								
								{
									{0.39300001,0.60000002},
									1
								},
								
								{
									{0.41800001,0.60000002},
									1
								},
								{},
								
								{
									{0.31799999,0.60000002},
									1
								},
								
								{
									{0.31799999,0.58999997},
									1
								},
								{},
								
								{
									{0.41800001,0.60000002},
									1
								},
								
								{
									{0.41800001,0.58999997},
									1
								},
								{},
								
								{
									{0.39300001,0.60000002},
									1
								},
								
								{
									{0.39300001,0.59200001},
									1
								},
								{},
								
								{
									{0.34299999,0.60000002},
									1
								},
								
								{
									{0.34299999,0.59200001},
									1
								},
								{},
								
								{
									"TQ_Center",
									{1.9232999e-008,-0.083387099},
									1
								},
								
								{
									"TQ_Center",
									{0.028470101,-0.080545701},
									1
								},
								
								{
									"TQ_Center",
									{0.0550001,-0.072215296},
									1
								},
								{},
								
								{
									"T5_Center",
									{-0.045000002,-0.059085298},
									1
								},
								
								{
									"T5_Center",
									{-0.0550001,-0.072215296},
									1
								},
								{},
								
								{
									"T5_Center",
									{-0.077781796,-0.058963601},
									1
								},
								
								{
									"T5_Center",
									{-0.055,-0.072215401},
									1
								}
							};
						};
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										{0.80500001,0.25},
										1
									},
									
									{
										{0.829,0.25},
										1
									},
									
									{
										{0.829,0.25999999},
										1
									},
									
									{
										{0.80500001,0.25999999},
										1
									}
								},
								
								{
									
									{
										{0.80500001,0.27500001},
										1
									},
									
									{
										{0.829,0.27500001},
										1
									},
									
									{
										{0.829,0.30000001},
										1
									},
									
									{
										{0.80500001,0.30000001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.30000001},
										1
									},
									
									{
										{0.87900001,0.30000001},
										1
									},
									
									{
										{0.87900001,0.33500001},
										1
									},
									
									{
										{0.85500002,0.33500001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.25},
										1
									},
									
									{
										{0.87900001,0.25},
										1
									},
									
									{
										{0.87900001,0.255},
										1
									},
									
									{
										{0.85500002,0.255},
										1
									}
								}
							};
						};
					};
					class Red
					{
						color[]={1,0,0};
						class Static
						{
							points[]=
							{
								
								{
									"TQ_Center",
									{0.045000002,-0.059085298},
									1
								},
								
								{
									"TQ_Center",
									{0.055,-0.072215401},
									1
								},
								{},
								
								{
									"TQ_Center",
									{0.077942297,-0.0341129},
									1
								},
								
								{
									"TQ_Center",
									{0.095262803,-0.041693602},
									1
								},
								{},
								
								{
									"TQ_Center",
									{0.0550001,-0.072215296},
									1
								},
								
								{
									"TQ_Center",
									{0.077781796,-0.058963601},
									1
								},
								
								{
									"TQ_Center",
									{0.095262803,-0.041693501},
									1
								},
								{},
								
								{
									"T5_Center",
									{-1.57361e-008,-0.068225801},
									1
								},
								
								{
									"T5_Center",
									{-1.9232999e-008,-0.083387099},
									1
								},
								{},
								
								{
									"T5_Center",
									{0.045000002,-0.059085298},
									1
								},
								
								{
									"T5_Center",
									{0.055,-0.072215401},
									1
								},
								{},
								
								{
									"T5_Center",
									{0.077942297,-0.0341129},
									1
								},
								
								{
									"T5_Center",
									{0.095262803,-0.041693602},
									1
								},
								{},
								
								{
									"T5_Center",
									{-0.055,-0.072215401},
									1
								},
								
								{
									"T5_Center",
									{-0.028470101,-0.080545798},
									1
								},
								
								{
									"T5_Center",
									{1.9232999e-008,-0.083387099},
									1
								},
								
								{
									"T5_Center",
									{0.028470101,-0.080545701},
									1
								},
								
								{
									"T5_Center",
									{0.0550001,-0.072215296},
									1
								},
								
								{
									"T5_Center",
									{0.077781796,-0.058963601},
									1
								},
								
								{
									"T5_Center",
									{0.095262803,-0.041693501},
									1
								},
								{}
							};
						};
						class Static_Bold
						{
							width=22;
							points[]=
							{
								
								{
									"FuelFlowRot1",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot2",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot3",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot4",
									{0,0.13},
									1,
									"Fuel_Center",
									1
								},
								{},
								
								{
									"FuelFlowRot1",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot2",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot3",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								
								{
									"FuelFlowRot4",
									{0,0.11},
									1,
									"Fuel_Center",
									1
								},
								{}
							};
						};
						class Polygon
						{
							points[]=
							{
								
								{
									
									{
										{0.80500001,0.23999999},
										1
									},
									
									{
										{0.829,0.23999999},
										1
									},
									
									{
										{0.829,0.252},
										1
									},
									
									{
										{0.80500001,0.252},
										1
									}
								},
								
								{
									
									{
										{0.80500001,0.30000001},
										1
									},
									
									{
										{0.829,0.30000001},
										1
									},
									
									{
										{0.829,0.33000001},
										1
									},
									
									{
										{0.80500001,0.33000001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.33000001},
										1
									},
									
									{
										{0.87900001,0.33000001},
										1
									},
									
									{
										{0.87900001,0.33500001},
										1
									},
									
									{
										{0.85500002,0.33500001},
										1
									}
								},
								
								{
									
									{
										{0.85500002,0.23999999},
										1
									},
									
									{
										{0.87900001,0.23999999},
										1
									},
									
									{
										{0.87900001,0.252},
										1
									},
									
									{
										{0.85500002,0.252},
										1
									}
								}
							};
						};
					};
					class BlackText
					{
						color[]={0,0,0};
						alpha=1;
						class BtnEICAS1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
						class BtnEICAS2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
						class BtnEICAS3
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.31999999,0.95999998},
								1
							};
							right[]=
							{
								{0.34999999,0.95999998},
								1
							};
							down[]=
							{
								{0.31999999,0.98500001},
								1
							};
						};
					};
					class Flaps_Up
					{
						condition="1-flaps";
						color[]={1,1,1};
						alpha=0.60000002;
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.059999999,0.708},
									1
								},
								
								{
									{0.2,0.708},
									1
								},
								
								{
									{0.2,0.73799998},
									1
								},
								
								{
									{0.059999999,0.73799998},
									1
								},
								
								{
									{0.059999999,0.708},
									1
								},
								{}
							};
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.13,0.71499997},
								1
							};
							right[]=
							{
								{0.154,0.71499997},
								1
							};
							down[]=
							{
								{0.13,0.73299998},
								1
							};
						};
					};
					class Flaps_Down1: Flaps_Up
					{
						condition="flaps";
						alpha=1;
						color[]={0,0.12,0};
						class Static: Static
						{
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.13,0.71499997},
								1
							};
							right[]=
							{
								{0.154,0.71499997},
								1
							};
							down[]=
							{
								{0.13,0.73299998},
								1
							};
						};
					};
					class SpeedBrake_Closed
					{
						condition="1-user8";
						color[]={1,1,1};
						alpha=0.60000002;
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									{0.23999999,0.708},
									1
								},
								
								{
									{0.38,0.708},
									1
								},
								
								{
									{0.38,0.73799998},
									1
								},
								
								{
									{0.23999999,0.73799998},
									1
								},
								
								{
									{0.23999999,0.708},
									1
								},
								{}
							};
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.31,0.71499997},
								1
							};
							right[]=
							{
								{0.33399999,0.71499997},
								1
							};
							down[]=
							{
								{0.31,0.73299998},
								1
							};
						};
					};
					class SpeedBrake_Open: SpeedBrake_Closed
					{
						condition="user8";
						alpha=1;
						color[]={0,0.12,0};
						class Static: Static
						{
						};
						class TxtFlaps
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.31,0.71499997},
								1
							};
							right[]=
							{
								{0.33399999,0.71499997},
								1
							};
							down[]=
							{
								{0.31,0.73299998},
								1
							};
						};
					};
					class Canopy_Open
					{
						condition="user13<=0.98";
						color[]={1,0,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.050000001,0.0099999998},
									1
								},
								
								{
									{0.22,0.0099999998},
									1
								},
								
								{
									{0.22,0.07},
									1
								},
								
								{
									{0.050000001,0.07},
									1
								},
								
								{
									{0.050000001,0.0099999998},
									1
								},
								{},
								
								{
									{0.41,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.07},
									1
								},
								
								{
									{0.41,0.07},
									1
								},
								
								{
									{0.41,0.0099999998},
									1
								},
								{},
								
								{
									{0.58999997,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.07},
									1
								},
								
								{
									{0.58999997,0.07},
									1
								},
								
								{
									{0.58999997,0.0099999998},
									1
								},
								{},
								
								{
									{0.76999998,0.0099999998},
									1
								},
								
								{
									{0.94,0.0099999998},
									1
								},
								
								{
									{0.94,0.07},
									1
								},
								
								{
									{0.76999998,0.07},
									1
								},
								
								{
									{0.76999998,0.0099999998},
									1
								},
								{},
								
								{
									{0.050000001,0.079999998},
									1
								},
								
								{
									{0.22,0.079999998},
									1
								},
								
								{
									{0.22,0.14},
									1
								},
								
								{
									{0.050000001,0.14},
									1
								},
								
								{
									{0.050000001,0.079999998},
									1
								},
								{},
								
								{
									{0.23,0.079999998},
									1
								},
								
								{
									{0.40000001,0.079999998},
									1
								},
								
								{
									{0.40000001,0.14},
									1
								},
								
								{
									{0.23,0.14},
									1
								},
								
								{
									{0.23,0.079999998},
									1
								},
								{},
								
								{
									{0.41,0.079999998},
									1
								},
								
								{
									{0.57999998,0.079999998},
									1
								},
								
								{
									{0.57999998,0.14},
									1
								},
								
								{
									{0.41,0.14},
									1
								},
								
								{
									{0.41,0.079999998},
									1
								},
								{},
								
								{
									{0.58999997,0.079999998},
									1
								},
								
								{
									{0.75999999,0.079999998},
									1
								},
								
								{
									{0.75999999,0.14},
									1
								},
								
								{
									{0.58999997,0.14},
									1
								},
								
								{
									{0.58999997,0.079999998},
									1
								},
								{},
								
								{
									{0.76999998,0.079999998},
									1
								},
								
								{
									{0.94,0.079999998},
									1
								},
								
								{
									{0.94,0.14},
									1
								},
								
								{
									{0.76999998,0.14},
									1
								},
								
								{
									{0.76999998,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.02
								},
								1
							};
							right[]=
							{
								{0.15899999,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.15899999,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.063000001
								},
								1
							};
						};
					};
					class L_Aileron_Yellow
					{
						condition="(user14>=0.25)*(user14<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.41,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.0099999998},
									1
								},
								
								{
									{0.57999998,0.07},
									1
								},
								
								{
									{0.41,0.07},
									1
								},
								
								{
									{0.41,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.02
								},
								1
							};
							right[]=
							{
								{0.51899999,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.51899999,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.063000001
								},
								1
							};
						};
					};
					class L_Aileron_Red: L_Aileron_Yellow
					{
						condition="(user14>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class R_Aileron_Yellow
					{
						condition="(user15>=0.25)*(user15<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.58999997,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.0099999998},
									1
								},
								
								{
									{0.75999999,0.07},
									1
								},
								
								{
									{0.58999997,0.07},
									1
								},
								
								{
									{0.58999997,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.02
								},
								1
							};
							right[]=
							{
								{0.699,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.699,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.063000001
								},
								1
							};
						};
					};
					class R_Aileron_Red: R_Aileron_Yellow
					{
						condition="(user15>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class Rudder_Yellow
					{
						condition="(user18>=0.25)*(user18<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.76999998,0.0099999998},
									1
								},
								
								{
									{0.94,0.0099999998},
									1
								},
								
								{
									{0.94,0.07},
									1
								},
								
								{
									{0.76999998,0.07},
									1
								},
								
								{
									{0.76999998,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.02
								},
								1
							};
							right[]=
							{
								{0.87900001,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.87900001,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.063000001
								},
								1
							};
						};
					};
					class Rudder_Red: Rudder_Yellow
					{
						condition="(user18>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class L_Elevator_Yellow
					{
						condition="(user16>=0.25)*(user16<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.050000001,0.079999998},
									1
								},
								
								{
									{0.22,0.079999998},
									1
								},
								
								{
									{0.22,0.14},
									1
								},
								
								{
									{0.050000001,0.14},
									1
								},
								
								{
									{0.050000001,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.15899999,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*0",
									0.115
								},
								1
							};
							right[]=
							{
								{0.15899999,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*0",
									0.133
								},
								1
							};
						};
					};
					class L_Elevator_Red: L_Elevator_Yellow
					{
						condition="(user16>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class R_Elevator_Yellow
					{
						condition="(user17>=0.25)*(user17<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.23,0.079999998},
									1
								},
								
								{
									{0.40000001,0.079999998},
									1
								},
								
								{
									{0.40000001,0.14},
									1
								},
								
								{
									{0.23,0.14},
									1
								},
								
								{
									{0.23,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.33899999,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.115
								},
								1
							};
							right[]=
							{
								{0.33899999,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.133
								},
								1
							};
						};
					};
					class R_Elevator_Red: R_Elevator_Yellow
					{
						condition="(user17>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class L_Fuel_Yellow
					{
						condition="(user19>=0.25)*(user19<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.41,0.079999998},
									1
								},
								
								{
									{0.57999998,0.079999998},
									1
								},
								
								{
									{0.57999998,0.14},
									1
								},
								
								{
									{0.41,0.14},
									1
								},
								
								{
									{0.41,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.51899999,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*2",
									0.115
								},
								1
							};
							right[]=
							{
								{0.51899999,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*2",
									0.133
								},
								1
							};
						};
					};
					class L_Fuel_Red: L_Fuel_Yellow
					{
						condition="(user19>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class R_Fuel_Yellow
					{
						condition="(user20>=0.25)*(user20<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.58999997,0.079999998},
									1
								},
								
								{
									{0.75999999,0.079999998},
									1
								},
								
								{
									{0.75999999,0.14},
									1
								},
								
								{
									{0.58999997,0.14},
									1
								},
								
								{
									{0.58999997,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.699,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*3",
									0.115
								},
								1
							};
							right[]=
							{
								{0.699,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*3",
									0.133
								},
								1
							};
						};
					};
					class R_Fuel_Red: R_Fuel_Yellow
					{
						condition="(user20>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class FLIR_Yellow
					{
						condition="(user22>=0.25)*(user22<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.76999998,0.079999998},
									1
								},
								
								{
									{0.94,0.079999998},
									1
								},
								
								{
									{0.94,0.14},
									1
								},
								
								{
									{0.76999998,0.14},
									1
								},
								
								{
									{0.76999998,0.079999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.090000004
								},
								1
							};
							right[]=
							{
								{0.87900001,0.090000004},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.108
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*4",
									0.115
								},
								1
							};
							right[]=
							{
								{0.87900001,0.115},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*4",
									0.133
								},
								1
							};
						};
					};
					class FLIR_Red: FLIR_Yellow
					{
						condition="(user22>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
					class Engine_Yellow
					{
						condition="(user21>=0.25)*(user21<=0.8)";
						color[]={0.60000002,0.30000001,0};
						alpha=0.60000002;
						class Draw
						{
							width=6;
							points[]=
							{
								
								{
									{0.23,0.0099999998},
									1
								},
								
								{
									{0.40000001,0.0099999998},
									1
								},
								
								{
									{0.40000001,0.07},
									1
								},
								
								{
									{0.23,0.07},
									1
								},
								
								{
									{0.23,0.0099999998},
									1
								},
								{}
							};
						};
						class WarningTextLine1
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.02
								},
								1
							};
							right[]=
							{
								{0.33899999,0.02},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.037999999
								},
								1
							};
						};
						class WarningTextLine2
						{
							source="static";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.135+0.18*1",
									0.045000002
								},
								1
							};
							right[]=
							{
								{0.33899999,0.045000002},
								1
							};
							down[]=
							{
								
								{
									"0.135+0.18*1",
									0.063000001
								},
								1
							};
						};
					};
					class Engine_Red: Engine_Yellow
					{
						condition="(user21>=0.801)";
						color[]={1,0,0};
						class Draw: Draw
						{
						};
						class WarningTextLine1: WarningTextLine1
						{
						};
						class WarningTextLine2: WarningTextLine2
						{
						};
					};
				};
			};
			class MFD_Right_Nav
			{
				topLeft="HUD_4_Top_Left";
				topRight="HUD_4_Top_Right";
				bottomLeft="HUD_4_Bottom_Left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				turret[]={-2};
				class material
				{
					ambient[]={5,5,5,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Direction_Center
					{
						pos[]={0.5,0.55500001};
					};
					class Rotation_0
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="heading";
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=0.75806499;
					};
					class Rotation_10: Rotation_0
					{
						minAngle=10;
						maxAngle=-350;
					};
					class Rotation_20: Rotation_0
					{
						minAngle=20;
						maxAngle=-340;
					};
					class Rotation_30: Rotation_0
					{
						minAngle=30;
						maxAngle=-330;
					};
					class Rotation_40: Rotation_0
					{
						minAngle=40;
						maxAngle=-320;
					};
					class Rotation_50: Rotation_0
					{
						minAngle=50;
						maxAngle=-310;
					};
					class Rotation_60: Rotation_0
					{
						minAngle=60;
						maxAngle=-300;
					};
					class Rotation_70: Rotation_0
					{
						minAngle=70;
						maxAngle=-290;
					};
					class Rotation_80: Rotation_0
					{
						minAngle=80;
						maxAngle=-280;
					};
					class Rotation_90: Rotation_0
					{
						minAngle=90;
						maxAngle=-270;
					};
					class Rotation_100: Rotation_0
					{
						minAngle=100;
						maxAngle=-260;
					};
					class Rotation_110: Rotation_0
					{
						minAngle=110;
						maxAngle=-250;
					};
					class Rotation_120: Rotation_0
					{
						minAngle=120;
						maxAngle=-240;
					};
					class Rotation_130: Rotation_0
					{
						minAngle=130;
						maxAngle=-230;
					};
					class Rotation_140: Rotation_0
					{
						minAngle=140;
						maxAngle=-220;
					};
					class Rotation_150: Rotation_0
					{
						minAngle=150;
						maxAngle=-210;
					};
					class Rotation_160: Rotation_0
					{
						minAngle=160;
						maxAngle=-200;
					};
					class Rotation_170: Rotation_0
					{
						minAngle=170;
						maxAngle=-190;
					};
					class Rotation_180: Rotation_0
					{
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_190: Rotation_0
					{
						minAngle=190;
						maxAngle=-170;
					};
					class Rotation_200: Rotation_0
					{
						minAngle=200;
						maxAngle=-160;
					};
					class Rotation_210: Rotation_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_220: Rotation_0
					{
						minAngle=220;
						maxAngle=-140;
					};
					class Rotation_230: Rotation_0
					{
						minAngle=230;
						maxAngle=-130;
					};
					class Rotation_240: Rotation_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_250: Rotation_0
					{
						minAngle=250;
						maxAngle=-110;
					};
					class Rotation_260: Rotation_0
					{
						minAngle=260;
						maxAngle=-100;
					};
					class Rotation_270: Rotation_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_280: Rotation_0
					{
						minAngle=280;
						maxAngle=-80;
					};
					class Rotation_290: Rotation_0
					{
						minAngle=290;
						maxAngle=-70;
					};
					class Rotation_300: Rotation_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_310: Rotation_0
					{
						minAngle=310;
						maxAngle=-50;
					};
					class Rotation_320: Rotation_0
					{
						minAngle=320;
						maxAngle=-40;
					};
					class Rotation_330: Rotation_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_340: Rotation_0
					{
						minAngle=340;
						maxAngle=-20;
					};
					class Rotation_350: Rotation_0
					{
						minAngle=350;
						maxAngle=-10;
					};
					class Rotation_Inv_0: Rotation_0
					{
						min=0;
						max=360;
						minAngle=180;
						maxAngle=-180;
					};
					class Rotation_Inv_30: Rotation_Inv_0
					{
						minAngle=210;
						maxAngle=-150;
					};
					class Rotation_Inv_60: Rotation_Inv_0
					{
						minAngle=240;
						maxAngle=-120;
					};
					class Rotation_Inv_90: Rotation_Inv_0
					{
						minAngle=270;
						maxAngle=-90;
					};
					class Rotation_Inv_120: Rotation_Inv_0
					{
						minAngle=300;
						maxAngle=-60;
					};
					class Rotation_Inv_150: Rotation_Inv_0
					{
						minAngle=330;
						maxAngle=-30;
					};
					class Rotation_Inv_180: Rotation_Inv_0
					{
						minAngle=360;
						maxAngle=0;
					};
					class Rotation_Inv_210: Rotation_Inv_0
					{
						minAngle=390;
						maxAngle=30;
					};
					class Rotation_Inv_240: Rotation_Inv_0
					{
						minAngle=420;
						maxAngle=60;
					};
					class Rotation_Inv_270: Rotation_Inv_0
					{
						minAngle=450;
						maxAngle=90;
					};
					class Rotation_Inv_300: Rotation_Inv_0
					{
						minAngle=480;
						maxAngle=120;
					};
					class Rotation_Inv_330: Rotation_Inv_0
					{
						minAngle=510;
						maxAngle=150;
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="user";
						sourceIndex=10;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_WP_Center
					{
						pos0[]={0,0};
						pos10[]={0,0};
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=0.75806499;
					};
					class MovementY
					{
						source="user";
						sourceIndex=5;
						refreshRate=0.1;
						min=0;
						max=2;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,-1};
					};
					class MovementX: MovementY
					{
						sourceIndex=4;
						maxPos[]={-1,0};
						minPos[]={1,0};
					};
					class WP1_PosX: MovementX
					{
						sourceIndex=26;
					};
					class WP1_PosY: MovementY
					{
						sourceIndex=27;
					};
					class WP2_PosX: MovementX
					{
						sourceIndex=28;
					};
					class WP2_PosY: MovementY
					{
						sourceIndex=29;
					};
					class WP3_PosX: MovementX
					{
						sourceIndex=30;
					};
					class WP3_PosY: MovementY
					{
						sourceIndex=31;
					};
					class WP4_PosX: MovementX
					{
						sourceIndex=32;
					};
					class WP4_PosY: MovementY
					{
						sourceIndex=33;
					};
					class WP5_PosX: MovementX
					{
						sourceIndex=34;
					};
					class WP5_PosY: MovementY
					{
						sourceIndex=35;
					};
					class WP6_PosX: MovementX
					{
						sourceIndex=36;
					};
					class WP6_PosY: MovementY
					{
						sourceIndex=37;
					};
					class WP7_PosX: MovementX
					{
						sourceIndex=38;
					};
					class WP7_PosY: MovementY
					{
						sourceIndex=39;
					};
					class WP8_PosX: MovementX
					{
						sourceIndex=40;
					};
					class WP8_PosY: MovementY
					{
						sourceIndex=41;
					};
					class WP9_PosX: MovementX
					{
						sourceIndex=42;
					};
					class WP9_PosY: MovementY
					{
						sourceIndex=43;
					};
					class WP10_PosX: MovementX
					{
						sourceIndex=44;
					};
					class WP10_PosY: MovementY
					{
						sourceIndex=45;
					};
					class WP11_PosX: MovementX
					{
						sourceIndex=46;
					};
					class WP11_PosY: MovementY
					{
						sourceIndex=47;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0.12,0};
					condition="on*(user5>=1)*(user5<=1)";
					class Static
					{
						width=4;
						points[]=
						{
							
							{
								{0,0.815},
								1
							},
							
							{
								{1,0.815},
								1
							},
							{},
							
							{
								{0,0.82499999},
								1
							},
							
							{
								{1,0.82499999},
								1
							},
							{},
							
							{
								{0.02,0.15800001},
								1
							},
							
							{
								{0.07,0.15800001},
								1
							},
							
							{
								{0.045000002,0.138},
								1
							},
							
							{
								{0.02,0.15800001},
								1
							},
							{},
							
							{
								{0.02,0.23800001},
								1
							},
							
							{
								{0.07,0.23800001},
								1
							},
							
							{
								{0.045000002,0.25799999},
								1
							},
							
							{
								{0.02,0.23800001},
								1
							},
							{}
						};
					};
					class StaticClip
					{
						clipTL[]={0,0};
						clipBR[]={1,0.815};
						class Static
						{
							width=4;
							points[]=
							{
								
								{
									"Direction_Center",
									{0,-0.43209699},
									1
								},
								
								{
									"Direction_Center",
									{0.098952003,-0.425529},
									1
								},
								
								{
									"Direction_Center",
									{0.19494,-0.406041},
									1
								},
								
								{
									"Direction_Center",
									{0.285,-0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{0.36639601,-0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{0.43662,-0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{0.49362001,-0.216048},
									1
								},
								
								{
									"Direction_Center",
									{0.53562897,-0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{0.56133598,-0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{0.56999999,0},
									1
								},
								
								{
									"Direction_Center",
									{0.56133598,0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{0.53562897,0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{0.49362001,0.216048},
									1
								},
								
								{
									"Direction_Center",
									{0.43662,0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{0.36639601,0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{0.285,0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{0.19494,0.406041},
									1
								},
								
								{
									"Direction_Center",
									{0.098952003,0.425529},
									1
								},
								
								{
									"Direction_Center",
									{0,0.43209699},
									1
								},
								
								{
									"Direction_Center",
									{-0.098952003,0.425529},
									1
								},
								
								{
									"Direction_Center",
									{-0.19494,0.406041},
									1
								},
								
								{
									"Direction_Center",
									{-0.285,0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{-0.36639601,0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{-0.43662,0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{-0.49362001,0.216048},
									1
								},
								
								{
									"Direction_Center",
									{-0.53562897,0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{-0.56133598,0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{-0.56999999,0},
									1
								},
								
								{
									"Direction_Center",
									{-0.56133598,-0.075011998},
									1
								},
								
								{
									"Direction_Center",
									{-0.53562897,-0.14777701},
									1
								},
								
								{
									"Direction_Center",
									{-0.49362001,-0.216048},
									1
								},
								
								{
									"Direction_Center",
									{-0.43662,-0.27775201},
									1
								},
								
								{
									"Direction_Center",
									{-0.36639601,-0.33098599},
									1
								},
								
								{
									"Direction_Center",
									{-0.285,-0.37419599},
									1
								},
								
								{
									"Direction_Center",
									{-0.19494,-0.406041},
									1
								},
								
								{
									"Direction_Center",
									{-0.098952003,-0.425529},
									1
								},
								
								{
									"Direction_Center",
									{0,-0.43209699},
									1
								},
								{}
							};
						};
						class Purple
						{
							color[]={0.11,0.02,0.12};
							alpha=0.40000001;
							class WP
							{
								condition="wpvalid";
								class Draw
								{
									points[]=
									{
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0,
												0.3075
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.022,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.014,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.014,
												0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.014,
												0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.014,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.022,
												0.285
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0,
												0.3075
											},
											1
										},
										{},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.0099999998,
												-0.27000001
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												-0.0099999998,
												-0.3075
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.3075
											},
											1
										},
										
										{
											"Rotation_WP_Center",
											
											{
												"Rotation_WP_Dir",
												0.0099999998,
												-0.27000001
											},
											1
										}
									};
								};
								class WP1
								{
									condition="user26>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="1-WPIndex";
										class WaypointShape
										{
											width=16;
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.0151613},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP2
								{
									condition="user28>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=1)*(WPIndex<=1)";
										class WaypointShape
										{
											width=16;
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP1_PosX",
												1,
												"WP1_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP3
								{
									condition="user30>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=2)*(WPIndex<=2)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP4
								{
									condition="user32>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=3)*(WPIndex<=3)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP5
								{
									condition="user34>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=4)*(WPIndex<=4)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP6
								{
									condition="user36>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=5)*(WPIndex<=5)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP7
								{
									condition="user38>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=6)*(WPIndex<=6)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP8
								{
									condition="user40>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=7)*(WPIndex<=7)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP9
								{
									condition="user42>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=8)*(WPIndex<=8)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP10
								{
									condition="user44>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=9)*(WPIndex<=9)";
										class WaypointShape
										{
											width=22;
											points[]=
											{
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.00758065},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,-0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,-0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,0.00758065},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,-0.001316},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,-0.0025925799},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,-0.0037903199},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,-0.0048728399},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,-0.0058067702},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,-0.0065648402},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,-0.0071235299},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,-0.0074654198},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.00758065},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,0.0151613},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,-0.002632},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,-0.0051851599},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,-0.00758065},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,-0.0097456798},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,-0.0116135},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.0151613},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP10_PosX",
												1,
												"WP10_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										source="static";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class CustomWP
								{
									condition="user46>=0";
									color[]={1,0.5,0};
									alpha=0.5;
									class WaypointShape
									{
										width=6;
										points[]=
										{
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.0151613},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,-0.0149308},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,-0.0142471},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,-0.0131297},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,-0.0116135},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,-0.0097456798},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,-0.00758065},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,-0.0051851599},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,-0.002632},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,0.002632},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,0.0051851599},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												1
						};