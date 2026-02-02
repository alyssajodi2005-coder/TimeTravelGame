#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Decades;

class Player{
    // Private member variables 

    private:
    // Name of the player
    string name;
    // Current year the player is in
    int year;
    // Number of decades the player has visited
    vector<int> decades_visited;
    // Player's score
    int score;
    // Inventory items the player carries
    vector<string> inventory;

    // stats
    int score;
    int credibility;  // NEW: 0-100
    int influence;    // NEW: 0-100
    int knowledge;    // NEW: 0-100
    int paradoxRisk;  // NEW: 0-100%

    // Items and achievements
    vector<string> inventory;
    vector<string> badges;  // NEW: Special items that unlock paths
    map<string, string> completedScenarios;  // NEW: scenarioId -> choiceId
    
    // Ripple tracking
    vector<string> activeRipples;  // NEW: Track cross-decade effects


    public: 
    
    // Constructor to initialize player with a name
    Player(const string& user_name);
    
    // Getter methods
    
        // Getters - Basic
    string get_name() const { return name; }
    int get_year() { return year; }
    int get_score() { return score; }
    vector<string> get_inventory() { return inventory; }
    vector<int> get_decades_visited() { return decades_visited; }
    
    // Getters - Stats (NEW)
    int get_credibility() const { return credibility; }
    int get_influence() const { return influence; }
    int get_knowledge() const { return knowledge; }
    int get_paradox_risk() const { return paradoxRisk; }
    
    // Getters - Progress (NEW)
    vector<string> get_badges() const { return badges; }
    map<string, string> get_completed_scenarios() const { return completedScenarios; }
    vector<string> get_active_ripples() const { return activeRipples; }
    
    // Setters - Score
    void add_score(int amount);
    void subtract_score(int amount);
    
    // Setters - Stats (NEW)
    void add_credibility(int amount);
    void subtract_credibility(int amount);
    void add_influence(int amount);
    void subtract_influence(int amount);
    void add_knowledge(int amount);
    void subtract_knowledge(int amount);
    void add_paradox_risk(int amount);
    void subtract_paradox_risk(int amount);
    
    // Inventory management
    void add_to_inventory(const string& item);
    void remove_from_inventory(const string& item);
    bool has_item(const string& item);
    
    // Badge management (NEW)
    void add_badge(const string& badge);
    bool has_badge(const string& badge) const;
    
    // Scenario tracking (NEW)
    void complete_scenario(const string& scenarioId, const string& choiceId);
    bool has_completed_scenario(const string& scenarioId) const;
    string get_scenario_choice(const string& scenarioId) const;
    
    // Ripple management (NEW)
    void add_ripple(const string& rippleId);
    bool has_ripple(const string& rippleId) const;
    void remove_ripple(const string& rippleId);

    // Get player's name (constant because the player's name should be the same since the start)
    string get_name() const;
    // Get current year
    int get_year();
    // Get player's score
    int get_score();
    // Get player's inventory
    vector<string> get_inventory();
    
    // Setter methods

    // add to player's score
    void add_score(int amount);
    // subtract from player's score
    void subtract_score(int amount);
    // Add item to inventory
    void add_to_inventory(const string& item);
    // Remove item from inventory
    void remove_from_inventory(const string& item);

    // bool funtions and logic checks and other utilities

    // Check if player has a specific item in inventory
    bool has_item(const string &item);
    // Travel to a specific decade
    void travel_to_decade(Decades &decade);

    // Print Functions

    // Display player's information
    void GetInfo();
    // Print inventory
    void print_inventory();
    // Print decades visited
    void print_decades_visited();
    void print_stats();

};
#endif // PLAYER_H