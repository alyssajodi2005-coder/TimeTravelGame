#include "../headers/scenario.h"
#include "../headers/player.h"
#include "../headers/gameState.h"
#include <iostream>
#include <algorithm>

using namespace std;

Scenario::Scenario(string scenarioId, string decade, string scenarioTitle) {
    id = scenarioId;
    decadeId = decade;
    title = scenarioTitle;
    completed = false;
    requiredCredibility = 0;
    requiredInfluence = 0;
    requiredKnowledge = 0;
}

bool Scenario::canUnlock(const Player& player, const GameState& gameState) const {
    // Check stat requirements
    if (player.get_credibility() < requiredCredibility) return false;
    if (player.get_influence() < requiredInfluence) return false;
    if (player.get_knowledge() < requiredKnowledge) return false;
    
    // Check required items
    for (const string& item : requiredItems) {
        if (!player.has_item(item)) return false;
    }
    
    // Check required completed scenarios
    for (const string& scenarioId : requiredCompletedScenarios) {
        if (!player.has_completed_scenario(scenarioId)) return false;
    }
    
    return true;
}

void Scenario::complete(string choiceId, Player& player, GameState& gameState) {
    // Find the choice
    Choice* selectedChoice = nullptr;
    for (Choice& choice : choices) {
        if (choice.id == choiceId) {
            selectedChoice = &choice;
            break;
        }
    }
    
    if (!selectedChoice) {
        cout << "Error: Invalid choice ID" << endl;
        return;
    }
    
    // Apply stat changes
    player.add_score(selectedChoice->scoreImpact);
    player.add_credibility(selectedChoice->credibilityImpact);
    player.add_influence(selectedChoice->influenceImpact);
    player.add_knowledge(selectedChoice->knowledgeImpact);
    player.add_paradox_risk(selectedChoice->paradoxImpact);
    
    // Grant items
    for (const string& item : selectedChoice->itemsGranted) {
        player.add_to_inventory(item);
    }
    
    // Unlock scenarios
    // (GameState will handle this through scenario registration)
    
    // Unlock decades
    for (const string& decade : selectedChoice->unlocksDecades) {
        gameState.unlockDecade(decade);
    }
    
    // Activate ripple effects
    for (const string& ripple : selectedChoice->rippleEffects) {
        player.add_ripple(ripple);
        gameState.activateRipple(ripple);
    }
    
    // Apply custom effect if exists
    if (selectedChoice->customEffect) {
        selectedChoice->customEffect(player, gameState);
    }
    
    // Mark as completed
    completed = true;
    playerChoice = choiceId;
    player.complete_scenario(id, choiceId);
}

void Scenario::display() const {
    cout << "\n========================================" << endl;
    cout << "SCENARIO: " << title << endl;
    cout << "========================================" << endl;
    cout << description << endl;
    cout << "\nCHOICES:" << endl;
    
    for (size_t i = 0; i < choices.size(); i++) {
        cout << (i + 1) << ") " << choices[i].text << endl;
        if (!choices[i].description.empty()) {
            cout << "   " << choices[i].description << endl;
        }
    }
    cout << "========================================" << endl;
}