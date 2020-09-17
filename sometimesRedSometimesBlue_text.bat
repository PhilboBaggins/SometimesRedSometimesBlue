@echo off

set /a RED  = 04
set /a BLUE = 01

set /a num=%random% %% 2
if %num% equ 0 (color %RED%) else (color %BLUE%)
