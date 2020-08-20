class CfgPatches
{
	class A3_Anims_F_Mark_Deployment
	{
		addonRootClass="A3_Anims_F_Mark";
		units[]={};
		weapons[]={};
	};
};
class CfgExtendedAnimation
{
	class WeaponDeployment
	{
		poses[]=
		{
			"Pose_150",
			"Pose_140",
			"Pose_130",
			"Pose_110",
			"Pose_90",
			"Pose_100",
			"Pose_80",
			"Pose_120",
			"Pose_60"
		};
		class Pose_60
		{
			height=0.5;
			exit="amovpknlmstpsraswrfldnon";
			states[]=
			{
				"Bipod_60_TopLeft",
				"Bipod_60_TopRight",
				"Bipod_60_CenterLeft",
				"Bipod_60_CenterRight",
				"Bipod_60_BottomLeft",
				"Bipod_60_BottomRight"
			};
		};
		class Pose_80
		{
			height=0.60000002;
			exit="amovpknlmstpsraswrfldnon";
			states[]=
			{
				"Bipod_80_TopLeft",
				"Bipod_80_TopRight",
				"Bipod_80_CenterLeft",
				"Bipod_80_CenterRight",
				"Bipod_80_BottomLeft",
				"Bipod_80_BottomRight"
			};
		};
		class Pose_90
		{
			height=0.74000001;
			exit="amovpknlmstpsraswrfldnon";
			states[]=
			{
				"Bipod_90_TopLeft",
				"Bipod_90_TopRight",
				"Bipod_90_CenterLeft",
				"Bipod_90_CenterRight",
				"Bipod_90_BottomLeft",
				"Bipod_90_BottomRight"
			};
		};
		class Pose_100
		{
			height=0.89999998;
			exit="amovpknlmstpsraswrfldnon";
			states[]=
			{
				"Bipod_100_TopLeft",
				"Bipod_100_TopRight",
				"Bipod_100_CenterLeft",
				"Bipod_100_CenterRight",
				"Bipod_100_BottomLeft",
				"Bipod_100_BottomRight"
			};
		};
		class Pose_110
		{
			height=0.94999999;
			exit="amovpercmstpsraswrfldnon";
			states[]=
			{
				"Bipod_110_TopLeft",
				"Bipod_110_TopRight",
				"Bipod_110_CenterLeft",
				"Bipod_110_CenterRight",
				"Bipod_110_BottomLeft",
				"Bipod_110_BottomRight"
			};
		};
		class Pose_120
		{
			height=1;
			exit="amovpercmstpsraswrfldnon";
			states[]=
			{
				"Bipod_120_TopLeft",
				"Bipod_120_TopRight",
				"Bipod_120_CenterLeft",
				"Bipod_120_CenterRight",
				"Bipod_120_BottomLeft",
				"Bipod_120_BottomRight"
			};
		};
		class Pose_130
		{
			height=1.1;
			exit="amovpercmstpsraswrfldnon";
			states[]=
			{
				"Bipod_130_TopLeft",
				"Bipod_130_TopRight",
				"Bipod_130_CenterLeft",
				"Bipod_130_CenterRight",
				"Bipod_130_BottomLeft",
				"Bipod_130_BottomRight"
			};
		};
		class Pose_140
		{
			height=1.15;
			exit="amovpercmstpsraswrfldnon";
			states[]=
			{
				"Bipod_140_TopLeft",
				"Bipod_140_TopRight",
				"Bipod_140_CenterLeft",
				"Bipod_140_CenterRight",
				"Bipod_140_BottomLeft",
				"Bipod_140_BottomRight"
			};
		};
		class Pose_150
		{
			height=1.2;
			exit="amovpercmstpsraswrfldnon";
			states[]=
			{
				"Bipod_150_TopLeft",
				"Bipod_150_TopRight",
				"Bipod_150_CenterLeft",
				"Bipod_150_CenterRight",
				"Bipod_150_BottomLeft",
				"Bipod_150_BottomRight"
			};
		};
		class Prone
		{
			height=1.4;
			exit="amovppnemstpsraswrfldnon";
			states[]=
			{
				"ProneBipod_TopLeft",
				"ProneBipod_TopRight",
				"ProneBipod_CenterLeft",
				"ProneBipod_CenterRight",
				"ProneBipod_BottomLeft",
				"ProneBipod_BottomRight"
			};
		};
	};
};