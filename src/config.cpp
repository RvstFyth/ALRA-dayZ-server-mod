class CfgPatches
{
    class AlraServerMod
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DayZExpansion_Scripts"
        };
    };
};
class CfgMods
{
    class AlraServerMod
    {
        dir="AlraServerMod";
        picture="";
        action="";
        hideName=1;
        hidePicture=1;
        name="AlraServerMod";
        credits="RvStFyth";
        author="RvStFyth";
        authorID="0";
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]=
        {
            "Game"
        };
        class defs
        {
            class gameScriptModule
            {
                value="";
                files[]=
                {
                    "AlraServerMod/Scripts/3_Game"
                };
            };
        };
    };
};