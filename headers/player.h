#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Player{
    // Private member variables 

    // Time Battery indicates how much time travel energy the player has left;
    int time_battery;
    // Name of the player
    string name;
    // Current year the player is in
    int year;
    // Number of decades the player has visited
    vector<int> decades_visited;
    // Player's score
    int score;
    // Amount of money the player has
    double money;
    // Inventory items the player carries
    vector<string> inventory;


    public: 
    
    // Constructor to initialize player with a name
    Player(const string& user_name);
    
    // Getter methods
    
    // Get player's name (constant because the player's name should be the same since the start)
    string get_name() const;
    // Get current year
    int get_year();
    // Get time battery level
    int get_time_battery();
    // Get player's score
    int get_score();
    // Get player's money
    double get_money() ;
    // Get player's inventory
    vector<string> get_inventory();
    // Get decades visited
    vector<int> get_decades_visited();

    // Setter methods

    // Set current year
    void set_year(int new_year);
    // drain time battery level
    void drain_battery(int amount);
    // charge time battery level
    void charge_battery(int amount);
    // add to player's score
    void add_score(int amount);
    // subtract from player's score
    void subtract_score(int amount);
    // Spend player's money
    void spend_money(double amount);
    // add money to player's total
    void add_money(double amount);
    // Add item to inventory
    void add_to_inventory(const string& item);
    // Remove item from inventory
    void remove_from_inventory(const string& item);
    // Add decade to decades visited
    void add_decade_visited(int decade);

    // bool funtions and logic checks and other utilities

    // Check if player has enough time battery
    bool has_enough_battery(int required);
    // Check if player has a specific item in inventory
    bool has_item(string item);
    // check if player has the specific amount of money
    bool has_enough_money(double amount);
    // Travel to a specific decade
    void travel_to_decade(int target_decade);





    // Print Functions

    // Display player's information
    void GetInfo();

};
#endif // PLAYER_H