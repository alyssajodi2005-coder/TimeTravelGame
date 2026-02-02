#include "../headers/gameState.h"
#include "../headers/scenario.h"
#include "../headers/player.h"
#include <algorithm>
#include <iostream>

GameState::GameState() {
    // Initially unlock starting decades
    decadesUnlocked["2024"] = true;
    decadesUnlocked["2003"] = true;
    decadesUnlocked["1986"] = true;
    
    // All other decades locked
    decadesUnlocked["2015"] = false;
    decadesUnlocked["1994"] = false;
    decadesUnlocked["1975"] = false;
    decadesUnlocked["1969"] = false;
    decadesUnlocked["1955"] = false;
    decadesUnlocked["1944"] = false;
    decadesUnlocked["1935"] = false;
    decadesUnlocked["1928"] = false;
}

GameState::~GameState() {
    // Clean up dynamically allocated scenarios
    for (auto& pair : scenariosByDecade) {
        for (Scenario* scenario : pair.second) {
            delete scenario;
        }
    }
}

void GameState::unlockDecade(string decadeId) {
    decadesUnlocked[decadeId] = true;
}

bool GameState::isDecadeUnlocked(string decadeId) const {
    auto it = decadesUnlocked.find(decadeId);
    if (it != decadesUnlocked.end()) {
        return it->second;
    }
    return false;
}

vector<string> GameState::getUnlockedDecades() const {
    vector<string> unlocked;
    for (const auto& pair : decadesUnlocked) {
        if (pair.second) {
            unlocked.push_back(pair.first);
        }
    }
    return unlocked;
}

void GameState::addScenario(string decadeId, Scenario* scenario) {
    scenariosByDecade[decadeId].push_back(scenario);
}

vector<Scenario*> GameState::getScenariosForDecade(string decadeId) {
    if (scenariosByDecade.find(decadeId) != scenariosByDecade.end()) {
        return scenariosByDecade[decadeId];
    }
    return vector<Scenario*>();
}

Scenario* GameState::getScenario(string scenarioId) {
    for (auto& pair : scenariosByDecade) {
        for (Scenario* scenario : pair.second) {
            if (scenario->getId() == scenarioId) {
                return scenario;
            }
        }
    }
    return nullptr;
}

vector<Scenario*> GameState::getAvailableScenarios(string decadeId, const Player& player) {
    vector<Scenario*> available;
    vector<Scenario*> allScenarios = getScenariosForDecade(decadeId);
    
    for (Scenario* scenario : allScenarios) {
        if (!scenario->isCompleted() && scenario->canUnlock(player, *this)) {
            available.push_back(scenario);
        }
    }
    
    return available;
}

void GameState::setFlag(string flagId, bool value) {
    globalFlags[flagId] = value;
}

bool GameState::getFlag(string flagId) const {
    auto it = globalFlags.find(flagId);
    if (it != globalFlags.end()) {
        return it->second;
    }
    return false;
}

void GameState::activateRipple(string rippleId) {
    if (find(activeRipples.begin(), activeRipples.end(), rippleId) == activeRipples.end()) {
        activeRipples.push_back(rippleId);
    }
}

bool GameState::isRippleActive(string rippleId) const {
    return find(activeRipples.begin(), activeRipples.end(), rippleId) != activeRipples.end();
}

void GameState::recordVisit(string decadeId) {
    visitOrder.push_back(decadeId);
}

vector<string> GameState::getVisitOrder() const {
    return visitOrder;
}

void GameState::initializeGame() {
    loadAllScenarios();
}

void GameState::loadAllScenarios() {
    // This will be populated with all scenario definitions
    // See next section for implementation
}