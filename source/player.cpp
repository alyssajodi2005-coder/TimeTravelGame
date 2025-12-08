#include <iostream>
#include "../headers/player.h"
#include <vector>
using namespace std;
#include "../headers/typewrite.h"

// Constructor to initialize player with a name
Player::Player(const string &user_name){
    name = user_name;
    time_battery = 100; // Initial time battery
    year = 2024; // Starting year
    score = 0;
    money = 50.0; // Starting money
}

// Getter methods

// Get player's name 
string Player::get_name() const {
    return name;
}

// Get current year
int Player::get_year() {
    return year;
}
// Get time battery level
int Player::get_time_battery() {
    return time_battery;
}
// Get player's score
int Player::get_score() {
    return score;
}
// Get player's money
double Player::get_money() {
    return money;
}
// Get player's inventory
vector<string> Player::get_inventory() {
    return inventory;
}
// Get decades visited
vector<int> Player::get_decades_visited() {
    return decades_visited;
}


// Setter methods

// Set current year
void Player::set_year(int new_year) {
    year = new_year;
}
// drain time battery level
void Player::drain_battery(int amount) {
    time_battery -= amount;
    if (time_battery < 0){
        time_battery = 0;
    }
}
// charge time battery level
void Player::charge_battery(int amount ) {
    time_battery += amount;
    if (time_battery > 100){
        time_battery = 100;
    }
}
// add to player's score
void Player::add_score(int amount) {
    score += amount;
}
// subtract from player's score
void Player::subtract_score(int amount) {
    score -= amount;
    if (score < 0){
        score = 0;
    }
}
// Spend player's money
void Player::spend_money(double amount) {
    money -= amount;
    if (money < 0){
        money = 0;
    }
}



// Display player's information
void Player::GetInfo(){
    cout << "Player Name: " << get_name() << " || Current Year: " << get_year() << " || Time Battery: " << get_time_battery() << "%" << endl;
    cout << "Score: " << get_score() << endl;
    cout << "Money: $" << get_money()    << endl;
    cout << "Inventory: " << ;
    for (int i = 0l i < get_inventory(),size(); i++){
        cout << get_inventory()[i];
        if (i < get_inventory().size() - 1){
            cout << ", ";
        }
    }
    cout << endl;
}
