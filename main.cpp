#include <iostream>
#include <vector>
#include <string>

#include "Logger/Log.hpp"
#include "Machine/Machine.hpp"

using namespace std;

int main()
{
    /* Initialize Logger*/
    Log logger;
    logger.SetLevel(Log::LogLevelTrace);
    logger.logError(Log::LogLevelTrace, "First print");
    
    Machine coffeeMachine;
    coffeeMachine.initMachine(
        {.m_PoweredOn = false,
         .m_coffeeLevel = 0U,});

}