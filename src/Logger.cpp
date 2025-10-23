#include "Logger.h"
#include <iostream>
#include <ctime>

std::string getTimestamp()
{
    // Get the current time as a time_t object
    time_t rawtime;
    time(&rawtime);

    // Convert to local time structure (tm)
    struct tm *timeinfo;
    timeinfo = localtime(&rawtime);

    // Create a buffer to store the formatted string
    char buffer[80]; // Adjust buffer size as needed

    // Format the time into a string using strftime
    // Example format: "YYYY-MM-DD HH:MM:SS"
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);

    // Convert the char array to a std::string
    std::string dateTimeString(buffer);
    return dateTimeString;
}

void Logger::Log(const std::string &message)
{
    std::cout << "LOG: [" << getTimestamp() << "] " << message << "\n";
}

void Logger::Err(const std::string &message)
{
    std::cout << "ERR: [" << getTimestamp() << "] " << message << "\n";
}