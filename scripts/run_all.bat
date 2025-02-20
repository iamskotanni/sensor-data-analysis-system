@echo off
call build_cpp.bat
if errorlevel 1 exit /b 1
start cmd /c run_ballerina.bat
timeout 5
call run_python.bat
if errorlevel 1 exit /b 1
