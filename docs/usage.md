# Usage Guide

This guide provides instructions on how to run the Sensor Data Analysis System.

## Running the System

1.  **Build the C++ Simulator:**
    * Navigate to the `scripts` folder in your command prompt.
    * Run the `build_cpp.bat` script.
    * Example command: `scripts\build_cpp.bat`
2.  **Start the Ballerina Service:**
    * Run the `run_ballerina.bat` script in the `scripts` folder.
    * Example command: `scripts\run_ballerina.bat`
3.  **Run the Python Analysis Script:**
    * Run the `run_python.bat` script in the `scripts` folder.
    * Example command: `scripts\run_python.bat`

## Using the `run_all.bat` Script.

* The `run_all.bat` script automates the entire process.
* Run the `run_all.bat` script in the `scripts` folder to build the C++ simulator, start the Ballerina service, and run the Python analysis script.
* Example command: `scripts\run_all.bat`

## Interpreting the Results

* **Ballerina Service Output:**
    * The Ballerina service will log incoming sensor data to the console.
    * Example log output: `Received sensor data: {"temperature": 25.5, "humidity": 60.2}`
* **Python Analysis Output:**
    * The Python analysis script will display a summary of the data and generate a plot.
    * The data summary will display the mean, and standard deviation of the data.
    * The plot will show the temperature and humidity over time.
    * If any errors occur, the python script will display an error message.
