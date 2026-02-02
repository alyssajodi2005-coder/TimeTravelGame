#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <string>
#include <vector>
#include <map>
using namespace std;

class Scenario;

class GameState {
private:
    // Decade unlock status
    map<string, bool> decadesUnlocked;
    
    // All scenarios in the game
    map<string, vector<Scenario*>> scenariosByDecade;
    
    // Global game flags
    map<string, bool> globalFlags;
    
    // Ripple effects active
    vector<string> activeRipples;
    
    // Path tracking
    vector<string> visitOrder;  // Order of decades visited
    
public:
    GameState();
    ~GameState();
    
    // Decade management
    void unlockDecade(string decadeId);
    bool isDecadeUnlocked(string decadeId) const;
    vector<string> getUnlockedDecades() const;
    
    // Scenario management
    void addScenario(string decadeId, Scenario* scenario);
    vector<Scenario*> getScenariosForDecade(string decadeId);
    Scenario* getScenario(string scenarioId);
    vector<Scenario*> getAvailableScenarios(string decadeId, const class Player& player);
    
    // Flag management
    void setFlag(string flagId, bool value);
    bool getFlag(string flagId) const;
    
    // Ripple management
    void activateRipple(string rippleId);
    bool isRippleActive(string rippleId) const;
    
    // Visit tracking
    void recordVisit(string decadeId);
    vector<string> getVisitOrder() const;
    
    // Initialization
    void initializeGame();
    void loadAllScenarios();
};

#endif // GAMESTATE_H