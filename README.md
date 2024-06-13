	{
	    "key": "cmd+h",
	    "command": "-42header.insertHeader",
	    "when": "editorTextFocus"
	},
	{
	    "key": "alt+cmd+h",
	    "command": "-42header.insertHeader",
	    "when": "editorTextFocus"
	},
	{
		"key": "ctrl+tab",
	    "command": "workbench.action.nextEditor"
	},
	{
	    "key": "ctrl+shift+tab",
	    "command": "workbench.action.previousEditor"
	},
	{
		"key": "cmd+s cmd+r",
		"command": "workbench.action.splitEditorRight"
	},
	{
		"key": "cmd+k cmd+\\",
		"command": "-workbench.action.splitEditorRight"
	},
	{
		"key": "ctrl+shift+a",
		"command": "-cursorLineStartSelect",
		"when": "textInputFocus"
	},
	{
		"key": "cmd+enter",
		"command": "editor.action.goToDeclaration",
		"when": "editorHasDefinitionProvider && editorTextFocus && !isInEmbeddedEditor"
	}
