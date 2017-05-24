class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	
	// Kill Messages
	ExileServer_object_player_event_onMpKilled = "Custom\ImprovedKillFeed\ExileServer_object_player_event_onMpKilled.sqf";
	
	// Remove Range
	ExileServer_util_getFragPerks = "Custom\ImprovedKillFeed\ExileServer_util_getFragPerks.sqf";
	
	// 1.0.3 Hotfix
	ExileServer_util_getFragKiller = "Custom\ImprovedKillFeed\ExileServer_util_getFragKiller.sqf";
	ExileServer_util_getFragType = "Custom\ImprovedKillFeed\ExileServer_util_getFragType.sqf";
}; 