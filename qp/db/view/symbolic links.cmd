@echo off
set CURDIR=%~dp0
echo %CURDIR%

echo ---------------------------------------------------------------------------------------------------------------------------
mklink /j %CURDIR%\delegates ..\delegates

echo ---------------------------------------------------------------------------------------------------------------------------
pause
