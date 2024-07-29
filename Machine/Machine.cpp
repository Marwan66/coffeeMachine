
#include "Machine.hpp"

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
