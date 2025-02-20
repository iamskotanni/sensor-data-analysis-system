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
