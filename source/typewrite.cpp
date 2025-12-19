#include <iostream>
#include "../headers/typewrite.h"
#include <vector>
using namespace std;
#include<limits>



void typewrite(const string &text) {
    for (int i = 0; i < text.size(); ++i) {
        cout << text.at(i);
        usleep(25000);
    }
}
void clearScreen() {
    cout << "\033[2J\033[1;1H";
    // https://www.delftstack.com/howto/cpp/how-to-clear-console-cpp/
}
void Continue() {
    cout << "Press Enter to continue...";
    cin.get();
    //https://stackoverflow.com/questions/903221/press-enter-to-continue
}