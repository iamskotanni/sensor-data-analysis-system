@echo off
cd ..\ballerina
bal run sensor_service.bal
if errorlevel 1 (
    echo Ballerina service failed to start.
    exit /b 1
)
echo Ballerina service started.
