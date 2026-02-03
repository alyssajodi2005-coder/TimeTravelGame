#ifndef DECADES_H
#define DECADES_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player;

class Decades {
    private:
        int level;
        string decadeId;
        string description;
        /*int travelDestination; */
        vector<int> years = {2024, 2015, 2003, 1994, 1980, 1970, 1960, 1950, 1940, 1930, 1920};
        vector<string> challenges;

    public:
        Decades(int user_level);
        Decades(string decade_id);
        int GetLevel();
        vector <int> GetYears();
        string GetDecadeID();
        /* void AskDecade(); */
        void showDecadeIntro(Player &player);
        void nextDecade();
        void challenge(Player &player);
        void runMinigame(Player &player, GameState &gameState);
        /* int getDestination(); */
};

#endif // DECADES_H