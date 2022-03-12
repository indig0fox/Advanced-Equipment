class CfgVehicles 
{
	// GENERATOR
	class B_Ship_MRLS_01_F;
	//class Land_PortableGenerator_01_sand_F;
	class Land_PortableGenerator_01_sand_F_AE3: B_Ship_MRLS_01_F
	{
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		
		// Cargo
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_size = 4;  // Cargo space the object takes

		// Refuel
        ace_refuel_canReceive = 1; // For vehicles which can't be refueled
        ace_refuel_fuelCapacity = 5; // Fuel tank volume
        ace_refuel_flowRate = 1; // Speed?

		class AE3_Device
		{
			displayName = "Generator";
			defaultPowerLevel = 0;

			turnOnAction = "_this call AE3_power_fnc_turnOnGeneratorAction";
			turnOffAction = "_this call AE3_power_fnc_turnOffGeneratorAction";

			class AE3_Generator
			{
				fuelConsumption = 1.5;
				fuelCapacity = 5;
				fuelLevel = 1;

				power = 8/3600;
			};
		};

		/* -------------------- */

		//Quad Bike Override
		faction = "Default";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Electronics";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_PortableGenerator_01_sand_F.jpg";
		model = "\A3\Props_F_Exp\Military\Camps\PortableGenerator_01_F.p3d";
		hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Camps\data\PortableGenerator_01_sand_CO.paa", "a3\props_f_exp\military\camps\data\portablegenerator_01_co.paa", "a3\Props_F_Enoch\Military\Camps\data\PortableGenerator_01_black_CO.paa"};
		icon = "iconObject_1x1"; // Object gets invisible, except the shadow
		picture = "pictureThing";
		displayName = "Generator";
		hasDriver = 0;
		getInAction = "";
		maximumLoad = 0;
		//transportSoldier = 0; // Removes the asset from list
		cargoAction[] = {};
		driverAction = "";
		//typicalCargo[] = {};
		//crew = "B_Soldier_F";
		fuelCapacity = "5 * 0.165";
		fuelConsumptionRate = 0.01;
		textureList[] = {"Sand",1};

		soundEngine[] = {"z\ae3\addons\power\sounds\GeneratorRunningSound.ogg", 5, 1};
		soundStartEngine[] = {"z\ae3\addons\power\sounds\GeneratorStartSound.ogg", 5, 1};
		soundStopEngine[] = {"z\ae3\addons\power\sounds\GeneratorStopSound.ogg", 5, 1};

		class TextureSources
		{
			class Black
			{
				author = "Bohemia Interactive";
				displayName = "Black";
				factions[] = {"BLU_F", "Default"};
				textures[] = {"a3\Props_F_Enoch\Military\Camps\data\PortableGenerator_01_black_CO.paa"};
			};
			class Bluefor
			{
				author = "Bohemia Interactive";
				displayName = "Green";
				factions[] = {"BLU_F", "Default"};
				textures[] = {"a3\props_f_exp\military\camps\data\portablegenerator_01_co.paa"};
			};
			class ParkRanger
			{
				displayName = "Sand";
				author = "Bohemia Interactive";
				factions[] = {"BLU_F", "Default"};
				textures[] = {"a3\Props_F_Enoch\Military\Camps\data\PortableGenerator_01_sand_CO.paa"};
			};
		};
	};


	// Batteries
	class Land_BatteryPack_01_open_sand_F;

	class Land_BatteryPack_01_open_sand_F_AE3 : Land_BatteryPack_01_open_sand_F
	{
		// Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 1};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)

		// Cargo
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_size = 1;  // Cargo space the object takes

		class AE3_Device
		{
			displayName = "Battery";
			defaultPowerLevel = 0;

			turnOnAction = "_this call AE3_power_fnc_turnOnBatteryAction";
			turnOffAction = "_this call AE3_power_fnc_turnOffBatteryAction";

			class AE3_PowerInterface
			{
				internal = 0;
			};

			class AE3_Battery
			{
				capacity = 0.6;
				recharging = 0.3/3600;
				level = 0.6;
				internal = 0;
			};
		};
	};
};