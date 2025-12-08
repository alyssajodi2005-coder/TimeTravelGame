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
    double get_money();
    // Get player's inventory
    vector<string> get_inventory();
    // Get decades visited
    vector<int> get_decades_visited();

    // Setter methods

    // Set current year
    void set_year(int new_year);
    // Set time battery level
    void set_time_battery(int new_time_battery);
    // Set player's score
    void set_score(int new_score);
    // Set player's money
    void set_money(double new_money);
    // Add item to inventory
    void add_to_inventory(string item);
    // Add decade to decades visited
    void add_decade_visited(int decade);

};
#endif // PLAYER_H