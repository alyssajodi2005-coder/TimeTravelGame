#ifndef TIMEMACHINE_H
#define TIMEMACHINE_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// TODO: add TimeMachine declarations
class TimeMachine {
    private:
        int machine_energy_level; // Energy level percentage

    public:
        TimeMachine();
        void TimeTravel();
        void Recharge(int amount);
        bool CanTravel(Player &player) const;
};

#endif // TIMEMACHINE_H