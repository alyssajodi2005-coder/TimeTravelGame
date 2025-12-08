#include <iostream>
using namespace std;
#include "../headers/decades.h"
#include "../headers/typewrite.h"



Decades::Decades(int user_level){
    level = user_level;
}

void Decades::showDecadeIntro(){
    if (level == 1) {
        typewrite(".....................\n"); //loading effect
        typewrite("📚DECADE 2020'S --> The Present Day\n");
        typewrite("Date: April 15, 2024 || Time: 9:42 AM || Location: NYU College Campus\n");
        typewrite("---------------------------------------\n");
        typewrite("You find yourself in the year 2024. Social media shapes opinions, and technology connects everyone.\n");
        typewrite("The world faces challenges such as climate change and ongoing cultural movements.\n");
        typewrite("Opportunities and conflicts abound, testing your awareness and decision-making.\n");
        typewrite("You must navigate the complexities of this decade,\n");
        typewrite("making choices to test your knowledge and skills.\n");
        typewrite("Navigate carefully, and see how your decisions ripple through time.\n");

    }
    if (level == 2) {
        cout << "DECADE 2010's --> Internet Boom" << endl;
        cout << "Date: June 10, 2015 || Time: 3:15 PM || Location: Silicon Valley, CA" << endl;
        cout << "---------------------------------------" << endl;
        cout << "You find yourself in a bustling tech hub, surrounded by the latest gadgets and innovations." << endl;
        cout << "The air is filled with excitement as entrepreneurs pitch their ideas and investors listen intently." << endl;
    }
}
void Decades::nextDecade() {
    level++;
}
void Decades::challenge() {
    cout << "Time for a challenge in level " << level << "!" << endl;
}

void Decades::minigame() {
    cout << "Welcome to the minigame for level " << level << "!" << endl;
}



