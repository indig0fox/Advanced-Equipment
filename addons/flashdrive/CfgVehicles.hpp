class CfgVehicles 
{
	/* ================================================================================ */
	// Flash Drive
	class Land_USB_Dongle_01_F;
	class FlashDrive_AE3: Land_USB_Dongle_01_F
	{
		scope=2;
		magazine = Item_FlashDisk_AE3;

		 class ACE_Actions {
            class GVAR(pickup) {
                displayName = CSTRING(Pickup);
                icon = "\a3\ui_f\data\igui\cfg\actions\take_ca.paa";
                distance = 2;
                //condition = QUOTE(_this call FUNC(canPickup));
                statement = "_this remoteExecCall ['AE3_flashdrive_fnc_obj2item', 2];";
            };
        };
	};

	/* ================================================================================ */

};