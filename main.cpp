#ifdef _WIN32 //windows specific includes
#include <windows.h>
#endif

#include <iostream>
#include <string>
using namespace std;


//include all header files here:

#include "headers/decades.h"
#include "headers/player.h"
#include "headers/timeMachine.h"
#include "headers/typewrite.h"

void ShowIntro() {
    cout << "* HOW TO PLAY *" << endl;
    cout << "1. You will be placed different decades." << endl;
    cout << "2. Each decade gives you choices and challenges." << endl;
    cout << "3. Pick the best options and win minigames to survive and earn points." << endl;
    cout << "4. Choices affect your final score." << endl;
    //finish explain points, money, food, etc

    //prompt user to begin game
    Continue();
}



int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif
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

    Player userCharacter(userName); // create player object initailize player
    TimeMachine timeMachine; // create time machine object initialize time machine
    Decades currentdecade(level); // create decades object inital decade


    //Lv.1 Decade:2020s
    const int max_level = 12;
    while (currentdecade.GetLevel() <= max_level) {
        clearScreen();
        timeMachine.TimeTravel(); // Time travel effect, check machine energy
        clearScreen();
        userCharacter.GetInfo(); // show player info
        userCharacter.print_inventory(); // show starting inventory
        currentdecade.showDecadeIntro(userCharacter); // show decade intro
        Continue();
        clearScreen();
        currentdecade.challenge(userCharacter); // decade challenge
        Continue();
        clearScreen();
        currentdecade.minigame(userCharacter); // decade minigame
        Continue();
        clearScreen();
        if (currentdecade.GetLevel() < max_level){
            currentdecade.nextDecade(); // advance to next decade, inc level
            userCharacter.travel_to_decade(currentdecade); // travel to next decade
        }
    }

    





    return 0;
}
