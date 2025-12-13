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
        string description;
        /*int travelDestination; */
        vector<int> years = {2024, 2015, 2003, 1994, 1980, 1970, 1960, 1950, 1940, 1930, 1920};
        vector<string> challenges;

    public:
        Decades(int user_level);
        int GetLevel();
        vector <int> GetYears();
        /* void AskDecade(); */
        void showDecadeIntro();
        void nextDecade();
        void challenge(Player &player);
        void minigame(Player &player);
        /* int getDestination(); */
};

#endif // DECADES_H