#include <iostream>
using namespace std;

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

int main() {
    //all main variables here:
    string userName;
    int level = 1;
    
    
    //game welcome
    cout << "-------------------------------------" << endl;    
    cout << "        Welcome to *GameName*        " << endl;
    cout << "-------------------------------------" << endl;  
    cout << "     Make choices, solve puzzles     " << endl;
    cout << "          and explore decades        " << endl;
    

    cout << "Enter username: ";
    getline(cin, userName);
    ShowIntro();

    Player userCharacter(userName);
    
    Decades currentdecade(level);
    currentdecade.showDecadeIntro();
    level++;










    return 0;
}
