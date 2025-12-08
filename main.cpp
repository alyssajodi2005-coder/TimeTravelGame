#include <iostream>
#include <windows.h> //for UTF-8 console
using namespace std;


//include all header files here:

#include "decades.h"
#include "player.h"
#include "timeMachine.h"
#include "typewrite.h"

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
    SetConsoleOutputCP(CP_UTF8); //allow UTF-8 characters and emojis in console
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

    Player userCharacter(userName); // create player object initailize playe
    TimeMachine timeMachine; // create time machine object initialize time machine
    Decades currentdecade(level); // create decades object inital decade


    //Decade:2020s
    currentdecade.showDecadeIntro();
    timeMachine.TimeTravel(); // Time travel effect

    //Decade:2010s
    currentdecade.nextDecade();
    currentdecade.showDecadeIntro();


    










    return 0;
}
