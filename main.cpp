#include <iostream>
#include "logger.h"

int main()
{
    Logger log;
    log.Log(Logger::info,"this is info");
    log.Log(Logger::warning,"this is warning");
    log.Log(Logger::error,"this is error");

    log<<"Info message";

    Logger log2("LogFile",Logger::error);
    log2<<"Error message";
    return 0;
}