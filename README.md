# Sensor Data Analysis System Overview

This project is a sensor data analysis system that collects, processes, and visualizes sensor data using a combination of C++, Ballerina, and Python.

## Purpose

The primary purpose of this system is to:

* Demonstrate a practical application of combining different programming languages for a cohesive system.
* Provide a platform for students to learn about IoT data pipelines, distributed systems, and data analysis.
* Showcase the capabilities of Ballerina for service development, C++ for hardware interaction, and Python for data science.

## System Architecture

The system consists of three main components:

1.  **C++ Sensor Simulator:**
    * Simulates sensor data and sends it to the Ballerina service.
    * Uses `libcurl` to send HTTP POST requests.
2.  **Ballerina Data Ingestion Service:**
    * Receives sensor data from the C++ simulator.
    * Validates the data and stores it in a CSV file.
    * Exposes an HTTP API for data ingestion.
3.  **Python Data Analysis Script:**
    * Reads sensor data from the CSV file.
    * Performs basic analysis and generates plots.
    * Uses pandas and matplotlib.

## Project Structure

* **`cpp/`:** Contains the C++ sensor simulator code.
* **`ballerina/`:** Contains the Ballerina data ingestion service code.
* **`python/`:** Contains the Python data analysis script.
* **`data/`:** Stores the sensor data CSV file.
* **`docs/`:** Contains project documentation.
* **`scripts/`:** Contains automation scripts.

## Data Flow

1.  The C++ sensor simulator generates sensor data and sends it to the Ballerina service.
2.  The Ballerina service receives the data, validates it, and stores it in the `data/sensor_data.csv` file.
3.  The Python data analysis script reads the data from the CSV file and performs analysis.
4.  The python script displays a plot of the data.

## Getting Started

1.  **Clone the Repository:**
    * Clone the repository to your local machine using your preferred Git client or Visual Studio.
2.  **Install Dependencies:**
    * Refer to the [Installation Guide](docs/installation.md) for detailed instructions on installing the required software and libraries.
3.  **Run the System:**
    * Navigate to the `scripts` folder and run the `run_all.bat` script.
    * Alternatively, you can run the individual scripts (`build_cpp.bat`, `run_ballerina.bat`, `run_python.bat`) in the correct order.
4.  **View the Results:**
    * The Ballerina service will log incoming sensor data to the console.
    * The Python analysis script will display a summary of the data and generate a plot.

## Dependencies

* **C++:**
    * g++ (or a compatible C++ compiler)
    * libcurl
* **Ballerina:**
    * Ballerina runtime
* **Python:**
    * Python 3.x
    * pandas
    * matplotlib

## Documentation

* [Overview](docs/overview.md)
* [Installation Guide](docs/installation.md)
* [Usage Guide](docs/usage.md)

## Scripts

The `scripts` folder contains automation scripts to simplify the development and execution of the system.

* `build_cpp.bat`: Compiles the C++ sensor simulator.
* `run_ballerina.bat`: Starts the Ballerina data ingestion service.
* `run_python.bat`: Runs the Python data analysis script.
* `run_all.bat`: Runs all the scripts in the correct order.
* `install_dependencies.bat`: Helps install python dependencies.

## License

This project is licensed under the [SkotCoding LLC]License.
