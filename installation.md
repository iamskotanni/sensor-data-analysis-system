## Setup Steps

1.  **Clone the Repository:**
    * Clone the repository to your local machine using your preferred Git client or Visual Studio.
2.  **Install Dependencies:**
    * Run the `install_dependencies.bat` script in the scripts folder.
3.  **Add to Path:**
    * Add the C++ compiler, Ballerina, and Python executables to your system's PATH environment variable.
4.  **Virtual Environment (Python):**
    * It is highly recommended to create a virtual environment inside of the python folder using the command `python -m venv venv`.
    * Activate the virtual environment with `venv\Scripts\activate.bat`.
    * After activating the virtual environment, install the python dependancies.
5.  **libcurl:**
    * install libcurl. On windows, you can use vcpkg or chocolatey.

## Verifying Installation

* **C++:**
    * Open a command prompt and run `g++ --version`.
* **Ballerina:**
    * Open a command prompt and run `bal --version`.
* **Python:**
    * Open a command prompt and run `python --version`.
* **Python Libraries:**
    * Run `pip list` to ensure that pandas and matplotlib are installed.
