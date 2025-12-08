#include <iostream>
#include "player.h"
#include <vector>
using namespace std;

Player::Player(string user_name){
        
        name = user_name;
        time_battery = 100; // Initial time battery
        year = 2024; // Starting year
        score = 0;
        money = 50.0; // Starting money

    }

