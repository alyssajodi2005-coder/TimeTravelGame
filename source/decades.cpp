#include <iostream>
using namespace std;
#include "../headers/decades.h"
#include "../headers/typewrite.h"
#include "../headers/player.h"
#include "../headers/timeMachine.h"



Decades::Decades(int user_level){
    level = user_level;
}

void Decades::AskDecade() {
    int input;
    bool isCorrect = false;
    typeWrite("You have completed all the minigames and challenges in this decade, which decade would you like to time travel to next?");
    while (!isCorrect){
        cin >> input;
        for (int i = 0; i < years.size(); i++){
            if (input == years.at(i)){
                travelDestination = input;
                isCorrect = true;
                break;
            }
        }
        if (!isCorrect){
            typeWrite("Invalid decade, please enter a correct decade.");    
        }
    }
    
}
void Decades::getDestination {
    return travelDestination
}

void Decades::showDecadeIntro(){
    if (level == 1) {
        typewrite(".....................\n"); //loading effect
        typewrite("📚DECADE 2020'S --> The Present Day\n");
        typewrite("Date: April 15, 2024 || Time: 9:42 AM || Location: NYU College Campus\n");
        typewrite("---------------------------------------\n");
        typewrite("You find yourself in the year 2024. Social media shapes opinions, and technology connects everyone.\n");
        typewrite("Your phone buzzes nonstop. Opinions spread faster than facts, and everyone seems connected — yet strangely distant.\n");
        typewrite("Students rush past you on Campus with headphones in, glued to screens .\n");
        typewrite("Every choice you make can spread fast — and its impact may reach further than you expect.\n");
        typewrite("Navigate carefully, and see how your decisions ripple through time.\n");
        // challenge 1: social media dilemma

    }
    if (level == 2) {
        typewrite("💻DECADE 2010's --> Internet Boom\n");
        typewrite("Date: June 10, 2015 || Time: 3:15 PM || Location: Cupertino, CA\n");
        typewrite("---------------------------------------\n");
        typewrite("You find yourself in a busy tech company building, surrounded by the latest gadgets and innovations.\n");
        typewrite("The environment is filled with excitement and panic as entrepreneurs pitch their ideas to investors.\n");
        typewrite("The floor is packed with people, whiteboards overflow with ideas, and everyone believes the next big thing is just one pitch away.\n");
        typewrite("Social media platforms are booming, connecting people worldwide and changing how information is spread.\n");
        typewrite("A group of young programmers storm out of a meeting, clearly frustrated.\n");
        typewrite("You feel and tap on your shoulder as a frantic man in a suit says, \"You're up, time to pitch!\"\n");
        // challenge 1: impromptu pitch presentation
    }
    if (level == 3) {
        typewrite(".....................\n"); //loading effect
        typewrite("📱DECADE 2000's --> Y2K");
        typewrite("Date: August 15, 2003 || Time: 12:30 PM || Location: Brooklyn, NY\n");
        cout <<"------------------------------------------------------------------------" << endl;
        typewrite("The summer streets of New York City are lively as usual, \n");
        typewrite("You can hear the sounds of construction, fire trucks, car horns, and Rap music, through your headphones.\n");
        typewrite("The rise of social media platforms like YouTube and Facebook and gadgets like the iPod transformed the way people connect and share information.\n");
        typewrite("The decade is also refered to as the Y2K era, the name comes from the computer crisis that occurred in the year 2000,\n");
        typewrite("when computer systems misinterpreted \"00\" as 1900 instead of 2000 causing bugs and system failures.\n");
        typewrite("Your first task is to create a playlist on your iPod that will help you navigate the decade.");
        //challenge : Create a Playlist
    }
    if (level == 4) {
        typewrite(".....................\n"); //loading effect
        typewrite("💿DECADE 1990's --> For the Record\n");
        typewrite("Date: September 15, 1994 || Time: 10:00 AM || Location: Philadelphia, PA\n");
        cout <<"------------------------------------------------------------------------" << endl;
        typewrite("The 90s are loud, expressive, and unforgettable.\n");
        typewrite("Baggy clothes, flannel shirts, and iconic TV shows define the culture of the decade.\n");
        typewrite("You're an aspiring musician working and just started your shift at a local record store.\n");
        typewrite("Record stores are starting to face a decline in sales due to the rise of CDs and walkmans replacing vinyls.\n");
        typewrite("Shelves are packed, but the customers are few.\n");
        typewrite("Nirvana \"Smells like Teen Spirit\" is playing softly in the background.\n");
        //Challenge: Sell Records
    }
    if (level == 5) {
       typewrite("DECADE 1980's --> ");
        typewrite("Date: || Time:  || Location: \n");
        cout <<"------------------------------------------------------------------------" << endl;
        typewrite("The 80s are bold culture, blockbuster movies, and Michael Jackson!\n") ;
        typewrite("Michael Jackson dominates the charts, redefining music, dance, and performance.\n");

       
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
    for (int i = 0; i < years.size(); i++) {
        if (years.at(i) == travelDest){
            level = i + 1;
            break;
        }  
    } 
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
            typewrite("Invalid choice. Please select A, B, or C.\n");
        }
        // add more challenge logic here
    }
    if (level == 2) {
        typewrite("Challenge : Impromptu Pitch Presentation\n");
        cout << "You must present a new app idea to potential investors." << endl;
        cout << "What type of app is it? (ex. game, productivity, social, etc.): " << endl;
        getline(cin, user_input);
        string lv2inp = user_input;
        cout << "Who is your target audience? (ex. teenagers, kids, etc.): " << endl;
        getline(cin, user_input);
        typewrite("Investors are eager to hear your pitch. You have limited time to make an impression.\n");
        typewrite("Hello my name is " + player.get_name() + ", my app focuses on " + lv2inp + " and my app is targeted to " + user_input + ".\n");
        cout << "Do you:" << endl;
        cout << "A) Focus on the technical features of the app." << endl;
        cout << "B) Highlight the market potential and user benefits." << endl;
        cout << "C) Wing it and hope for the best." << endl;
        getline(cin, user_input);
        if (multiple_choice == 'A' || multiple_choice == 'a') {
            typewrite("Your technical focus impressed the investors, but they were more interested in the app's market potential.\n");
            typewrite("You received some interest but lacked a clear vision for user benefits.\n");
            player.subtract_score(5);
        } else if (multiple_choice == 'B' || multiple_choice == 'b') {
            typewrite("You effectively communicated the market potential and user benefits of your app.\n");
            typewrite("The investors were excited about your vision and saw great potential in your idea.\n");
            player.add_score(10);
        } else if (multiple_choice == 'C' || multiple_choice == 'c') {
            typewrite("Your lack of preparation showed, and the investors were not convinced by your pitch.\n");
            typewrite("You missed a crucial opportunity to make a strong impression.\n");
            player.subtract_score(10);
        } else {
            typewrite("Invalid choice. Please select A, B, or C.\n");
        }
        typewrite("An investor asks \"How much funding do you need?\"\n");
        double funding;
        cout << "Enter the amount of funding you are requesting: ";
        cin >> funding;
        typewrite("The room goes quiet. Investors exchange glances.\n");
        typewrite("This number could make or break your future.\n");

        if (funding < 10000) {
            typewrite("The investor appreciates your modest request and sees it as a sign of confidence in your app's potential.\n");
            player.add_score(5);
        } else if (funding >= 10000 && funding <= 200000) {
            typewrite("The investor considers your request reasonable and is willing to discuss further.\n");
            player.add_score(10);
        } else {
            typewrite("The investor's jaws dropped and they are taken aback by the high funding request. \n");
            typewrite("An investor says \"Thank you for your honesty, but this amount is too high. Thank you for your time.\"\n");
            player.subtract_score(10);
        }
        // add more challenge logic here

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



