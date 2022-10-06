/**
 * Adds a string or text to last line of the output buffer.
 *
 * Arguments:
 * 1: Computer <OBJECT>
 * 2: Command <STRING>
 *
 * Results:
 * None
 */

params ["_computer", "_line"];

private _terminal = _computer getVariable "AE3_terminal";

private _terminalBuffer = _terminal get "AE3_terminalBuffer";
private _terminalMaxColumns = _terminal get "AE3_terminalMaxColumns";
private _lastBufferLineIndex = (count _terminalBuffer) - 1;
private _lastBufferLine = text "";

if (_lastBufferLineIndex >= -1) then 
{
	_lastBufferLine = _terminalBuffer select _lastBufferLineIndex;
};
hint _lastBufferLine;
private _lastBufferLineCount = count (str _lastBufferLine);
private _croppedOutputLines = [];
private _tmpLine = _line;
/*
if (!(_line isEqualTo (text ""))) then
{
	while {(count _tmpLine) >= (_terminalMaxColumns - _lastBufferLineCount)} do
	{
		_croppedOutputLines pushBack (composeText [_lastBufferLine, text (_line select [0, _terminalMaxColumns - _lastBufferLineCount + 1])]);	
		_tmpLine = _tmpLine select [_terminalMaxColumns + 1];
	};
	_croppedOutputLines pushBack _tmpLine;
}else
{
	_croppedOutputLines pushBack (composeText [_lastBufferLine, _tmpLine]);
};
*/

_croppedOutputLines pushBack (composeText [text _line, _lastBufferLine]);

_terminalBuffer deleteAt _lastBufferLineIndex;
_terminalBuffer append _croppedOutputLines;

private _terminalCursorLine = (count _terminalBuffer) + 1;

_terminalCursorPosition = 0;

_terminal set ["AE3_terminalBuffer", _terminalBuffer];
_terminal set ["AE3_terminalCursorLine", _terminalCursorLine];
_terminal set ["AE3_terminalCursorPosition", _terminalCursorPosition];

_computer setVariable ["AE3_terminal", _terminal, true];