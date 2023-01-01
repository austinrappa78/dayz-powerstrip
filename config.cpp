class CfgPatches
{
	class Powerstrip
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
class CfgMods
{
	class Powerstrip
	{	
		type = "mod";
		dir = "mods/powerstrip";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "powerstrip Module";
		author = "Austin Rappa";
		authorID = "76561198003692865";
		version = "0.2";
		extra = 0;		
		dependencies[] =
		{
			"Game",
			"World",
			"Mission"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"mods/powerstrip/scripts/3_Game"};
			};
            class worldScriptModule
            {
                value = "";
                files[] = {"mods/powerstrip/scripts/4_World"};
			};
			class missionScriptModule
            {
                value = "";
                files[] = {"mods/powerstrip/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Powerstrip: Inventory_Base
	{
		scope=2;
		displayName="Powerstrip";
		descriptionShort="A surge protector with 4 plugs, made by the Lukow Locos Community Server brand.";
		model="\mods\powerstrip\powerstrip.p3d";
		weight=300;
		itemSize[]={1,2};
		/*
			-1 = not specified; 0 = heavy item; 1= onehanded item; 2 = twohanded item
		*/
		itemBehaviour=1;
		/*
			bottom		32
			top		2
			bottomtop	34
			left		4
			right		8
			leftright	12
			front		1
			back		16
			frontback	17
			all		63
			ignore		64
		*/
		rotationFlags=1;
		slopeTolerance=0.30000001;
		hiddenSelections[]=
		{
			"socket_1_plugged",
			"socket_2_plugged",
			"socket_3_plugged",
			"socket_4_plugged"
		};
		class EnergyManager
		{
			switchOnAtSpawn=1;
			powerSocketsCount=4;
			cordTextureFile="DZ\gear\camping\Data\plug_orange_CO.paa";
			isPassiveDevice=1;
			cordLength=6;
			plugType=2;
			compatiblePlugTypes[]={2,6};
		};
		class AnimationSources
		{
			class socket_1_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_2_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_3_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_4_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
};