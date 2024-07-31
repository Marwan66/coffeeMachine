#include <string> 

#include "Machine.hpp"
#include "../Logger/Log.hpp"

void Machine::refillWater(int amount)
{
    machineData.m_waterTankLevel = machineData.m_waterTankLevel + amount;

}

void Machine::refillCoffee(int amount)
{
    machineData.m_coffeeLevel = machineData.m_coffeeLevel + amount;

}

void Machine::emptyCoffeeWaste (void)
{
    machineData.m_coffeeWasteTank = 0U;
}

void Machine::initMachine(MachineData data)
{
    machineData.m_coffeeTank = data.m_coffeeTank;
    machineData.m_coffeeWasteTank = data.m_coffeeWasteTank;
}

void Machine::PowerOnOff(void)
{
    machineData.m_PowerState = !machineData.m_PowerState;
    std::string s = "CoffeeMachine PowerState";
    std::string y = s + std::to_string(int(machineData.m_PowerState));
    Log::Get().logError(Log::LogLevelTrace, y.c_str());
    
    //std::to_string(machineData.m_PowerState));
}
