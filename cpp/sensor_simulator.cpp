#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <curl/curl.h>
#include <sstream>
#include <random>

size_t writeCallback(char *contents, size_t size, size_t nmemb, std::string *response) {
    size_t totalSize = size * nmemb;
    response->append(contents, totalSize);
    return totalSize;
}

int main() {
    CURL *curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:9090/sensors/data");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, 0L);
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, curl_slist_append(nullptr, "Content-Type: application/json"));
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);

        std::string response;
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        // Random number generation setup
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> tempDist(20.0, 30.0); // Temperature range
        std::uniform_real_distribution<> humidityDist(50.0, 70.0); // Humidity range

        while(true){
            // Generate random sensor data
            double temperature = tempDist(gen);
            double humidity = humidityDist(gen);

            // Create JSON data
            std::stringstream ss;
            ss << "{\"temperature\": " << temperature << ", \"humidity\": " << humidity << "}";
            std::string jsonData = ss.str();

            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonData.c_str());

            res = curl_easy_perform(curl);
            if (res != CURLE_OK) {
                std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
            } else {
                std::cout << "Data sent. Response: " << response << std::endl;
            }
            std::this_thread::sleep_for(std::chrono::seconds(5)); // Send data every 5 seconds
        }
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}
