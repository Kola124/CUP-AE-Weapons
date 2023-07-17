class CfgPatches
{
	class croarmyzg_cup
	{
		units[]={""};
		weapons[]={""};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="CroarmyZG";
		version="0.0.1";
	};
};

class XtdGearModels
{
	class CamoBase;
	class SleevesBase;
	class CfgWeapons
	{	
		class EXT_AK100{
			label="AK-100s [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"variation",
				"GL",
				"RIS"
			};
			class variation{
				label="Variation";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"AK-101",
					"AK-102",
					"AK-103",
					"AK-104",
					"AK-105",
					"AK-107",
					"AK-108",
					"AK-109"
				};
			};
			class GL{
				label="Grenade Launcher";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class RIS{
				label="RIS mount";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes",
					"Zenitco"
				};
			};
		};
		class EXT_AK10{
			label="AK-10s [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"variation",
				"Camo",
				"Underbarrel"
			};
			class variation{
				label="Variation";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"AK-12",
					"AK-15",
					"AK-19"
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Black",
					"Arid",
					"Lush",
					"Tan",
					"Snow Tiger",
					"Tiger",
					"Two Color",
					"Winter",
					"Woodland"
				};
			};
			class Underbarrel{
				label="Underbarrel";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"FG",
					"AFG",
					"GL"
				};
			};
		};
		class EXT_XM8{
			label="XM-8 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"variation",
				"attachment"
			};
			class variation{
				label="Variation";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Carbine",
					"Compact",
					"SAW",
					"Sharpshooter"
				};
			};
			class attachment{
				label="Attachment";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"RIS",
					"Grip",
					"GL"
				};
			};
		};
		class EXT_X95{
			label="X95 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"attachment"
			};
			class attachment{
				label="Attachment";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Grip"
				};
			};
		};
		class EXT_MP7{
			label="MP7 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Woodland"
				};
			};
		};
		class EXT_CZ550{
			label="CZ 550 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"attachment"
			};
			class attachment{
				label="Attachment";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"RIS"
				};
			};
		};
		class EXT_CZ584{
			label="CZ584 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"attachment"
			};
			class attachment{
				label="Attachment";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"RIS"
				};
			};
		};
		class EXT_G22{
			label="G22 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Black"
				};
			};
		};
		class EXT_AWM{
			label="L115A3 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Black"
				};
			};
		};
		class EXT_Shield{
			label="Balistic Shield [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Gun"
			};
			class Gun{
				label="Gun";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"M9",
					"MP7A1",
					"PMM",
					"PP19",
					"Sa61"
				};
			};
		};				
		class EXT_VZ58{
			label="Vz58 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Variation",
				"Camo",
				"RIS",
				"Grip",
				"GL"
			};
			class Variation{
				label="Variation";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Vz 58P",
					"Vz 58Pi",
					"Vz 58V",
					"Vz 58S",
					"Klec",
					"Carbine"
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Woodland",
					"Desert",
					"Wood",
					"Sporter"
				};
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Gastube",
					"Dust Cover"
				};
			};
			class Grip{
				label="Grip";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes",
					"AFG"
				};
			};
			class GL{
				label="GL";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_R11{
			label="R11 RSASS [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Black",
					"Dazzle",
					"Jungle",
					"Sand",
					"Winter",
					"Woodland Netting",
					"Woodland"
				};
			};
		};
		class EXT_M2010{
			label="M2010 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Black",
					"CTRG Tropical",
					"CTRG",
					"Desert",
					"Urban Hex",
					"Winter",
					"Woodland"
				};
			};
		};
		class EXT_M107{
			label="M107 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Black",
					"Dark Grey",
					"Desert",
					"Winter",
					"Woodland"
				};
			};
		};
		class EXT_ACR{
			label="ACR [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Calibre",
				"Variant",
				"Camo",
				"GL"
			};
			class Calibre{
				label="Calibre";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"5.56x45",
					"6.8x43"
				};
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Normal",
					"Carbine",
					"DMR"
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Black",
					"Snow",
					"Tan",
					"Woodland"
				};
			};
			class GL{
				label="Grenade Launcher";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_805BREN{
			label="CZ 805 BREN [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Variant",
				"Camo",
				"GL"
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"BREN A1",
					"BREN A2"
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Black",
					"Coyote"
					
				};
			};
			class GL{
				label="Grenade Launcher";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_BREN2{
			label="CZ BREN 2 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Calibre",
				"Barrel",
				"Camo",
				"GL"
			};
			class Calibre{
				label="Calibre";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"5.56",
					"7.62"
				};
			};
			class Barrel{
				label="Barrel";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"14 in",
					"11 in",
					"8 in"
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Green",
					"Tan"		
				};
			};
			class GL{
				label="Grenade Launcher";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_FAM{
			label="FAMAS F1 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo",
				"RIS"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Arid",
					"Woodland"		
				};
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_SVD{
			label="SVD [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo",
				"RIS"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Woodland"		
				};
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_M60{
			label="M60 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Variant",
				"Camo",
				"RIS"
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"M60",
					"M60E4"		
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Woodland",
					"Jungle"		
				};
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_MAC{
			label="MAC-10 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_MG3{
			label="MG3 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_SKS{
			label="SKS [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_SAIGA{
			label="Saiga 12K [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_STG{
			label="StG 58 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_LEE{
			label="No.4 Mk. I [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_SA61{
			label="Sa vz. 61 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_ROM{
			label="Romat [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_M21{
			label="M21 SWS [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_G1{
			label="G1 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_FNMAG{
			label="MAG 60.20 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes",
					"Plastic"
				};
			};
		};
		class EXT_L7A2{
			label="L7A2 GPMG [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_G36{
			label="G36 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Variant",
				"Camo",
				"Grip",
				"RIS"
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"G36",
					"G36C",
					"G36E",
					"G36K",
					"G36K-KSK",
					"G36A3",
					"G36CA3",			
					"G36KA3",
					"MG36"
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Woodland",
					"Hex"
				};
			};
			class Grip{
				label="Grip/GL";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes",		
					"GL",
					"AFG"
				};
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Yes",
					"No"
				};
			};
		};
		class EXT_SCAR{
			label="SCAR [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Variant",
				"Type",
				"Camo",
				"Grip"
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Mk 16",
					"Mk 17"
				};
			};
			class Type{
				label="Type";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Standard",
					"CQC",
					"SV"
				};
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Black",
					"Woodland"
				};
			};
			class Grip{
				label="Grip/GL";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"FG",		
					"AFG",
					"Surefire",
					"GL",
				};
			};
		};
		class EXT_SR3M{
			label="SR-3M Vikhr [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS",
				"Grip"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class Grip{
				label="Grip";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_VSS{
			label="VSS Vintorez [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS",
				"Attachment"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class Attachment{
				label="Attachment";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Grip",
					"Flashlight"
				};
			};
		};
		class EXT_MK14{
			label="Mk14 MOD [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Black",
					"Desert",
					"Woodland"
				};
			};
		};
		class EXT_M240{
			label="M240 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Variant"
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"M240",
					"M240B",
					"M240G"
				};
			};
		};
		class EXT_ASVAL{
			label="AS Val [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"RIS",
				"Attachment"
			};
			class RIS{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
			class Attachment{
				label="Attachment";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Grip",
					"Flashlight"
				};
			};
		};
		class EXT_416{
			label="HK416 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo",
				"Variant",
				"Underbarrel"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Woodland"
				};
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"HK416",
					"HK416 CQC",
					"HK417 CQC",
					"HK417 DMR"
				};
			};
			class Underbarrel{
				label="Underbarrel";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"M203",
					"M320"
				};
			};
		};
		class EXT_M27{
			label="M27 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Underbarrel"
			};
			class Underbarrel{
				label="Underbarrel";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Grip",
					"GL"
				};
			};
		};
		class EXT_M3A1{
			label="M3A1 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Grey",
					"Black",
					"Green",
					"Sand"
				};
			};
		};
		class EXT_L129{
			label="L129A1 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Camo",
				"Grip"
			};
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Arid",
					"Tropical",
					"Desert",
					"Woodland"
				};
			};
			class Grip{
				label="Grip";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};
		};
		class EXT_G3A3{
			label="G3A3 [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Colour",
				"Grip"
			};
			class Colour{
				label="Colour";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Black"
				};
			};
			class Grip{
				label="Grip";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Grip",
					"Widegrip"
				};
			};
		};
		class EXT_FAL{
			label="FAL [CUP]";
			author="Community Upgrade Project";
			options[]=
			{
				"Variant",
				"Camo",
				"Ris"
			};
			class Variant{
				label="Variant";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"FAL G",
					"FAL OSW",
					"FAL 5000",
					"FAL 5060",
					"FAL 5061",
					"FAL 5062",
					"FAL 5063"
				};
			};
			class Ris{
				label="RIS";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"No",
					"Yes"
				};
			};		
			class Camo{
				label="Camo";
				changeingame=0;
				alwaysSelectable = 1;
				values[]=
				{
					"Default",
					"Desert",
					"Sand",
					"Woodland",
					"Rhodesian"
				};
			};
		};
	};
};
class CfgWeapons{
		#include "\cupOaceext\ak100.hpp"
		#include "\cupOaceext\ak10.hpp"
		#include "\cupOaceext\ostoruzjeext.hpp"
		#include "\cupOaceext\vz58.hpp"
		#include "\cupOaceext\acribren.hpp"
		#include "\cupOaceext\njemacka.hpp"
		#include "\cupOaceext\scar.hpp"
};