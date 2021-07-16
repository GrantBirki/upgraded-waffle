#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

;
; AutoHotkey script file for Birki
; If you wish to use this script, change all paths to your own home directory
;

^!NumpadIns::
MsgBox, 0
return

^!NumpadEnd::
MsgBox, 1
return

^!NumpadDown::
MsgBox, 2
return

^!NumpadPgDn::
Run brave.exe "https://github.com/grantbirki/"
return

^!NumpadLeft::
MsgBox, 4
return

^!NumpadClear::
Run python.exe C:\Users\Birki\upgraded-waffle\scripts\5_pi_hole_disable.py
return

^!NumpadRight::
MsgBox, 6
return

^!NumpadHome::
MsgBox, 7
return

; Disabled
; ^!NumpadUp::
; MsgBox, 8
; return

^!NumpadPgUp::
MsgBox, 9
return

^!+NumpadIns::
MsgBox, 10
return

^!+NumpadEnd::
MsgBox, 11
return

^!+NumpadDown::
MsgBox, 12
return

^!+NumpadPgDn::
MsgBox, 13
return

^!+NumpadLeft::
MsgBox, 14
return

^!+NumpadClear::
MsgBox, 15
return
