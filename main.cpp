#include <iostream>
using namespace std;
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <unistd.h>
//include all header files here:

#include "decades.h"
#include "player.h"
#include "timeMachine.h"

void ShowIntro() {
    cout << "* HOW TO PLAY *" << endl;
    cout << "1. You will be placed different decades." << endl;
    cout << "2. Each decade gives you choices and challenges." << endl;
    cout << "3. Pick the best options and win minigames to survive and earn points." << endl;
    cout << "4. Choices affect your final score." << endl;
    //finish expalin points, money, food, etc
    
    //prompt user to begin game
    char startkey = '\0';
    while (startkey != 'y') {
        cout << "Type y to begin: ";
        cin >> startkey;
    }
}
void typewrite(const string &text) {
    for (int i = 0; i < text.size(); ++i) {
        cout << text.at(i);
        usleep(20000);
    }
}

int main() {
    //all main variables here:
    string userName;
    int level = 1;
    
    
    //game welcome message
    cout << "-------------------------------------" << endl;
    typewrite("        Welcome to *GameName*        \n");
    cout << "-------------------------------------" << endl;
    typewrite("     Make choices, solve puzzles     \n");
    typewrite("          and explore decades        \n");

    cout << "Enter username: ";
    getline(cin, userName);
    ShowIntro();
    typewrite(".....................\n"); //loading effect

    Player userCharacter(userName); //


    Decades currentdecade(level);
    currentdecade.showDecadeIntro();
    level++;










    return 0;
}
