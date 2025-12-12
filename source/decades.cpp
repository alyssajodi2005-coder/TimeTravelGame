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
        // challenge 1: social media dilemma

    }
    if (level == 2) {
        typewrite("DECADE 2010's --> Internet Boom\n");
        typewrite("Date: June 10, 2015 || Time: 3:15 PM || Location: Cupertino, CA\n");
        typewrite("---------------------------------------\n");
        typewrite("You find yourself in a busy tech company building, surrounded by the latest gadgets and innovations.\n");
        typewrite("The air is filled with excitement as entrepreneurs pitch their ideas and investors listen intently.\n");
        typewrite("Social media platforms are booming, connecting people worldwide and changing how information is spread.\n");
        typewrite("Success in the tech world requires innovation, adaptability, and ethical decision-making.\n");
        typewrite("A large group or young programmers walk out of a meeting room looking frustrated.\n");
        typewrite("You feel and tap on your shoulder as a frantic man in a suit says, \"Hey ready to pitch, we're up\".\n");
        // challenge 1: impromptu pitch presentation
    }
    if (level == 3) {
        typewrite("DECADE 2000's ");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 4) {
        typewrite("DECADE 1990's ");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 5) {
       typewrite("DECADE 1980's ");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 6) {
        typewrite("DECADE 1970's ");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 7) {
        typewrite("DECADE 1960's ");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 8) {
        typewrite("DECADE 1950's ");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 9) {
        typewrite("DECADE 1940's ");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 10) {
        typewrite("DECADE 1930's -->");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 11) {
        typewrite("DECADE 1920's -->");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
    if (level == 12) {
        typewrite("DECADE 2020's -->");
        typewrite("Date:  || Time:  || Location: \n");
        typewrite("---------------------------------------\n");
        //Winning level
        // Add decade introduction narrative here
    }

}
void Decades::nextDecade() {
    level++;
}
void Decades::challenge(Player &player) {
    char multiple_choice;
    string user_input;


    if (level == 1) {
        typewrite("Challenge : Social Media Dilemma\n");
        cout << "You come across a controversial post on social media that could impact public opinion." << endl;
        cout << "Do you:" << endl;
        cout << "A) Share the post without verifying its accuracy." << endl;
        cout << "B) Research the information before sharing it." << endl;
        cout << "C) Ignore the post entirely." << endl;
        cin >> multiple_choice;
        if (multiple_choice == 'A' || multiple_choice == 'a') {
            typewrite("You shared unverified information, leading to misinformation spreading rapidly.\n");
            typewrite("This decision negatively impacts your reputation and credibility.\n");
            player.subtract_score(10);
        } else if (multiple_choice == 'B' || multiple_choice == 'b') {
            typewrite("You took the time to research and verify the information before sharing it.\n");
            typewrite("Your responsible approach earns you respect and trust from your peers.\n");
            player.add_score(10);
        } else if (multiple_choice == 'C' || multiple_choice == 'c') {
            typewrite("By ignoring the post, you avoided contributing to misinformation.\n");
            typewrite("However, you missed an opportunity to educate others on the importance of fact-checking.\n");
            player.add_score(5);
        } else {
            typewrite("Invalid choice. Please select A, B, or C next time.\n");
        }
        // Further challenge logic can be implemented here
    }
    if (level == 2) {
        typewrite("Challenge : Impromptu Pitch Presentation\n");
        cout << "You have been asked to present a new app idea to potential investors with only 5 minutes to prepare." << endl;
        cout << "Do you:" << endl;
        cout << "A) Focus on the technical features of the app." << endl;
        cout << "B) Highlight the market potential and user benefits." << endl;
        cout << "C) Wing it and hope for the best." << endl;
        // Further challenge logic can be implemented here
        cin >> multiple_choice;
        
    }
}

void Decades::minigame(Player &player) {
    cout << "Welcome to the minigame for level " << level << "!" << endl;
    if (level == 1) {
        typewrite("Minigame: Social Media Quiz\n");
        cout << "Question: What year was OpenAI founded?" << endl;
        cout << "A) 2018" << endl;
        cout << "B) 2015" << endl;
        cout << "C) 2022" << endl;
        char answer;
        cin >> answer;
        if (answer == 'B' || answer == 'b') {
            typewrite("Correct! OpenAI was founded in 2015.\n");
            player.add_score(10);
        } else {
            typewrite("Incorrect. The correct answer is B) 2015.\n");
            player.subtract_score(5);
        }
    }
    else if (level == 2) {
        typewrite("Minigame: Tech Timeline Quiz\n");
        cout << "Question: What year was the first iPhone released?" << endl;
        cout << "A) 2005" << endl;
        cout << "B) 2007" << endl;
        cout << "C) 2009" << endl;
        char answer;
        cin >> answer;
        if (answer == 'B' || answer == 'b') {
            typewrite("Correct! The first iPhone was released in 2007.\n");
            player.add_score(10);
        } else {
            typewrite("Incorrect. The correct answer is B) 2007.\n");
            player.subtract_score(5);
        }
    }
}



