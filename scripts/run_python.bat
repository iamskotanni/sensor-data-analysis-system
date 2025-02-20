@echo off
cd ..\python
python data_analysis.py
if errorlevel 1 (
    echo Python analysis failed.
    exit /b 1
)
echo Python analysis complete.
