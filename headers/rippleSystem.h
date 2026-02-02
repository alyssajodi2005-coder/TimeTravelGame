#ifndef RIPPLESYSTEM_H
#define RIPPLESYSTEM_H

#include <string>
#include <map>
#include <functional>
using namespace std;

class Player;
class GameState;
class Scenario;

struct RippleEffect {
    string id;
    string triggerScenarioId;
    string triggerChoiceId;
    vector<string> affectedScenarios;
    string description;
    function<void(Scenario*, Player&, GameState&)> applyEffect;
};

class RippleSystem {
private:
    map<string, RippleEffect> ripples;
    
public:
    RippleSystem();
    
    void registerRipple(RippleEffect ripple);
    void triggerRipple(string rippleId, Player& player, GameState& gameState);
    void applyRipplesToScenario(Scenario* scenario, Player& player, GameState& gameState);
    
    // Initialize all ripple effects
    void initializeRipples();
};

#endif // RIPPLESYSTEM_H