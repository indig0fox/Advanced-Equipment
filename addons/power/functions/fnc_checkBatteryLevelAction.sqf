params ["_entity"];

private _class = typeOf _entity;

private _batteryLevel = _entity getVariable "AE3_batteryLevel";
private _batteryCapacity = _entity getVariable "AE3_batteryCapacity";
private _batteryLevelPercent = (_batteryLevel / _batteryCapacity) * 100;
hint format ["Battery Level: %1 Wh (%2%3)", _batteryLevel  * 1000, _batteryLevelPercent, "%"];