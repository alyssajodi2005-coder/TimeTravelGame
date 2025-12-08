#include <iostream>
using namespace std;
#include "../headers/decades.h"


Decades::Decades(int user_level){
    level = user_level;
}

void Decades::showDecadeIntro(){
    if (level == 1) {
        cout << "📚 DECADE 2020's --> The Present Day" << endl;
        cout << "Date: April 15, 2024 || Time: 9:42 AM || Location: NYU College Campus" << endl;
        cout << "---------------------------------------" << endl;
        cout << "You wake up on a chilly morning on campus. ";
        cout << "With no classes for the day and finals week approaching ";
        cout << "you decide to spend the moring studying in the library." << endl;
        cout << "When you arrive, the main floors are packed with stressed students, ";
        cout << "open laptops, coffee cups, and frantic typing." << endl;
        cout << "You head to the basement hoping there will be a quiet spot there " << endl;
        cout << "You find a secluded corner with a small couch, pull out your laptop and settle in to study." << endl;
        cout << "'Your Mac will sleep soon unless plugged into a power outlet'" << endl;
        cout << "You sigh and look around and spot an outlet slightly behind the couch, and push the couch over to reach it." << endl;
        cout << "You notice something else is plugin there..." << endl;
        cout << "Unphased you unplug the mysterious device and plug in your laptop." << endl;
        cout << "Suddenly, a bright flash of light  y usrrounds you..." << endl;
        cout << "You feel a strange sensation, as if you're being psuh and pulled at the same time" << endl;
        cout << "When the light fades, you are no longer in the library…" << endl;

    }
    if (level == 2) {
        cout << "DECADE 2010's --> Internet Boom" << endl;
        cout << "Date: June 10, 2015 || Time: 3:15 PM || Location: Silicon Valley, CA" << endl;
        cout << "---------------------------------------" << endl;
        cout << "You find yourself in a bustling tech hub, surrounded by the latest gadgets and innovations." << endl;
        cout << "The air is filled with excitement as entrepreneurs pitch their ideas and investors listen intently." << endl;
    }
}
void Decades::challenge() {
    cout << "Time for a challenge in level " << level << "!" << endl;
}

void Decades::minigame() {
    cout << "Welcome to the minigame for level " << level << "!" << endl;
}



