@echo off
echo Installing C++ dependencies (libcurl). Please install it manually.
echo. For example, using a package manager like vcpkg or Chocolatey.
echo. Installing Python dependencies...
cd ..\python
pip install -r requirements.txt
if errorlevel 1 (
    echo Python dependencies installation failed.
    exit /b 1
)
echo Dependencies installed.
