#include <iostream>
#include "../headers/timeMachine.h"
#include <vector>
using namespace std;
#include "../headers/typewrite.h"
#include "../headers/player.h"


TimeMachine::TimeMachine() {
    machine_energy_level = 100; // Initialize energy level to 100%
}

void TimeMachine::TimeTravel() {
    if (CanTravel()) {
        cout << "    TIME WARP INITIATED" << endl;
        cout << "============================" << endl;
        cout << "    > > >   > > >" << endl;
        cout << "    < < <   < < <" << endl;
        cout << "============================" << endl;
        machine_energy_level -= 20; // Decrease energy level after travel
    } else {
        typewrite("Not enough energy to travel!\n");
        // Handle insufficient energy scenario
    }
}
void TimeMachine::Recharge(int amount) {
    machine_energy_level += amount;
    if (machine_energy_level > 100) {
        machine_energy_level = 100; // Cap energy level at 100%
    }
    typewrite("Time Machine recharged. Current energy level: " + to_string(machine_energy_level) + "%\n");
}
bool TimeMachine::CanTravel(Player &player) const {
    if (machine_energy_level >= 20 && player.get_score() >= 10) {
        return true;
    } else {
        return false;
    }
}