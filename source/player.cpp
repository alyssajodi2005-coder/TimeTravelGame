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

    //Initialize new stats
    credibility = 50;
    influence = 50;
    knowledge = 50;
    paradoxRisk = 0;

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

// Score management
void Player::add_score(int amount) {
    score += amount;
}

void Player::subtract_score(int amount) {
    score -= amount;
    if (score < 0) score = 0;
}

// Credibility management
void Player::add_credibility(int amount) {
    credibility += amount;
    if (credibility > 100) credibility = 100;
}

void Player::subtract_credibility(int amount) {
    credibility -= amount;
    if (credibility < 0) credibility = 0;
}

// Influence management
void Player::add_influence(int amount) {
    influence += amount;
    if (influence > 100) influence = 100;
}

void Player::subtract_influence(int amount) {
    influence -= amount;
    if (influence < 0) influence = 0;
}

// Knowledge management
void Player::add_knowledge(int amount) {
    knowledge += amount;
    if (knowledge > 100) knowledge = 100;
}

void Player::subtract_knowledge(int amount) {
    knowledge -= amount;
    if (knowledge < 0) knowledge = 0;
}

// Paradox risk management
void Player::add_paradox_risk(int amount) {
    paradoxRisk += amount;
    if (paradoxRisk > 100) paradoxRisk = 100;
}

void Player::subtract_paradox_risk(int amount) {
    paradoxRisk -= amount;
    if (paradoxRisk < 0) paradoxRisk = 0;
}

// Inventory management
void Player::add_to_inventory(const string &item) {
    inventory.push_back(item);
}

void Player::remove_from_inventory(const string &item) {
    auto it = find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end()) {
        inventory.erase(it);
    }
}

// bool functions and logic checks and other utilities

// Check if player has a specific item in inventory
bool Player::has_item(const string &item) {
    return find(inventory.begin(), inventory.end(), item) != inventory.end();
}

// Badge management
void Player::add_badge(const string& badge) {
    if (!has_badge(badge)) {
        badges.push_back(badge);
    }
}

bool Player::has_badge(const string& badge) const {
    return find(badges.begin(), badges.end(), badge) != badges.end();
}

// Scenario tracking
void Player::complete_scenario(const string& scenarioId, const string& choiceId) {
    completedScenarios[scenarioId] = choiceId;
}

bool Player::has_completed_scenario(const string& scenarioId) const {
    return completedScenarios.find(scenarioId) != completedScenarios.end();
}

string Player::get_scenario_choice(const string& scenarioId) const {
    auto it = completedScenarios.find(scenarioId);
    if (it != completedScenarios.end()) {
        return it->second;
    }
    return "";
}

// Ripple management
void Player::add_ripple(const string& rippleId) {
    if (!has_ripple(rippleId)) {
        activeRipples.push_back(rippleId);
    }
}

bool Player::has_ripple(const string& rippleId) const {
    return find(activeRipples.begin(), activeRipples.end(), rippleId) != activeRipples.end();
}

void Player::remove_ripple(const string& rippleId) {
    auto it = find(activeRipples.begin(), activeRipples.end(), rippleId);
    if (it != activeRipples.end()) {
        activeRipples.erase(it);
    }
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
    cout << "Name: " << name << " || Current Year: " << year << " || Score: " << score << endl;
}
 // Print player's stats
void Player::print_stats() {
    cout << "\n=== PLAYER STATS ===" << endl;
    cout << "Score: " << score << endl;
    cout << "Credibility: " << credibility << "/100" << endl;
    cout << "Influence: " << influence << "/100" << endl;
    cout << "Knowledge: " << knowledge << "/100" << endl;
    cout << "Paradox Risk: " << paradoxRisk << "%" << endl;
    cout << "Artifacts: " << inventory.size() << endl;
    cout << "Badges: " << badges.size() << endl;
    cout << "===================" << endl;
}
