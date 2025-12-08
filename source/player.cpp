#include <iostream>
#include "../headers/player.h"
#include <vector>
using namespace std;
#include "../headers/typewrite.h"


Player::Player(const string &user_name){
    name = user_name;
    time_battery = 100; // Initial time battery
    year = 2024; // Starting year
    score = 0;
    money = 50.0; // Starting money
}
void Player::GetInfo(){
    cout << "Player Name: " << name << " || Current Year: " << year << " || Time Battery: " << time_battery << "%" << endl;
    cout << "Score: " << score << endl;
    cout << "Money: $" << money << endl;
    cout << "Inventory: ";
    
}
