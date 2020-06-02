
@echo off
SETLOCAL

CALL "%~dp0lib\CICDTest.exe" %*
EXIT /B %ERRORLEVEL%
ENDLOCAL
