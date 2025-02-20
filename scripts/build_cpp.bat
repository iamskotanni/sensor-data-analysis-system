@echo off
cd ..\cpp
g++ sensor_simulator.cpp -o sensor_simulator -lcurl
if errorlevel 1 (
    echo C++ build failed.
    exit /b 1
)
echo C++ build complete.
