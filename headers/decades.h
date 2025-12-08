#ifndef DECADES_H
#define DECADES_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Decades {
    private:
        int level;
        string description;
        vector<string> years;
        vector<string> challenges;

    public:
        Decades(int user_level);
        void showDecadeIntro();
        void nextDecade();
        void challenge();
        void minigame();
};

#endif // DECADES_H