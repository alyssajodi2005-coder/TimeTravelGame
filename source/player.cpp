#include <iostream>
#include "../headers/player.h"
#include <vector>
#include <string>
using namespace std;
#include "../headers/typewrite.h"

// Constructor to initialize player with a name
Player::Player(const string &user_name){
    name = user_name;
    time_battery = 100; // Initial time battery
    year = 2024; // Starting year
    score = 0;
    money = 50.0; // Starting money
    decades_visited.push_back(2020);
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
double Player::get_money()  {
    return money;
}
// Get player's inventory
vector<string> Player::get_inventory()  {
    return inventory;
}
// Get decades visited
vector<int> Player::get_decades_visited()  {
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
// add money to player's total
void Player::add_money(double amount) {
    money += amount;
}
// Add item to inventory
void Player::add_to_inventory(const string &item) {
    inventory.push_back(item);
}
// Remove item from inventory
void Player::remove_from_inventory(const string &item) {
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i] == item) {
            inventory.erase(inventory.begin() + i);
            break;
        }
    }
}

// bool functions and logic checks and other utilities

// Check if player has enough time battery
bool Player::has_enough_battery(int required) {
    return time_battery >= required;
}
// Check if player has a specific item in inventory
bool Player::has_item(string const &item) {
    if (items.size() == 0){
        return false;
    }
    // I learned about range-based for loops because i wanted to find a better way to loop through vectors,
    // so I looked it up and got this: https://stackoverflow.com/questions/22269435/how-to-iterate-through-a-list-of-objects-in-c
    for (auto const& i :inventory){
        if (i == item){
            return true;
        }
    }
    return false;
}
// check if player has the specific amount of money
bool Player::has_enough_money(double amount) {
    return money >= amount;
}
// Travel to a specific decade
void Player::travel_to_decade(int target_decade) {
    year = target_decade;
    decades_visited.push_back(target_decade);
}

// Print Functions

// Print inventory
void Player::print_inventory(){
    cout << "Inventory Items: ";
    if (inventory.size() == 0){
        cout << "None";
    }
    else {
        for (size_t i = 0 ; i < inventory.size(); i++){
            cout << inventory[i];
            if (i < inventory.size() - 1){
                cout << ", ";
            }
        }
    }
    cout << endl;
}
// Print decades visited
void Player::print_decades_visited(){
    cout << "Decades Visited: ";
    if (decades_visited.size() == 0){
        cout << "None";
    }
    else {
        for (size_t i = 0 ; i < decades_visited.size(); i++){
            cout << decades_visited[i];
            if (i < decades_visited.size() - 1){
                cout << ", ";
            }
        }
    }
    cout << endl;
}

// Display player's information
void Player::GetInfo(){
    cout << "Player Name: " << name << " || Current Year: " << year << " || Time Battery: " << time_battery << "%" << endl;
    cout << "Score: " << score << endl;
    cout << "Money: $" << money << endl;
    cout << "Decades Visited: " ;
    print_decades_visited();
    cout << "Inventory: ";
    print_inventory();

}