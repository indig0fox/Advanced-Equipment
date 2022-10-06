/**
 * Uses the active prompt, stored in the prompt variable to change the last line of the terminal buffer accordingly, 
 * all stored in the terminal settings of a given computer.
 *
 * Arguments:
 * 1: Computer <OBJECT>
 *
 * Results:
 * None
 */

params ["_computer"];

private _terminal = _computer getVariable "AE3_terminal";

private _terminalBuffer = _terminal get "AE3_terminalBuffer";
private _terminalCursorPosition = _terminal get "AE3_terminalCursorPosition";
private _terminalPrompt = _terminal get "AE3_terminalPrompt";

private _lastBufferLineIndex = (count _terminalBuffer) - 1;
private _lastBufferLine = _terminalBuffer # (_lastBufferLineIndex);

_lastBufferLine = composeText [_lastBufferLine, text _terminalPrompt];

_terminalBuffer set [_lastBufferLineIndex, _lastBufferLine];

_terminalCursorPosition = (count str _lastBufferLine);

_terminal set ["AE3_terminalBuffer", _terminalBuffer];
_terminal set ["AE3_terminalCursorPosition", _terminalCursorPosition];

_computer setVariable ["AE3_terminal", _terminal, true];