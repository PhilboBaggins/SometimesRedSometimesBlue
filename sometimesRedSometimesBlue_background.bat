@echo off

set /a RED  = 40
set /a BLUE = 10

set /a num=%random% %% 2
if %num% equ 0 (color %RED%) else (color %BLUE%)
