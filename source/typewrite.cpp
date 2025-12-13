#include <iostream>
#include "../headers/typewrite.h"
#include <vector>
using namespace std;



void typewrite(const string &text) {
    for (int i = 0; i < text.size(); ++i) {
        cout << text.at(i);
        usleep(20000);
    }
}