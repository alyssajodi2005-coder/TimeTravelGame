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
    //finish explain points, money, food, etc
    
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

    Player userCharacter(userName); // create player object initailize player
    TimeMachine timeMachine; // create time machine object initialize time machine
    Decades currentdecade(level); // create decades object inital decade


    //Lv.1 Decade:2020s
    timeMachine.TimeTravel(); // Time travel effect
    currentdecade.showDecadeIntro(); // show decade intro
    currentdecade.challenge(); // decade challenge
    currentdecade.minigame(); // decade minigame
    timeMachine.TimeTravel(); // Time travel effect
    currentdecade.nextDecade(); // advance to next decade
    userCharacter.add_decade_visited(2020); // add decade to decades visited
    userCharacter.travel_to_decade(2010); // set player year to 2010

    //Lv.2 Decade:2010s
    userCharacter.add_decade_visited(2010); // add decade to decades visited
    timeMachine.TimeTravel(); // Time travel effect
    currentdecade.showDecadeIntro(); // show decade intro
    currentdecade.challenge(); // decade challenge
    currentdecade.minigame(); // decade minigame
    timeMachine.TimeTravel(); // Time travel effect
    currentdecade.nextDecade(); // advance to next decade

    /*
    //Finish remaining decades here:

    //Lv.3 Decade:2000s
    timeMachine.TimeTravel(); // Time travel effect
    currentdecade.showDecadeIntro();    

    //lv.4 Decade:1990s
    currentdecade.nextDecade(); 
    currentdecade.showDecadeIntro();

    //lv.5 Decade:1980s
    currentdecade.nextDecade();
    currentdecade.showDecadeIntro(); 

    //lv.6 Decade:1970s
    currentdecade.nextDecade(); 
    currentdecade.showDecadeIntro();

    //lv.7 Decade:1960s
    currentdecade.nextDecade(); 
    currentdecade.showDecadeIntro();
    
    //lv.8 Decade:1950s
    currentdecade.nextDecade(); 
    currentdecade.showDecadeIntro();

    //lv.9 Decade:1940s
    currentdecade.nextDecade();
    currentdecade.showDecadeIntro();

    //lv.10 Decade:1930s
    currentdecade.nextDecade();
    currentdecade.showDecadeIntro();

    //lv.11 Decade:1920s
    currentdecade.nextDecade();
    currentdecade.showDecadeIntro();

    //lv.12 Decade:2020s (return to future)
    */




    










    return 0;
}
