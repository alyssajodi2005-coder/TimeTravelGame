#include <iostream>
#include "../headers/player.h"
#include <vector>
#include <string>
using namespace std;
#include "../headers/typewrite.h"
#include "../headers/decades.h"


// Constructor to initialize player with a name
Player::Player(const string &user_name){
    name = user_name;
    year = 2024; // Starting year
    score = 0;
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
// Get player's score
int Player::get_score() {
    return score;
}
// Get player's inventory
vector<string> Player::get_inventory()  {
    return inventory;
}


// Setter methods

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
// Add item to inventory
void Player::add_to_inventory(const string &item) {
    inventory.push_back(item);
}
// Remove item from inventory
void Player::remove_from_inventory(const string &item) {
    for (size_t i = 0; i < inventory.size(); i++) {
        if (inventory[i] == item) {
            inventory.erase(inventory.begin() + i);
            break;
        }
    }
}

// bool functions and logic checks and other utilities

// Check if player has a specific item in inventory
bool Player::has_item(string const &item) {
    if (inventory.size() == 0){
        return false;
    }
    for (auto const& i :inventory){
        if (i == item){
            return true;
        }
    }
    return false;
}

// Travel to a specific decade
void Player::travel_to_decade(Decades &decade) {
    vector<int> decade_years = {2020, 2010, 2000, 1990, 1980, 1970, 1960, 1950, 1940, 1930, 1920};
    int level = decade.GetLevel();
    vector<int> years = decade.GetYears();
    if (level >= 1 && level <= years.size()) {
        year = years[level - 1];
        decades_visited.push_back(decade_years[level - 1]);
    }
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
    cout << "Player Name: " << name << " || Current Year: " << year << endl;
    cout << "Score: " << score << endl;
    cout << "Decades Visited: " ;
    print_decades_visited();
    cout << "Inventory: ";
    print_inventory();

}