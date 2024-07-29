#ifndef MACHINE_HPP
#define MACHINE_HPP

#include "../UserConfiguration/machine_Configuration.hpp"

class Machine 
{
    public:
        struct MachineData{
            bool m_PoweredOn = false;
            const int m_waterTank = WATER_TANK_SIZE;
            int m_coffeeTank;
            int m_coffeeWasteTank;
            int m_coffeeLevel;
            int m_waterTankLevel;
        };

    public:
        void initMachine(MachineData data);
        void refillWater(int amount);
        void refillCoffee(int amount);
        void emptyCoffeeWaste(void);

        MachineData machineData;


};

#endif