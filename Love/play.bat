@ECHO OFF

if "%PROCESSOR_ARCHITECTURE%"=="AMD64" goto 64BIT

:32BIT
set LOVE_PATH=%PROGRAMFILES%\LOVE\love
goto start_app

:64BIT
set LOVE_PATH=%ProgramFiles(x86)%\LOVE\love
goto start_app

:start_app
start "" "%LOVE_PATH%" --console .
