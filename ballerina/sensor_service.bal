import ballerina/http;
import ballerina/io;
import ballerina/log;
import ballerina/os;

service /sensors on new http:Listener(9090) {
    resource function post data(@http:Payload json payload) returns http:Response|error {
        io:println("Received sensor data: ", payload);

        if payload is json && payload.hasKey("temperature") && payload.hasKey("humidity") {
            decimal temperature = <decimal>payload.temperature;
            decimal humidity = <decimal>payload.humidity;

            if temperature >= 0 && temperature <= 50 && humidity >= 0 && humidity <= 100 {
                log:printInfo("Valid data received: " + temperature.toString() + ", " + humidity.toString());

                // CSV Storage
                string csvLine = temperature.toString() + "," + humidity.toString() + os:NEWLINE;
                check io:fileWrite("data/sensor_data.csv", csvLine, append = true);

                return http:CREATED;
            } else {
                log:printError("Invalid data range");
                return http:BadRequest("Invalid data range");
            }
        } else {
            log:printError("Invalid data format");
            return http:BadRequest("Invalid data format");
        }
    }
}
