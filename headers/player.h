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
        
    Player(const string& user_name);
};
#endif // PLAYER_H