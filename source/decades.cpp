#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
#include "../headers/decades.h"
#include "../headers/typewrite.h"
#include "../headers/player.h"
#include "../headers/timeMachine.h"

string lowerCase (string str) {
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

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
        typewrite("Your phone buzzes nonstop. Online opinions spread faster than facts, and everyone seems connected yet distant.\n");
        typewrite("Students rush past you on Campus with headphones in, glued to screens.\n");
        typewrite("Every choice you make can spread fast and its impact may reach further than you expect.\n");
        typewrite("Navigate carefully, and see how your decisions ripple through time.\n");
        // challenge 1: social media dilemma

    }
    if (level == 2) {
        typewrite(".....................\n"); //loading effect
        typewrite("💻DECADE 2010's --> Internet Boom\n");
        typewrite("Date: June 10, 2015 || Time: 3:15 PM || Location: Cupertino, CA\n");
        cout <<"---------------------------------------\n" << endl;
        typewrite("You are in the lobby of a tech company building, surrounded by the latest gadgets and innovations.\n");
        typewrite("The environment is filled with excitement and panic as entrepreneurs pitch their ideas to investors.\n");
        typewrite("You head up to a conference floor. The floor is packed with people, loud chatter fills the room,\n");
        typewrite("whiteboards overflow with ideas, and everyone believes the next big thing is just one pitch away.\n");
        typewrite("Social media platforms like Instagram and Snapchat recently released and are completely changing how people connect worldwide\n");
        typewrite("A group of young programmers storm out of a meeting, clearly frustrated, one even crying.\n");
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
        typewrite("The rise of social media platforms like YouTube and Facebook and gadgets like the iPod are transforming the way people connect and share information.\n");
        typewrite("The decade is also refered to as the Y2K era, the name comes from the computer crisis that occurred in the year 2000,\n");
        typewrite("when computer systems misinterpreted \"00\" as 1900 instead of 2000 causing bugs and system failures.\n");
        typewrite("Your task is to create a playlist on your iPod that embodies the Y2K era.\n");
        //challenge : Create a Playlist
    }
    if (level == 4) {
        typewrite(".....................\n"); //loading effect
        typewrite("💿DECADE 1990's --> For the Record\n");
        typewrite("Date: September 15, 1994 || Time: 10:00 AM || Location: Philadelphia, PA\n");
        cout <<"------------------------------------------------------------------------" << endl;
        typewrite("The 90s are loud, expressive, and unforgettable.\n");
        typewrite("Baggy clothes, flannel shirts, and iconic TV shows define the culture of the decade.\n");
        typewrite("You're an aspiring musician and just started your shift at a local vinyl record store.\n");
        typewrite("Record stores are starting to face a decline in sales due to the rise of CDs replacing vinyls.\n");
        typewrite("CD's were more portable and provided a superior sound quality compared to vinyl records.\n");
        typewrite("Inside the store, shelves are packed, but the customers are few.\n");
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
        typewrite("Your goal is to navigate the arcade, and win as many games as possible with the limited money you have.\n");
        // Challenge: Arcade Games

       
    }
    if (level == 6) {
        typewrite("✌🏾DECADE 1970's --> The Airwaves");
        typewrite("Date: November 21, 1975 || Time: 7 AM || Location: New Orleans, LA\n");
        typewrite("---------------------------------------\n");
        typewrite("You step into the vibrant world of the 1970s, groundbreaking music, and significant social change.\n");
        typewrite("The streets of New Orleans are alive with the sounds of jazz and blues.\n");
        typewrite("This is the time of individuality, creativity, and self-expression.\n");
        typewrite("Music and art used to convey messages and emotions that words alone could not.\n");
        typewrite("In a world without digital platforms, expression travels through sound, movement, and community.\n");
        typewrite("Radios sit in kitchens, cars, and storefronts shaping culture, influencing opinions, and bringing communities together.\n");
        
    }
    if (level == 7) {
        typewrite("DECADE 1960's --> Revolution ");
        typewrite("Date: July 20, 1969 || Time: 8:17 PM || Location: Washington, D.C. \n");
        typewrite("---------------------------------------\n");
        typewrite("You find yourself in the midst of the 1960s, a decade defined by massive social change, cultural revolutions, and historic milestones.\n");
        typewrite("People are advocating for civil rights and social justice, while the space race captures imaginations worldwide.\n");
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
        cout << "You come across a controversial post on social media that a few of your mutual friends have shared." << endl;
        cout << "The topic is very sensitive and could greatly impact public opinion but sheds light on an important global issue." << endl;
        cout << "Do you:" << endl;
        cout << "A) Share the post without verifying its accuracy." << endl;
        cout << "B) Research the information before sharing it." << endl;
        cout << "C) Ignore the post entirely." << endl;
    while (true) {
        cin >> multiple_choice;
            if (multiple_choice == 'A' || multiple_choice == 'a') {
                typewrite("You shared unverified information, adding to the spread of misinformation.\n");
                typewrite("This decision negatively impacts your social reputation and credibility.\n");
                player.subtract_score(10);
                break;
            } else if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("You took the time to research and verify the information , taking a deeper look into the topic before sharing it.\n");
                typewrite("Your repost was well received and appreciated by your peers who even asked for more information.\n");
                player.add_score(10);
                break;
            } else if (multiple_choice == 'C' || multiple_choice == 'c') {
                typewrite("By ignoring the post, you avoided contributing to misinformation.\n");
                typewrite("However, this was a missed opportunity to educate yourself and others on social media credibility and the global issue.\n");
                player.add_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            } 
    }
    typewrite("You make your way to the library. While in the library, you intend to be as productive as possible.\n");
    cout << "Enter the name of an app that helps you with school productivity: ";
    cin.ignore(); // helps to clear the newline character 
    getline(cin, user_input);
    cout << "You get started on studying using " << user_input << " to lock in." << endl;
    cout << "To avoid doomscrolling you choose to: " << endl;
    cout << "A) Turn off your cellphone.\n";
    cout << "B) Time block your study seesion with small breaks for social media.\n";
    cout << "C) Keep your phone on silent but within reach.\n";
    while (true) {
        cin >> multiple_choice;
            if (multiple_choice == 'A' || multiple_choice == 'a') {
                typewrite("Turning off your cellphone helped you stay focused and avoid distractions throughout your study session.\n");
                player.add_score(10);
                break;
            } else if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("Setting specific time blocks for breaks allowed a good balance of productivity and relaxation without doomscrolling.\n");
                player.add_score(5);
                break;
            } else if (multiple_choice == 'C' || multiple_choice == 'c') {
                typewrite("Keeping your phone within reach made it tempting to check it frequently, leading to distractions and doomscrolling.\n");
                player.subtract_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }   
    }
    typewrite("As you wrap up your study session, you reflect on the impact of modern technology on people's lives.\n");
    typewrite("Technology greatly shapes how people spend their time daily, it can help us connect but also distract and distance us from real-world interactions.\n");
    typewrite("Technology can enhance productivity and keep us focused but also make us lazy and not think for ourselves.\n");
    typewrite("Navigating the digital age requires mindful usage and setting boundaries.\n");
    typewrite("As technology advances, it will continue to shape our lives in different ways as it has in the past.\n");
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
        typewrite("Investors hear tons of ideas everyday, so you need to stand out.\n");
        typewrite("\"Hello my name is " + player.get_name() + ", I have created a " + lv2inp1 + " app and my app is targeted to " + lv2inp2 + ".\"\n");
        cout << "To grab their attention, do you:" << endl;
        cout << "A) Focus on the features and design of the app." << endl;
        cout << "B) Highlight the market potential, revenue model, and user benefits." << endl;
        cout << "C) Give a background on yourself and your experience." << endl;
        cin >> multiple_choice;
        if (multiple_choice == 'A' || multiple_choice == 'a') {
            typewrite("Your creative features and design impressed the investors, but they wanted to know more about the app's profitability.\n");
            player.add_score(5);
        } else if (multiple_choice == 'B' || multiple_choice == 'b') {
            typewrite("The investors were excited about your vision and saw great potential in the market for your app.\n");
            player.add_score(10);
        } else if (multiple_choice == 'C' || multiple_choice == 'c') {
            typewrite("The investors were unimpressed and uninterested in your background and experience and wished to hear more about the app itself.\n");
            player.subtract_score(10);
        } else {
            typewrite("Invalid choice. Please select A, B, or C.\n");
        }
        typewrite("An investor asks \"How much funding would your app need for startup costs?\"\n");
        double funding;
        cout << "Enter the amount of funding you are requesting: ";
        cin >> funding;
        while(!isdigit(funding)) {
            cout << "Invalid input. Please enter a numeric value for funding." << endl;
            cin >> funding;
        }
        typewrite("The room goes quiet. Investors whisper and exchange glances...This number could make or break your future.\n");

        if (funding < 10000) {
            typewrite("The investor appreciates your modest request and sees it as a sign of confidence in your app's potential.\n");
            player.add_score(10);
            if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("Combined with your strong pitch, the investor is eager to support your venture.\n");
                player.add_score(10);
                player.add_to_inventory("Contract");
            }
        } else if (funding >= 10000 && funding <= 20000) {
            typewrite("The investor considers your request reasonable and is willing to discuss further.\n");
            player.add_score(5);
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
        cout << "Your playlist will be based on: " << endl;
        cout << "A) Genre" << endl;
        cout << "B) Artist" << endl;
        cin >> multiple_choice;
        if (multiple_choice == 'A' || multiple_choice == 'a') {
            typewrite("You decide to create a playlist based on a specific genre, capturing the essence of the 2000s music scene.\n");
            cout << "What genre of music would you like to make your playlist? (e.g., Pop, Rock, Hip-Hop): ";
            string genre;
            cin.ignore();
            getline(cin, genre);
        } else if (multiple_choice == 'B' || multiple_choice == 'b') {
            typewrite("You choose to create a playlist centered around a particular artist, showcasing their hits from the 2000s.\n");
            cout << "Which artist would you like to focus your playlist on? (e.g., Britney Spears, Eminem, Beyonce): ";
            string artist;
            cin.ignore();
            getline(cin, artist);
        } else {
            typewrite("Invalid choice. Please select A or B.\n");
        }
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
        if (num_songs >= 3) {
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
            typewrite("She comes to the counter and asks for your recommendations.\n");
            player.add_score(5);
        } else {
            typewrite("Invalid choice. Please select A, B, or C.\n");
        }
        typewrite("To make the store experience better for customers you decide to reorganize the records.\n");
        typewrite("Would you like to organize the records by genre or by artist?\n");
        cout << "Enter 'G' for genre or 'A' for artist: ";
        char organize_choice;
        cin >> organize_choice;
        if (organize_choice == 'G' || organize_choice == 'g') {
            typewrite("You spend time reorganizing the records by genre, making it easier for customers to find their preferred music style.\n");
            typewrite("This thoughtful arrangement enhances the shopping experience and encourages more sales.\n");
            player.add_score(10);
        } else if (organize_choice == 'A' || organize_choice == 'a') {
            typewrite("You reorganize the records by artist, allowing fans to quickly locate albums from their favorite musicians.\n");
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
        typewrite("Challenge: The Power of the Airwaves\n");
        typewrite("You work at a local radio station in New Orleans during the vibrant 1970s.\n");
        typewrite("The station is known for playing hits and highlighting national news.\n");
        typewrite("You are a new program director, and your goal is to make decisions that will positively impact the community and boost the station's popularity.\n");

        cout << "What change would you put on air?\n";
        cout << "A) Play local musicians and community voices\n";
        cout << "B) Play national chart-topping hits\n";
        cout << "D) Allow listeners to call in\n";

        cin >> multiple_choice;

        if (multiple_choice == 'A' || multiple_choice == 'a') {
            typewrite("Your decision to highlight local talent and voices connecting deeply with the community.\n");
            player.add_score(10);
        } else if (multiple_choice == 'B' || multiple_choice == 'b') {
            typewrite("While playing national hits attracts some listeners, it fails to create a unique identity for the station.\n");
            player.subtract_score(5); 
        } else if (multiple_choice == 'C' || multiple_choice == 'c') {
            typewrite("Allowing listeners to call in creates an engaging and interactive experience, building a loyal audience.\n");
            player.add_score(5);
        } else {
            typewrite("Invalid choice. Please select A, B, or C.\n");
        }
        typewrite("Just before the show ends, breaking news comes in not yet verified.\n");

        cout << "Do you:\n";
        cout << "A) Broadcast it immediately" << endl;
        cout << "B) Wait to confirm the facts" << endl;
        cout << "C) Ignore it and end the show" << endl;

        cin >> multiple_choice;

        if (multiple_choice == 'A' || multiple_choice == 'a') {
            typewrite("The news spreads fast but some details are wrong, impacting public trust in the station.\n");
            player.subtract_score(5);
        }
        else if (multiple_choice == 'B' || multiple_choice == 'b') {
            typewrite("You wait for confirmation before sharing strengthens the station's credibility.\n");
            player.add_score(10);
        }
        else if (multiple_choice == 'C' || multiple_choice == 'c') {
            typewrite("You avoid risk, but miss an opportunity to inform.\n");
            player.add_score(5);
        }
        typewrite("You realize how much power a single voice can have.\n");
        typewrite("In the 1970s, radio connected neighborhoods, shaped culture, and spread ideas.\n");
        typewrite("Technology may change — but influence always remains.\n");

        player.add_to_inventory("Portable Radio");
        typewrite(".....................\n"); //loading effect
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
        while (true) {
            cin >> answer;
            if (answer == 'B' || answer == 'b') {
                typewrite("Correct! OpenAI was founded in 2015.\n");
                player.add_score(10);
                break;
            } else if (answer == 'A' || answer == 'a' || answer == 'C' || answer == 'c') {
                typewrite("Incorrect. The correct answer is B) 2015.\n");
                player.subtract_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }   
        }
    }
    else if (level == 2) {
        typewrite("Minigame: Tech Timeline Quiz\n");
        cout << "Question: What year was the first iPhone released?" << endl;
        cout << "A) 2005" << endl;
        cout << "B) 2007" << endl;
        cout << "C) 2009" << endl;
        char answer;
        while(true) {
            cin >> answer;
            if (answer == 'B' || answer == 'b') {
                typewrite("Correct! The first iPhone was released in 2007.\n");
                player.add_score(10);
                break;
            } else if (answer == 'A' || answer == 'a' || answer == 'C' || answer == 'c') {
                typewrite("Incorrect. The correct answer is B) 2007.\n");
                player.subtract_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }
        }
    }
    else if (level == 3)  {
        typewrite("Minigame: 2000s Song guessing Game\n");
        /* Example structure for songs. I learned how to use struct form when i searched
        up " c++ simpler way to group data together other than a class" and i found out about structs*/
        struct Song {
            string title;
            string artist;
            int year;
            string lyric_snippet;
            string clue1;
            string clue2;
            string clue3;
        };
        vector<Song> songs = {
            {"Crazy in Love", "Beyonce", 2003, "Got me looking so crazy right now", "It's a song by Beyonce", "It was a hit in 2003", "It's about being crazy"},
            {"Hollaback Girl", "Gwen Stefani", 2005, "So that's right, dude, meet me at the bleachers", "It's a song by Gwen Stefani", "It was released in 2004", "The name of the song is repeated into the chorus"},
            {"In Da Club", "50 Cent", 2003, "Go shorty, it's your birthday", "It's a song by 50 Cent", "It was released in 2003", "It's often played at parties"}
        };
        srand(static_cast<unsigned int>(time(0)));
        int random_index = rand() % songs.size();
        Song selected_song = songs[random_index];
        cin.ignore();
        bool guessed_correctly = false;
        vector<string> clues = {selected_song.lyric_snippet, selected_song.clue1, selected_song.clue2, selected_song.clue3};
        for (int i = 0; i < clues.size(); i++) {
            if (i == 0) {
                typewrite("Guess the song from the following lyric snippet:\n");
            }
            else if (i == 1) {
                typewrite("Here's your first clue:\n");
            } else if (i == 2) {
                typewrite("Here's your second clue:\n");
            } else if (i == 3) {
                typewrite("Here's your final clue:\n");
            }
            cout << clues[i] << endl;
            cout << "Your guess: ";
            string user_guess;
            getline(cin, user_guess);
            if (lowerCase(user_guess) == lowerCase(selected_song.title)) {
                typewrite("Correct! The song is \"" + selected_song.title + "\" by " + selected_song.artist + ".\n");
                guessed_correctly = true;
                if (i == 0) {
                    player.add_score(20);
                } else if (i == 1) {
                    player.add_score(10);
                } else if (i == 2) {
                    player.add_score(5);
                } else {
                    player.add_score(3);
                }
                break;
            } else {
                typewrite("Incorrect guess.\n");
                if (i < clues.size() - 1) {
                    typewrite("Here's another clue:\n");
                }
            }
        }
        if (!guessed_correctly) {
            typewrite("Sorry, you've used all your clues. The correct answer was \"" + selected_song.title + "\" by " + selected_song.artist + ".\n");
            player.subtract_score(5);
        }
    }
    else if (level == 4){
        typewrite("Minigame: 90s Mix Tapes\n");
        vector<string> mix = {
            "Rock mix", "Pop mix", "Hip-Hop mix", "R&B mix"
        };
        srand(static_cast<unsigned int>(time(0)));
        string selected_mix = mix[rand() % mix.size()];
        int minutes_needed = rand() % 20 + 5; // Random duration between 30 and 120 minutes
        cout << "Your friend asks you to create a " << selected_mix << " mix tape for their road trip." << endl;
        cout << "You have " << minutes_needed << " minutes to fill the tape." << endl;
        typewrite("Select songs to add to the mix tape:\n");
        struct musicTrack {
            string title;
            string artist;
            string genre;
            int duration; // in minutes
        };
        vector<musicTrack> tracks = {
            {"Wanna Be Startin' Somethin'", "Michael Jackson", "Pop", 6},
            {"No Scrubs", "TLC", "R&B", 4},
            {"Enter Sandman", "Metallica", "Rock", 5},
            {"California Love", "2Pac", "Hip-Hop", 6},
            {"Baby One More Time", "Britney Spears", "Pop", 4},
            {"Waterfalls", "TLC", "R&B", 4},
            {"Livin' on a Prayer", "Bon Jovi", "Rock", 5},
            {"Gangsta's Paradise", "Coolio", "Hip-Hop", 5},
            {"California Love", "2Pac", "Hip-Hop", 6},
            {"Vogue", "Madonna", "Pop", 5},
            {"Don't Speak", "No Doubt", "Rock", 4},
            {"Smells like teen spirit", "Nirvana", "Rock", 5},
            {"Real Love", "Mary J. Blige", "R&B", 5},
            {"So into You", "Tamia", "R&B", 4},
            {"Wannabe", "Spiece Girls", "Pop", 3}
        };
        int total_duration = 0;
        vector <musicTrack> new_tracks;
        for (auto &track : tracks) {
            cout << "Title: " << track.title << ", Artist: " << track.artist << ", Genre: " << track.genre << ", Duration: " << track.duration << " minutes" << endl;
        }
        while (true) {
            bool isaSongAdded = false;
            cout << "Enter the title of the song to add to the mix tape (or type 'done' to finish): ";
            string song_title;
            cin.ignore();
            getline(cin, song_title);
            if (lowerCase(song_title) == "done") {
                break; 
            }
            for (size_t i = 0; i < tracks.size(); i++) {
                if (lowerCase(tracks[i].title) == lowerCase(song_title)) {
                    new_tracks.push_back(tracks.at(i));
                    total_duration += tracks.at(i).duration;
                    cout << "Added: " << tracks.at(i).title << " by " << tracks.at(i).artist << endl;
                    break;
                    isaSongAdded = true;
                }
            }
            if (!isaSongAdded) {
                typewrite("Song not found. Please try again.\n");
            }
        }
        typewrite("This is the list of the songs that you chose for your coworker\n");
        
        for (int i = 0; i < new_tracks.size(); i++) {
            cout << (i + 1) << ". " << new_tracks.at(i).title << endl;
        }
        bool isSameMix = false;
        for (size_t i = 0; i < new_tracks.size(); i++){
            // learned how to use substr when i searched up "function to create a substring of a string c++" and looked at this https://www.geeksforgeeks.org/cpp/substring-in-cpp/
            if (new_tracks.at(i).genre == selected_mix.substr(0, selected_mix.find(" "))) {
                isSameMix = true;
            } else {
                isSameMix = false;
                break;
            }
        }
        if (isSameMix && total_duration < minutes_needed){
            typewrite("Congrats you created a mix with the correct genre, and did not exceed the amount of minutes needed!\n");
            player.add_score(20);
        }
        else if (isSameMix && total_duration > minutes_needed){
            typewrite("You created a mix with the correct genre, but you exceeded the time limit.\n");
            player.add_score(5);
        }
        else if (!isSameMix && total_duration < minutes_needed){
            typewrite("You did not create a mix with the correct genre, but you stayed under the time limit.\n");
            player.add_score(5);
        }
        else {
            typewrite("You did not create a mix with the correct genre and exceeded the time limit.\n");
            player.subtract_score(10);
        }
    }
}


