#ifndef SCENARIO_H
#define SCENARIO_H

#include <string>
#include <vector>
#include <map>
#include <functional>
using namespace std;

class Player;
class GameState;

// Represents a single choice in a scenario
struct Choice {
    string id;
    string text;
    string description;  // What happens when chosen
    int scoreImpact;
    int credibilityImpact;
    int influenceImpact;
    int knowledgeImpact;
    int paradoxImpact;
    vector<string> itemsGranted;
    vector<string> unlocksScenarios;
    vector<string> unlocksDecades;
    vector<string> rippleEffects;
    function<void(Player&, GameState&)> customEffect; // For complex logic
};

// Represents a complete scenario within a decade
class Scenario {
private:
    string id;
    string decadeId;
    string title;
    string description;
    vector<Choice> choices;
    bool completed;
    string playerChoice; // Which choice was made
    
    // Unlock requirements
    int requiredCredibility;
    int requiredInfluence;
    int requiredKnowledge;
    vector<string> requiredItems;
    vector<string> requiredCompletedScenarios;
    
public:
    Scenario(string scenarioId, string decade, string scenarioTitle);
    
    // Getters
    string getId() const { return id; }
    string getDecadeId() const { return decadeId; }
    string getTitle() const { return title; }
    string getDescription() const { return description; }
    vector<Choice> getChoices() const { return choices; }
    bool isCompleted() const { return completed; }
    string getPlayerChoice() const { return playerChoice; }
    
    // Setters
    void setDescription(string desc) { description = desc; }
    void addChoice(Choice choice) { choices.push_back(choice); }
    void setRequiredCredibility(int val) { requiredCredibility = val; }
    void setRequiredInfluence(int val) { requiredInfluence = val; }
    void setRequiredKnowledge(int val) { requiredKnowledge = val; }
    void addRequiredItem(string item) { requiredItems.push_back(item); }
    void addRequiredScenario(string scenarioId) { requiredCompletedScenarios.push_back(scenarioId); }
    
    // Core functions
    bool canUnlock(const Player& player, const GameState& gameState) const;
    void complete(string choiceId, Player& player, GameState& gameState);
    void display() const;
};

#endif // SCENARIO_H