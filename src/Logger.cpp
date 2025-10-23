#include "Logger.h"
#include <iostream>

void Logger::Log(const std::string &message)
{
    std::cout << message << "\n";
}

void Logger::Err(const std::string &message)
{
    std::cerr << message << "\n";
}