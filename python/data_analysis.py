import pandas as pd
import matplotlib.pyplot as plt
import os

def analyze_sensor_data(data_file="data/sensor_data.csv"):
    """Reads sensor data from a CSV file, performs basic analysis, and creates a plot."""

    if not os.path.exists(data_file):
        print(f"Error: Data file '{data_file}' not found.")
        return

    try:
        df = pd.read_csv(data_file, names=["temperature", "humidity"])

        print("Data Summary:")
        print(df.describe())

        # Plotting
        plt.figure(figsize=(10, 5))
        plt.plot(df["temperature"], label="Temperature")
        plt.plot(df["humidity"], label="Humidity")
        plt.xlabel("Data Points")
        plt.ylabel("Value")
        plt.title("Sensor Data Over Time")
        plt.legend()
        plt.grid(True)
        plt.show()

    except FileNotFoundError:
        print(f"Error: Data file '{data_file}' not found.")
    except pd.errors.EmptyDataError:
        print(f"Error: Data file '{data_file}' is empty.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    analyze_sensor_data()
