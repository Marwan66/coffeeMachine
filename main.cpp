#include <iostream>
#include <vector>
#include <string>

#include "Logger/Log.hpp"
#include "Machine/Machine.hpp"

using namespace std;

void printCoffeeMachineActions(void);
void handleCoffeeMachineAction(int action, Machine * coffeeMachine);

int main()
{
    /* Initialize Logger*/
    Log::Get().SetLevel(Log::LogLevelTrace); /* using Singleton class for Logger*/
    Log::Get().logError(Log::LogLevelTrace, "First print");
    
    Machine coffeeMachine;
    coffeeMachine.initMachine(
        {.m_PowerState = false,
         .m_coffeeLevel = 0U,});
    int userInput;
    
    printCoffeeMachineActions();
    cin >> userInput; // Get user input from the keyboard
    cout << userInput << "\n";

    handleCoffeeMachineAction(userInput, &coffeeMachine);

}

void handleCoffeeMachineAction(int action, Machine * coffeeMachine)
{
    switch (action)
    {
    case 1:
        coffeeMachine->PowerOnOff();
        break;
    
    default:
        break;
    }
}

void printCoffeeMachineActions(void)
{
    cout << "Choose an action for the coffe machine\n";
    cout << "1: Power On/Off\n";
    cout << "2: Coffee\n";
    cout << "3: Espresso\n";
}