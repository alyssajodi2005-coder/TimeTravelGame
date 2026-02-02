#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H

#include <string>
#include <vector>
using namespace std;

class Player;
class GameState;

struct Achievement {
    string id;
    string name;
    string description;
    int scoreBonus;
    bool unlocked;
    function<bool(const Player&, const GameState&)> checkCondition;
};

class AchievementSystem {
private:
    vector<Achievement> achievements;
    
public:
    AchievementSystem();
    
    void addAchievement(Achievement achievement);
    void checkAchievements(Player& player, GameState& gameState);
    vector<Achievement> getUnlockedAchievements() const;
    vector<Achievement> getAllAchievements() const;
    
    void initializeAchievements();
};

#endif // ACHIEVEMENT_H