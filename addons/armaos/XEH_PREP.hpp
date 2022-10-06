/* Module Functions */
PREP(module_addUser);

/* Shell Functions */
PREP(shell_process);
PREP(shell_getAvailableCommands);
PREP(shell_findLoginUser);
PREP(shell_validatePassword);
PREP(shell_getHomeDir);
PREP(shell_executeFile);
PREP(shell_stdout);
PREP(shell_stdin);


/* Computer Functions */
PREP(computer_playSoundStart);
PREP(computer_playSoundStop);
PREP(computer_playSoundStandby);

PREP(computer_standby);
PREP(computer_turnOn);
PREP(computer_turnOff);

/* OS Link Functions */
PREP(link_add);
PREP(link_init);

/* OS Internal Functions */
PREP(os_cd);
PREP(os_chat);
PREP(os_clear);
PREP(os_date);
PREP(os_help);
PREP(os_history);
PREP(os_ipconfig);
PREP(os_logout);
PREP(os_ls);
PREP(os_man);
PREP(os_mv);
PREP(os_ping);
PREP(os_print);
PREP(os_rm);
PREP(os_whoami);
PREP(os_shutdown);
PREP(os_standby);
PREP(os_standby);

/* Terminal Functions */
PREP(terminal_init);
PREP(terminal_addEventHandler);
PREP(terminal_addChar);
PREP(terminal_addCharToInput);
PREP(terminal_addLines);
PREP(terminal_addString);
PREP(terminal_removeChar);
PREP(terminal_removeCharFromInput);
PREP(terminal_addHeader);
PREP(terminal_setPrompt);
PREP(terminal_updateOutput);
PREP(terminal_getAllowedKeysDE);
PREP(terminal_getAllowedKeysUS);
PREP(terminal_getHeaderText);
PREP(terminal_updateBufferVisable);
PREP(terminal_updatePromptPointer);
PREP(terminal_addToHistory);
PREP(terminal_setKeyboardLayout);
PREP(terminal_switchKeyboardLayout);
PREP(terminal_setCommandLineByHistory);
PREP(terminal_setInputMode);