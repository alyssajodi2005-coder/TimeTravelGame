#include <iostream>
using namespace std;
#include "../headers/decades.h"
#include "../headers/typewrite.h"
#include "../headers/player.h"
#include "../headers/timeMachine.h"



Decades::Decades(int user_level){
    level = user_level;
}
int Decades::GetLevel(){
    return level;
}
vector<int> Decades::GetYears(){
    return years;
}

/* void Decades::AskDecade() {
    int input;
    bool isCorrect = false;
    typewrite("You have completed all the minigames and challenges in this decade, which decade would you like to time travel to next?");
    
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
            typewrite("Invalid decade, please enter a correct decade.");    
        }
    }
    
} 
//int Decades::getDestination() {
   // return travelDestination;
//} */

void Decades::showDecadeIntro(){
    if (level == 1) {
        typewrite(".....................\n"); //loading effect
        typewrite("📚DECADE 2020'S --> Socialize vs Social Media\n");
        typewrite("Date: April 15, 2024 || Time: 9:42 AM || Location: NYU College Campus\n");
        cout <<"---------------------------------------\n" << endl;
        typewrite("You find yourself in the year 2024. Social media shapes opinions, and technology connects everyone.\n");
        typewrite("Your phone buzzes nonstop. Opinions spread faster than facts, and everyone seems connected yet distant.\n");
        typewrite("Students rush past you on Campus with headphones in, glued to screens .\n");
        typewrite("Every choice you make can spread fast and its impact may reach further than you expect.\n");
        typewrite("Navigate carefully, and see how your decisions ripple through time.\n");
        // challenge 1: social media dilemma

    }
    if (level == 2) {
        typewrite(".....................\n"); //loading effect
        typewrite("💻DECADE 2010's --> Internet Boom\n");
        typewrite("Date: June 10, 2015 || Time: 3:15 PM || Location: Cupertino, CA\n");
        cout <<"---------------------------------------\n" << endl;
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
        typewrite("📱DECADE 2000's --> Y2K\n");
        typewrite("Date: August 15, 2003 || Time: 12:30 PM || Location: Brooklyn, NY\n");
        cout <<"------------------------------------------------------------------------" << endl;
        typewrite("The summer streets of New York City are lively as usual, \n");
        typewrite("You can hear the sounds of construction, fire trucks, car horns, and Rap music, through your headphones.\n");
        typewrite("The rise of social media platforms like YouTube and Facebook and gadgets like the iPod transformed the way people connect and share information.\n");
        typewrite("The decade is also refered to as the Y2K era, the name comes from the computer crisis that occurred in the year 2000,\n");
        typewrite("when computer systems misinterpreted \"00\" as 1900 instead of 2000 causing bugs and system failures.\n");
        typewrite("Your first task is to create a playlist on your iPod that will help you navigate the decade.\n");
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
        typewrite("Record stores are starting to face a decline in sales due to the rise of CDs replacing vinyls.\n");
        typewrite("Shelves are packed, but the customers are few.\n");
        typewrite("Nirvana \"Smells like Teen Spirit\" is playing softly in the background.\n");
        //Challenge: Sell Records
    }
    if (level == 5) {
        typewrite(".....................\n"); //loading effect
        typewrite("🎯DECADE 1980's --> Arcade Antics\n");
        typewrite("Date: January 10, 1986 || Time: 3:49 PM  || Location: Indianapolis, IN\n");
        cout <<"------------------------------------------------------------------------" << endl;
        typewrite("The 80s are bold , big hair, bright colors and blockbuster movies.\n") ;
        typewrite("Personal computers are becoming more common and video games gaining massive popularity.\n");
        typewrite("You walk into a busy arcade, chatter fills the air.\n");
        typewrite("The sound of coins and buttons creates an energetic atmosphere.\n");
        typewrite("Kids and teens are concentrated in games like Donkey Kong, and Space Invaders.\n");
        typewrite("Your goal is to navigate the arcade, and win as many games as possible.\n");
        // Challenge: Arcade Games

       
    }
    if (level == 6) {
        typewrite("DECADE 1970's ");
        typewrite("Date: November 21, 1975 || Time: 7 AM || Location: \n");
        typewrite("---------------------------------------\n");
        typewrite("You step into the vibrant world of the 1970s, eclectic culture, groundbreaking music, and significant social change.\n");
        typewrite("The streets are alive with the sounds of disco, rock, and funk, while fashion is bold and expressive.\n");
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
    level ++;
    /*for (int i = 0; i < years.size(); i++) {
        if (years.at(i) == travelDestination){
            level = i + 1;
            break;
        }  
    } */
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
    while (true) {
        cin >> multiple_choice;
            if (multiple_choice == 'A' || multiple_choice == 'a') {
                typewrite("You shared unverified information, leading to misinformation spreading rapidly.\n");
                typewrite("This decision negatively impacts your reputation and credibility.\n");
                player.subtract_score(10);
                break;
            } else if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("You took the time to research and verify the information before sharing it.\n");
                typewrite("Your responsible approach earns you respect and trust from your peers.\n");
                player.add_score(10);
                break;
            } else if (multiple_choice == 'C' || multiple_choice == 'c') {
                typewrite("By ignoring the post, you avoided contributing to misinformation.\n");
                typewrite("However, you missed an opportunity to educate others on the importance of fact-checking.\n");
                player.add_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            } 
    }
    typewrite("While in the library, you intend to be as productive as possible.\n");
    cout << "Enter the name of an app that helps you with school productivity: ";
    cin.ignore();
    getline(cin, user_input);
    typewrite("You get started on studying using " + user_input + " to lock in.\n");
    typewrite("To avoid doomscrolling you choose to:\n");
    cout << "A) Turn off your cellphone.\n";
    cout << "B) Set specific time blocks for breaks.\n";
    cout << "C) Keep your phone on silent but within reach.\n";
    while (true) {
        cin >> multiple_choice;
            if (multiple_choice == 'A' || multiple_choice == 'a') {
                typewrite("Turning off your cellphone helped you stay focused and avoid distractions throughout your study session.\n");
                typewrite("An hour has passed that feels like minutes due to your intense focus.\n");
                player.add_score(10);
                break;
            } else if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("Setting specific time blocks for breaks allowed you to recharge without falling into the doomscrolling trap.\n");
                player.add_score(5);
                break;
            } else if (multiple_choice == 'C' || multiple_choice == 'c') {
                typewrite("Keeping your phone within reach made it tempting to check it frequently, leading to distractions.\n");
                player.subtract_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }   
    }
    typewrite("As you wrap up your study session, you reflect on the impact of social media on your productivity and mental well-being.\n");
    typewrite("You realize that mindful usage and setting boundaries are crucial in navigating the digital age.\n");
    typewrite("You leave the library imagining how different life would be without social media at all.\n");
    player.add_to_inventory("Cellphone");
    typewrite(".....................\n"); //loading effect

    }
    if (level == 2) {
        string lv2inp1;
        string lv2inp2;
        typewrite("Challenge : Impromptu Pitch Presentation\n");
        cout << "You must present a new app idea to potential investors." << endl;
        cout << "What type of app is it? (ex. game, productivity, social, etc.): " << endl;
        cin.ignore();
        getline(cin, lv2inp1);
        cout << "Who is your target audience? (ex. teens, kids, college students, etc.): " << endl;
        getline(cin, lv2inp2);
        typewrite("Investors are eager to hear your pitch. You have limited time to make an impression.\n");
        typewrite("Hello my name is " + player.get_name() + ", I have created a " + lv2inp1 + " app and my app is targeted to " + lv2inp2 + ".\n");
        cout << "Do you:" << endl;
        cout << "A) Focus on the technical features of the app." << endl;
        cout << "B) Highlight the market potential and user benefits." << endl;
        cout << "C) Wing it and hope for the best." << endl;
        cin >> multiple_choice;
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
        while(!isdigit(funding)) {
            cout << "Invalid input. Please enter a numeric value for funding." << endl;
            cin >> funding;
        }
        typewrite("The room goes quiet. Investors exchange glances.\n");
        typewrite("This number could make or break your future.\n");

        if (funding < 10000) {
            typewrite("The investor appreciates your modest request and sees it as a sign of confidence in your app's potential.\n");
            player.add_score(5);
        } else if (funding >= 10000 && funding <= 20000) {
            typewrite("The investor considers your request reasonable and is willing to discuss further.\n");
            player.add_score(10);
        } else {
            typewrite("The investor's jaws dropped and they are taken aback by the high funding request. \n");
            typewrite("An investor says \"Thank you for your honesty, but this amount is too high. Thank you for your time.\"\n");
            player.subtract_score(10);
        }
        // add more challenge logic here
        player.add_to_inventory("Tech Company Business Card");
        typewrite(".....................\n"); //loading effect
    }
    if (level == 3) {
        vector<string> playlist;
        typewrite("Challenge : Create a 2000s Playlist\n");
        cout << "What genre of music would you like to include in your playlist? (e.g., Pop, Rock, Hip-Hop): ";
        string genre;
        cin >> genre;
        typewrite("You decide to create a playlist featuring " + genre + " music to help you navigate the decade.\n");
        typewrite("As you curate your playlist, you consider the popular artists and songs of the era.\n");
        cout << "How many songs would you like to add to your playlist? ";
        int num_songs;
        cin >> num_songs;
        for (int i = 0; i < num_songs; i++) {
            string song;
            cout << "Enter the name of song " << (i + 1) << ": ";
            cin.ignore();
            getline(cin, song);
            playlist.push_back(song);
        }
        typewrite("You have created a playlist with the following songs:\n");
        for (int i = 0; i < playlist.size(); i++) {
            cout << i + 1 << ". " << playlist.at(i) << endl;
        }
        if (num_songs >= 5) {
            typewrite("Your playlist is well-rounded and captures the essence of the 2000s music scene.\n");
            player.add_score(10);
        } else {
            player.add_score(5);
        }
        player.add_to_inventory("iPod");
        typewrite(".....................\n"); //loading effect
    }
    if (level == 4) {
        typewrite("Challenge : Sell Records\n");
        cout << "A young lady walks into the record store. She walks around slowly, browsing the selection.\n";
        cout << "Do you:" << endl;
        cout << "A) Walk up and greet her." << endl;
        cout << "B) Stay behind the counter." << endl;
        cout << "C) Play some popular music to catch her attention." << endl;
        cin >> multiple_choice;
        if (multiple_choice == 'A' || multiple_choice == 'a') {
            typewrite("You approach the lady with a warm smile and ask if she needs any help finding something.\n");
            typewrite("She appreciates your friendly approach and ends up buying several records based on your recommendations.\n");
            player.add_score(10);
        } else if (multiple_choice == 'B' || multiple_choice == 'b') {
            typewrite("You choose to stay behind the counter, hoping she will find something on her own.\n");
            typewrite("Unfortunately, she leaves without making a purchase.\n");
            player.subtract_score(5);
        } else if (multiple_choice == 'C' || multiple_choice == 'c') {
            typewrite("You play some popular music to create a lively atmosphere in the store.\n");
            typewrite("The lady enjoys the music as you see her mouthing along to the lyrics.\n");
            typewrite("She comes to the counter and asks for your recommendation.\n");
            player.add_score(5);
        } else {
            typewrite("Invalid choice. Please select A, B, or C.\n");
        }
        typewrite("As the day goes on, you reflect on the importance of personal interaction in sales.\n");
        typewrite("To make the store experience better for customers you decide to reorganize the records.\n");
        typewrite("Would you like to organize the records by genre or by artist?\n");
        cout << "Enter 'G' for genre or 'A' for artist: ";
        char organize_choice;
        cin >> organize_choice;
        if (organize_choice == 'G' || organize_choice == 'g') {
            typewrite("You spend time reorganizing the records by genre, making it easier for customers to find their preferred music style.\n");
            typewrite("This thoughtful arrangement enhances the shopping experience and encourages more sales.\n");
            player.add_score(5);
        } else if (organize_choice == 'A' || organize_choice == 'a') {
            typewrite("You reorganize the records by artist, allowing fans to quickly locate albums from their favorite musicians.\n");
            typewrite("This personalized touch resonates with customers and boosts sales.\n");
            player.add_score(5);
        } else {
            typewrite("Invalid choice. You decide to leave the records as they are for now.\n");
        }
        player.add_to_inventory("Vinyl Record");
        typewrite(".....................\n"); //loading effect
    }
    if (level == 5) {
        typewrite("Challenge: Arcade Games\n");
        typewrite("You have 5 quarters to spend at the arcade. Your goal is to win as many games as possible to earn tickets.\n");
        int quarters = 5;
        int tickets = 0;
        while (quarters > 0) {
            cout << "You have " << quarters << " quarters.\n";
            cout << "Choose a game to play:\n";
            cout << "1) Pac-Man (Cost: 3 quarters)" << endl;
            cout << "2) Space Invaders (Cost: 1 quarter)" << endl;
            cout << "3) Defender (Cost: 2 quarters)" << endl;
            cout << "4) Frogger (Cost: 1 quarter)" << endl;
            cout << "5) Galaga (Cost: 1 quarter)" << endl;

            cout << "Enter the number of the game you want to play: ";
            int game_choice;
            cin >> game_choice;
            if (game_choice == 1 && quarters >= 3) {
                cout << "|================================================|" << endl;
                cout << "|    .-.   .-.     .--.                          |" << endl;
                cout << "|   | OO| | OO|   / _.-' .-.   .-.  .-.   .''.   |" << endl;
                cout << "|   |   | |   |   \\  '-. '-'   '-'  '-'   '..'  |" << endl;
                cout << "|   '^^^' '^^^'    '--'                          |" << endl;
                cout << "|================================================|" << endl;
                typewrite("You play Pac-Man and win 60 tickets!\n");
                tickets += 60;
                quarters -= 3;
            } else if (game_choice == 2 && quarters >= 1) {
                cout << "      ___" << endl;
                cout << " ___/   \\___" << endl;
                cout << "/   '---'   \\" << endl;
                cout << "'--_______--'" << endl;
                cout << "     / \\" << endl;
                cout << "    /   \\" << endl;
                cout << "    /\\O/\\" << endl;
                typewrite("You play Space Invaders and win 25 tickets!\n");
                tickets += 25;
                quarters -= 1;
            } 
            else if (game_choice == 3 && quarters >= 2) {
                cout << "         _..._" << endl;
                cout << "     <<  .'     '." << endl;
                cout << "     / \\     / \\" << endl;
                cout << "    (  |     |  )" << endl;
                cout << "    (`\"`  \"  `\"`)" << endl;
                cout << "     \\         /" << endl;
                cout << "      \\  ___  /" << endl;
                cout << "    '.___.'" << endl;
                typewrite("You play Defender and win 40 tickets!\n");
                tickets += 40;
                quarters -= 2;
            } else if (game_choice == 4 && quarters >= 1) {
                cout << "    _     _" << endl;
                cout << "   (')-=-(')" << endl;
                cout << " __(   \"   )__" << endl;
                cout << "/ _/'-----'\\_ \\" << endl;
                cout << "___\\ \\     // //___" << endl;
                cout << ">____)/_\\---/_\\(____<" << endl;
                typewrite("You play Frogger and win 15 tickets!\n");
                tickets += 15;
                quarters -= 1;
            } else if (game_choice == 5 && quarters >= 1) {
                cout << "   .       . " << endl;
                cout << " +  :      ." << endl;
                cout << "           :       _" << endl;
                cout << "       .   !   '  (_)" << endl;
                cout << "          ,|.' " << endl;
                cout << "-  -- ---(-O-`--- --  -" << endl;
                cout << "        ,`|'`." << endl;
                cout << "       ,   !    ." << endl;
                cout << "           :       :  " << endl;
                cout << "           .     --+--" << endl;
                cout << " .:        .       !" << endl;
                typewrite("You play Galaga and win 25 tickets!\n");
                tickets += 25;
                quarters -= 1;
            }
            else {              
                typewrite("Invalid choice or not enough quarters. Please choose a valid game.\n");
            }
        }
        typewrite("You have used all your quarters and earned a total of " + to_string(tickets) + " tickets!\n");
        if (tickets >= 100) {
            typewrite("Congratulations! You have enough tickets to redeem a big prize!\n");
            player.add_score(10);
            player.add_to_inventory("Arcade Prize"); 
        } else {
            typewrite("You didn't earn enough tickets for a big prize, but you had fun at the arcade!\n");
            player.add_score(5);
        } 
        typewrite("As you leave the arcade, you turn your walkman on and walk home\n");
        player.add_to_inventory("Walkman"); 
        typewrite(".....................\n"); //loading effect
    }
    if (level == 6) {
        typewrite("DECADE 1970's ");
        typewrite("Date: November 21, 1975 || Time: 7 AM || Location: \n");
        typewrite("---------------------------------------\n");
        // Add decade introduction narrative here
    }
}


void Decades::minigame(Player &player) {
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



