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
    char startkey = '\0';
    while (startkey != 'y') {
        cout << "Type y to begin: ";
        cin >> startkey;
    }
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
    timeMachine.TimeTravel(); // Time travel effect, check machine energy
    userCharacter.GetInfo(); // show player info
    userCharacter.print_inventory(); // show starting inventory
    currentdecade.showDecadeIntro(); // show decade intro
    currentdecade.challenge(userCharacter); // decade challenge
    currentdecade.minigame(userCharacter); // decade minigame
    currentdecade.nextDecade(); // advance to next decade, inc level
    userCharacter.travel_to_decade(currentdecade); // travel to next decade

    //Lv.2 Decade:2010s
    timeMachine.TimeTravel(); // Time travel effect, check machine energy
    userCharacter.GetInfo(); // show player info
    userCharacter.print_inventory(); // show inventory
    currentdecade.showDecadeIntro(); // show decade intro
    currentdecade.challenge(userCharacter); // decade challenge
    currentdecade.minigame(userCharacter); // decade minigame
    currentdecade.nextDecade(); // advance to next decade
    userCharacter.travel_to_decade(currentdecade); // travel to next decade


    //Lv.3 Decade:2000s
    timeMachine.TimeTravel(); // Time travel effect
    userCharacter.GetInfo(); // show player info
    userCharacter.print_inventory(); // show inventory  
    currentdecade.showDecadeIntro();  
    currentdecade.challenge(userCharacter); // decade challenge
    currentdecade.minigame(userCharacter); // decade minigame
    currentdecade.nextDecade(); // advance to next decade
    userCharacter.travel_to_decade(currentdecade); // travel to next decade

    //lv.4 Decade:1990s
    timeMachine.TimeTravel(); // Time travel effect
    userCharacter.GetInfo(); // show player info
    userCharacter.print_inventory(); // show inventory
    currentdecade.showDecadeIntro();
    currentdecade.challenge(userCharacter); // decade challenge
    currentdecade.minigame(userCharacter); // decade minigame
    userCharacter.travel_to_decade(currentdecade); // travel to next decade 


    //lv.5 Decade:1980s
    timeMachine.TimeTravel(); // Time travel effect
    userCharacter.GetInfo(); // show player info
    userCharacter.print_inventory(); // show inventory
    currentdecade.showDecadeIntro();
    currentdecade.challenge(userCharacter); // decade challenge
    currentdecade.minigame(userCharacter); // decade minigame
    userCharacter.travel_to_decade(currentdecade); // travel to next decade 






    
    /*
    //Finish remaining decades here:
  

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
