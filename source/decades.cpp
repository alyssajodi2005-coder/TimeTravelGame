#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <cctype>
#include <chrono>
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


void Decades::showDecadeIntro(Player &player) {
    //Intro narratives for each decade sourced mainly from history.com, wikipedia.org, google search
    if (level == 1) {
        typewrite("📚DECADE 2020'S --> Socialize vs Social Media\n");
        typewrite("Date: April 15, 2024 || Time: 9:42 AM || Location: NYU College Campus\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("You find yourself in the year 2024. Social media shapes opinions, and technology connects everyone.\n");
        typewrite("Your phone buzzes nonstop. Online opinions spread faster than facts, and everyone seems connected yet distant.\n");
        typewrite("Students rush past you on Campus with headphones in, glued to screens.\n");
        typewrite("Every choice you make can spread fast and its impact may reach further than you expect.\n");
        typewrite("Navigate carefully, and see how your decisions ripple through time.\n");
    }

    if (level == 2) {
        typewrite("💻DECADE 2010's --> Internet Boom\n");
        typewrite("Date: June 10, 2015 || Time: 3:15 PM || Location: Cupertino, CA\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("You are in the lobby of a tech company building, surrounded by the latest gadgets and innovations.\n");
        typewrite("The environment is filled with excitement and panic as entrepreneurs pitch their ideas to investors.\n");
        typewrite("You head up to a conference floor. The floor is packed with people, loud chatter fills the room,\n");
        typewrite("whiteboards overflow with ideas, and everyone believes the next big thing is just one pitch away.\n");
        typewrite("Social media like Instagram and Snapchat recently released and are completely changing how people connect worldwide\n");
        typewrite("A group of young programmers storm out of a meeting, clearly frustrated, one even crying.\n");
        typewrite("You feel and tap on your shoulder as a frantic man in a suit says, \"You're up, time to pitch!\"\n");
    }

    if (level == 3) {
        typewrite("📱DECADE 2000's --> Y2K\n");
        typewrite("Date: August 15, 2003 || Time: 12:30 PM || Location: Brooklyn, NY\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("The summer streets of New York City are lively as usual, \n");
        typewrite("You can hear the sounds of construction, fire trucks, car horns, and Rap music, through your headphones.\n");
        typewrite("The rise of platforms like YouTube and Facebook and gadgets like the iPod are transforming the way people connect.\n");
        typewrite("The Y2K era name comes from the computer crisis that occurred in the year 2000,\n");
        typewrite("when computer systems misinterpreted \"00\" as 1900 instead of 2000 causing bugs and system failures.\n");
    }

    if (level == 4) {
        typewrite(".....................\n"); //loading effect
        typewrite("💿DECADE 1990's --> For the Record\n");
        typewrite("Date: September 15, 1994 || Time: 10:00 AM || Location: Philadelphia, PA\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("The 90s are loud, expressive, and unforgettable.\n");
        typewrite("Baggy clothes, flannel shirts, and iconic TV shows define the culture of the decade.\n");
        typewrite("You're an aspiring musician and just started your shift at a local vinyl record store.\n");
        typewrite("Record stores are starting to face a decline in sales due to the rise of CDs replacing vinyls.\n");
        typewrite("CD's were more portable and provided a superior sound quality compared to vinyl records.\n");
        typewrite("Inside the store, shelves are packed, but the customers are few.\n");
    }

    if (level == 5) {
        typewrite(".....................\n"); //loading effect
        typewrite("🎯DECADE 1980's --> Arcade Antics\n");
        typewrite("Date: January 10, 1986 || Time: 3:49 PM  || Location: Indianapolis, IN\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("The 80s are bold , big hair, bright colors and blockbuster movies.\n") ;
        typewrite("Personal computers are becoming more common and video games gaining massive popularity.\n");
        typewrite("You walk into a busy arcade, chatter fills the air.\n");
        typewrite("The sound of coins and buttons creates an energetic atmosphere.\n");
        typewrite("Kids and teens are concentrated in games like Donkey Kong, and Space Invaders.\n");
    }

    if (level == 6) {
        typewrite("✌🏾DECADE 1970's --> The Airwaves");
        typewrite("Date: November 21, 1975 || Time: 7 AM || Location: New Orleans, LA\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("You step into the vibrant world of the 1970s, groundbreaking music, and significant social change.\n");
        typewrite("The streets of New Orleans are alive with the sounds of jazz and blues.\n");
        typewrite("This is the time of expression where music and art used to convey messages and emotions.\n");
        typewrite("In a world without digital platforms, expression travels through sound, movement, and community.\n");
        typewrite("Personal radios are all over shaping culture, influencing opinions, and bringing communities together.\n");
    }

    if (level == 7) {
        typewrite("🏛DECADE 1960's --> Revolution ");
        typewrite("Date: July 20, 1969 || Time: 8:17 PM || Location: Washington, D.C. \n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("A time of social change, cultural revolutions, and historic milestones.\n");
        typewrite("People are advocating for civil rights and social justice, while the space race captures imaginations worldwide.\n");
        typewrite("As a newspaper journalist, your role is to report on these significant events that shape history.\n");
        typewrite("The attitude and opinions of Journalists greatly impacting public opinion causing media influence.\n");
        typewrite("Also during this time, the ARPANET, the predecessor to the modern internet, was being developed.\n"); // source for ARPANET INFO: https://www.techtarget.com/searchnetworking/definition/ARPANET
    }

    if (level == 8) {
        typewrite("📺DECADE 1950's --> Television Takes Over ");
        typewrite("Date: August 15, 1955 || Time: 6:00 PM || Location: Lakewood,CA\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("In the suburbs of Lakewood people are thriving off post-war prosperity, \n");
        typewrite("cultural shifts, and the rise of television the dominant source of entertainment.\n");
        typewrite("Families gather around their TV sets to watch popular shows like I Love Lucy and The Ed Sullivan Show.\n");
        typewrite("Television starts to shape public opinion, influencing households across America.\n");
    }

    if (level == 9) {
        typewrite("📻DECADE 1940's --> War and Radio ");
        typewrite("Date: July 4, 1944 || Time: 9:00 AM || Location: Jackson, MS \n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("During the 1940s, the world is engulfed in the turmoil of World War II.\n");
        typewrite("Radio serves as the most important source of news during the war bringing in updates and spreading propaganda.\n");
        typewrite("This form of media was less for entertainment and more for information and surviavl.\n");
        //source https://historyrise.com/the-radio-in-wwii-propaganda-how-airwaves-won-minds/?utm_source=copilot.com#the-radio-in-wwii-propaganda-how-airwaves-shaped-public-opinion-influenced-minds-and-changed-warfare-forever
        typewrite("Radios were heavly used in war tactics for communitation, messages were often encoded and decoded using ");
        typewrite("devices like the Enigma machine to prevent enemy interception.\n");
    }

    if (level == 10) {
        typewrite("💰DECADE 1930's --> Trying Times ");
        typewrite("Date:  || Time:  || Location: \n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("The 1930s are quiet and challenging times, marked by the Great Depression.\n");
        typewrite("People rely on radio broadcasts for news, entertainment, and escapism from the harsh realities of daily life.\n");
        typewrite("News papers captivate audiences, providing a temporary relief from economic hardships.\n");
        typewrite("In a time with little certainty about the future, media provides reassurance.\n");
    }

    if (level == 11) {
        typewrite("🎷DECADE 1920's --> Roaring Twenties ");
        typewrite("Date:  || Time:  || Location: \n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("The 1920s, often referred to as the Roaring Twenties, is a decade of economic prosperity and a vibrant culture.\n");
        typewrite("Jazz music, flapper style, and speakeasies define the social scene.\n");
        typewrite("People are connected like never before entertainment travels fast and trends easily spread.\n");
        typewrite("People enjoy speakeasies, often hidden places of music and rebellion.\n");
    }

    if (level == 12) {
        typewrite("📚DECADE 2020's --> Back to the Future ");
        typewrite("Date: April 15, 2024 || Time: 9:42 AM || Location: NYU College Campus\n");
        cout <<"---------------------------------------------------------------------------------------------------------------------\n" << endl;
        typewrite("Back on campus in the library and you finish up the conclusion for your paper on how technology has shaped society.\n");
        typewrite("Your journey through time highlights the impact all the different forms technology has had on daily life.\n");
        cout << "\n--- SOURCES & ARTIFACTS COLLECTED ---\n";
        player.print_inventory();
    }

}

void Decades::nextDecade() {
    level ++;
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
        std::cin >> multiple_choice;
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
    std::cin.ignore(); // helps to clear the newline character 
    std::getline(std::cin, user_input);
    cout << "You get started on studying using " << user_input << " to lock in." << endl;
    cout << "To avoid doomscrolling you choose to: " << endl;
    cout << "A) Turn off your cellphone.\n";
    cout << "B) Time block your study seesion with small breaks for social media.\n";
    cout << "C) Keep your phone on silent but within reach.\n";
    while (true) {
        std::cin >> multiple_choice;
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
    typewrite("You obtained: Cellphone\n");
    typewrite(".....................\n"); //loading effect

    }
    if (level == 2) {
        string lv2inp1;
        string lv2inp2;
        typewrite("Challenge : Impromptu Pitch Presentation\n");
        cout << "You must present a new app idea to potential investors." << endl;
        cout << "What type of app is it? (ex. game, productivity, social, etc.): " << endl;
        std::cin.ignore();
        getline(std::cin, lv2inp1);
        cout << "Who is your target audience? (ex. teens, kids, college students, etc.): " << endl;
        getline(std::cin, lv2inp2);
        typewrite("Investors hear tons of ideas everyday, so you need to stand out.\n");
        typewrite("\"Hello my name is " + player.get_name() + ", I have created a " + lv2inp1 + " app and my app is targeted to " + lv2inp2 + ".\"\n");
        cout << "To grab their attention, do you:" << endl;
        cout << "A) Focus on the features and design of the app." << endl;
        cout << "B) Highlight the market potential, revenue model, and user benefits." << endl;
        cout << "C) Give a background on yourself and your experience." << endl;
        
        while (true) {
            std::cin >> multiple_choice;
            if (multiple_choice == 'A' || multiple_choice == 'a') {
                typewrite("Your creative features and design impressed the investors, but they wanted to know more about the app's profitability.\n");
                player.add_score(5);
                break;
            } else if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("The investors were excited about your vision and saw great potential in the market for your app.\n");
                player.add_score(10);
                break;
            } else if (multiple_choice == 'C' || multiple_choice == 'c') {
                typewrite("The investors were unimpressed and uninterested in your background and experience and wished to hear more about the app itself.\n");
                player.subtract_score(10);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }
        }
        typewrite("An investor asks \"How much funding would your app need for startup costs?\"\n");
        double funding;
        cout << "Enter the amount of funding you are requesting: ";
        std::cin >> funding;
        typewrite("The room goes quiet. Investors whisper and exchange glances...This number could make or break your future.\n");
        while (true) {
            if (funding < 10000) {
                typewrite("The investor appreciates your modest request and sees it as a sign of confidence in your app's potential.\n");
                player.add_score(10);
                if (multiple_choice == 'B' || multiple_choice == 'b') {
                    typewrite("Combined with your strong pitch, the investor is eager to support your venture.\n");
                    player.add_score(10);
                    player.add_to_inventory("Contract");
                    typewrite("You obtained: Contract\n");
                }
                break;
            } else if (funding >= 10000 && funding <= 20000) {
                typewrite("The investor considers your request reasonable and is willing to discuss further.\n");
                player.add_score(5);
                break;
            } else if(funding > 20000){
                typewrite("The investor's jaws dropped and they are taken aback by the high funding request. \n");
                typewrite("An investor says \"Thank you for your honesty, but this amount is too high. Thank you for your time.\"\n");
                player.subtract_score(10);
                break;
            } else {
                typewrite("Invalid input. Please enter a valid amount.\n");
            }
        }
        
        // add more challenge logic here
        player.add_to_inventory("Tech Company Business Card");
        typewrite("You obtained: Tech Company Business Card\n");
        typewrite(".....................\n"); //loading effect
    }
    if (level == 3) {
        vector<string> playlist;
        typewrite("Challenge : Create a 2000s Playlist\n");
        cout << "Your playlist will be based on: " << endl;
        cout << "A) Genre" << endl;
        cout << "B) Artist" << endl;
        while (true) {
            std::cin >> multiple_choice;
            if (multiple_choice == 'A' || multiple_choice == 'a') {
                typewrite("You decide to create a playlist based on a specific genre, capturing the essence of the 2000s music scene.\n");
                cout << "What genre of music would you like to make your playlist? (e.g., Pop, Rock, Hip-Hop): ";
                string genre;
                std::cin.ignore();
                std::getline(std::cin, genre);
                break;
            } else if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("You choose to create a playlist centered around a particular artist, showcasing their hits from the 2000s.\n");
                cout << "Which artist would you like to focus your playlist on? (e.g., Britney Spears, Eminem, Beyonce): ";
                string artist;
                std::cin.ignore();
                std::getline(std::cin, artist);
                break;
            } else {
                typewrite("Invalid choice. Please select A or B.\n");
            }
        }
        cout << "How many songs would you like to add to your playlist?(1-20) ";
        int num_songs;
        std::cin >> num_songs;
        while (true) {
            if (num_songs >=1 && num_songs <= 20) {
                typewrite("Great! Let's start adding songs to your playlist.\n");
                break;  
            } else {
                typewrite("Invalid number of songs. Please enter a number between 1 and 20.\n");
                return;
            }
            for (int i = 0; i < num_songs; i++) {
                string song;
                cout << "Enter the name of song " << (i + 1) << ": ";
                std::cin.ignore();
                std::getline(std::cin, song);
                playlist.push_back(song);
            }
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
        typewrite("You obtained: iPod\n");
        typewrite(".....................\n"); //loading effect
    }
    if (level == 4) {
        typewrite("Challenge : Sell Records\n");
        cout << "A young lady walks into the record store. She walks around slowly, browsing the selection.\n";
        cout << "Do you:" << endl;
        cout << "A) Walk up and greet her." << endl;
        cout << "B) Stay behind the counter." << endl;
        cout << "C) Play some popular music to catch her attention." << endl;
        char multiple_choicelv4;
        while (true) {
            std::cin >> multiple_choicelv4;
            if (multiple_choicelv4 == 'A' || multiple_choicelv4 == 'a') {
                typewrite("You approach the lady with a warm smile and ask if she needs any help finding something.\n");
                typewrite("She appreciates your friendly approach and ends up buying several records based on your recommendations.\n");
                player.add_score(10);
                break;
            } else if (multiple_choicelv4 == 'B' || multiple_choicelv4 == 'b') {
                typewrite("You choose to stay behind the counter, hoping she will find something on her own.\n");
                typewrite("Unfortunately, she leaves without making a purchase.\n");
                break;
                player.subtract_score(5);
            } else if (multiple_choicelv4 == 'C' || multiple_choicelv4 == 'c') {
                typewrite("You play some popular music to create a lively atmosphere in the store.\n");
                typewrite("The lady enjoys the music as you see her mouthing along to the lyrics.\n");
                typewrite("She comes to the counter and asks for your recommendations.\n");
                player.add_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }
        }
        typewrite("To make the store experience better for customers you decide to reorganize the records.\n");
        typewrite("Would you like to organize the records by genre or by artist?\n");
        cout << "Enter 'G' for genre or 'A' for artist: ";
        char organize_choice;
        while (true) {
            std::cin >> organize_choice;
            if (organize_choice == 'G' || organize_choice == 'g') {
                typewrite("You spend time reorganizing the records by genre, making it easier for customers to find their preferred music style.\n");
                typewrite("This thoughtful arrangement enhances the shopping experience and encourages more sales.\n");
                player.add_score(10);
                break;
            } else if (organize_choice == 'A' || organize_choice == 'a') {
                typewrite("You reorganize the records by artist, allowing fans to quickly locate albums from their favorite musicians.\n");
                player.add_score(5);
                break;
            } else {
                typewrite("Invalid choice. You decide to leave the records as they are for now.\n");
            }
        }
        player.add_to_inventory("Vinyl Record");
        typewrite("You obtained: Vinyl Record\n");
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
            std::cin >> game_choice;
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
            typewrite("You obtained: Arcade Prize\n");
        } else {
            typewrite("You didn't earn enough tickets for a big prize, but you had fun at the arcade!\n");
            player.add_score(5);
        } 
        typewrite("As you leave the arcade, you turn your walkman on and walk home\n");
        player.add_to_inventory("Walkman"); 
        typewrite("You obtained: Walkman\n");
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
        cout << "C) Allow listeners to call in\n";

        while (true) {
            std::cin >> multiple_choice;
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
        }
        typewrite("Just before the show ends, breaking news comes in not yet verified.\n");

        cout << "Do you:\n";
        cout << "A) Broadcast it immediately" << endl;
        cout << "B) Wait to confirm the facts" << endl;
        cout << "C) Ignore it and end the show" << endl;

        while (true) {
            std::cin >> multiple_choice;

            if (multiple_choice == 'A' || multiple_choice == 'a') {
                typewrite("The news spreads fast but some details are wrong, impacting public trust in the station.\n");
                player.subtract_score(5);
                break;
            }
            else if (multiple_choice == 'B' || multiple_choice == 'b') {
                typewrite("You wait for confirmation before sharing strengthens the station's credibility.\n");
                player.add_score(10);
                break;
            }
            else if (multiple_choice == 'C' || multiple_choice == 'c') {
                typewrite("You avoid risk, but miss an opportunity to inform.\n");
                player.add_score(5);
                break;
            }
            else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }
        }
        typewrite("You realize how much power a single voice can have.\n");
        typewrite("In the 1970s, radio connected neighborhoods, shaped culture, and spread ideas.\n");
        typewrite("Technology may change — but influence always remains.\n");

        player.add_to_inventory("Portable Radio");
        typewrite("You obtained: Portable Radio\n");
        typewrite(".....................\n"); //loading effect
    }
    if (level == 7) {
        typewrite("Challenge: Historic Milestones\n");
        typewrite("You are a journalist covering major events in the 1960s.\n");
        typewrite("Your goal is to report on significant milestones while navigating the social changes of the decade.\n");

        cout << "Which event would you like to headline on the cover of your next issue? " << endl;
        cout << "A) Civil Rights Movement" << endl;
        cout << "B) US moon landing" << endl;
        cout << "C) Richard Nixon's inauguration" << endl;
        cout << "D) The ARPANET" << endl;
        cout << "E) Vietnam War" << endl;
        char multiple_choice;
        string event_choice;
        while (true) {
            std::cin.ignore();
            std::cin >> multiple_choice;
            if (multiple_choice == 'A' || multiple_choice == 'a') {
                event_choice = "Civil Rights Movement";
                break;
            } else if (multiple_choice == 'B' || multiple_choice == 'b') {
                event_choice = "US moon landing";
                break;
            } else if (multiple_choice == 'C' || multiple_choice == 'c') {
                event_choice = "Richard Nixon's inauguration";
                break;
            } else if (multiple_choice == 'D' || multiple_choice == 'd') {
                event_choice = "The ARPANET";
                break;
            } else if (multiple_choice == 'E' || multiple_choice == 'e') {
                event_choice = "Vietnam War";
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, C, D, or E.\n");
            }
        }
        cout << endl;
        typewrite("You decide to focus on the " + event_choice + " for your next issue.\n");
        typewrite("Let's finish designing the layout and content for your cover story.\n");
        cout << endl;
        cout << endl;
        typewrite("+--------------------------------------+\n");
        typewrite("|              DAILY TIMES              |\n");
        typewrite("|             July 20, 1969             |\n");
        typewrite("+--------------------------------------+\n");

        typewrite("| HEADLINE:                             |\n");
        typewrite("|         " + event_choice + "          |\n");
        typewrite("|                                      |\n");

        if (event_choice == "Civil Rights Movement") {
            typewrite("| The Fair Housing Act is passed,       |\n");
            typewrite("| providing equal housing opportunity   |\n");
            typewrite("| regardless of race, or religion.      |\n");
            // source: https://www.history.com/topics/civil-rights-movement

        } else if (event_choice == "US moon landing") {
            typewrite("| On July 20, 1969, American astronauts |\n");
            typewrite("| Neil Armstrong and Buzz Aldrin become |\n");
            typewrite("| the first humans to land on the Moon. |\n");
            typewrite("| \"One small step for man, one giant   |\n");
            typewrite("| leap for mankind.\"                   |\n");
            // source: https://www.history.com/articles/moon-landing-1969

        } else if (event_choice == "Richard Nixon's inauguration") {
            typewrite("| Richard Nixon is inaugurated as the   |\n");
            typewrite("| 37th President of the United States,  |\n");
            typewrite("| promising to restore law and order    |\n");
            typewrite("| during a time of social unrest.       |\n");
            // source: https://www.history.com/this-day-in-history/january-20/richard-nixon-takes-office

        } else if (event_choice == "The ARPANET") {
            typewrite("| ARPANET is introduced as the first    |\n");
            typewrite("| computer communication network,       |\n");
            typewrite("| laying the foundation for the modern  |\n");
            typewrite("| internet.                             |\n");
            // source: https://www.techtarget.com/searchnetworking/definition/ARPANET

        } else if (event_choice == "Vietnam War") {
            typewrite("| The Vietnam War intensifies as        |\n");
            typewrite("| protests break out across the nation  |\n");
            typewrite("| and the public debates U.S.           |\n");
            typewrite("| involvement overseas.                |\n");
            // source: https://www.history.com/articles/vietnam-war-history
        }

        typewrite("|                                      |\n");
        typewrite("+--------------------------------------+\n\n");


        typewrite("Your cover story on the " + event_choice + " receives widespread acclaim for its insight and impactful storytelling.\n");
        player.add_score(10);
        player.add_to_inventory("News paper");
        typewrite("You obtained: News paper\n");
        typewrite(".....................\n"); //loading effect

    }  
    if (level == 8) {
        cout << "o                   o\n";
        cout << "    \\               __/\n";
        cout << "     \\___          /\n";
        cout << "         \\__    __/\n";
        cout << "            \\  /\n";
        cout << " ____________\\/____________\n";
        cout << "/   ____________________   \\\n";
        cout << "|  /__/  \\__   \\__/  \\__\\  |\n";
        cout << "| |    __   \\__    __   \\| |\n";
        cout << "| |\\__/  \\__   \\__/  \\__ | |\n";
        cout << "| |    __   \\__    __   \\| |\n";
        cout << "| |\\__/  \\__   \\__/  \\__ | |\n";
        cout << "| |    __   \\__    __   \\| |\n";
        cout << "| |\\__/  \\__   \\__/  \\__ | |\n";
        cout << "|  \\________\\___________/  |\n";
        cout << "|                 _   _    |\n";
        cout << "|                (|) (/)   |\n";
        cout << "\\_________________________/\n";
        cout << "    \"--\"           \"--\"\n";

        cout << "========================================\n";
        cout << "          TELEVISION GUIDE         \n";
        cout << "========================================\n";
        //source: https://onlineacademiccommunity.uvic.ca/outcaltl/top-films-and-tv-series-from-the-1950s/
        cout << " 1) I Love Lucy\n";
        cout << " 2) Maverick\n";
        cout << " 3) Gunsmoke\n";
        cout << " 4) Leave It to Beaver\n";
        cout << " 5) The Ed Sullivan Show\n";
        cout << " 6) Singin' in the Rain )\n";
        cout << " 7) Peter Pan\n";
        cout << " 8) Cheyenne\n";
        cout << " 9) Lady and the Tramp\n";
        cout << "10) Cinderella\n";
        cout << "========================================\n";
        cout << "choose a channel to watch (1-10): ";

        int channel;
        if (channel == 1 || channel == 4) {
            typewrite("You watch a family sitcom that reflects post-war American values.\n");
        } 
        else if (channel == 2 || channel == 3 || channel == 8) {
            typewrite("You watch a Western adventure.\n");
        } 
        else if (channel == 5) {
            typewrite("You watch a live showcase of music and culture.\n");
        } 
        else {
            typewrite("You watch a colorful animated musical film.\n");
        }
        player.add_score(5);

        typewrite("Suddenly, the screen shifts.\n");
        typewrite("The black-and-white image bursts into color.\n");
        typewrite("Television in the 1950s revolutionized entertainment. \n");
        typewrite("Color television began commercial broadcasting in 1953, with the first major live event aired in color occurring on January 1, 1954.\n");
        
        //https://www.thoughtco.com/color-television-history-4070934


        player.add_to_inventory("Color TV");
        typewrite("You obtained: Color TV\n");
        typewrite(".....................\n"); //loading effect

    } 
    if (level == 9) {
        typewrite("Challenge: Decryption\n");
        typewrite("You are tasked with decrypting a message from your Army General.\n");
        cout << "=== WWII Cipher Codebook ===" << endl;
        cout << "A -> XC         N -> TR" << endl; 
        cout << "B -> QZ         O -> HY" << endl;
        cout << "C -> RT         P -> AC" << endl;
        cout << "D -> PL         Q -> BX" << endl;
        cout << "E -> MN         R -> LO" << endl;
        cout << "F -> YK         S -> KP" << endl;
        cout << "G -> VA         T -> ME" << endl;
        cout << "H -> SJ         U -> NI" << endl;
        cout << "I -> OB         V -> CJ" << endl;
        cout << "J -> DW         W -> QA" << endl;
        cout << "K -> FE         X -> EV" << endl;
        cout << "L -> UG         Y -> RW" << endl;
        cout << "M -> ZN         Z -> TD" << endl;
        cout << "============================" << endl;

        typewrite("Encrypted Word:\n");
        typewrite("PL XC QA TR\n\n");

        typewrite("Enter the decrypted word: ");

        string answer;
        cin.ignore();
        getline(cin, answer);

        if (answer == "DAWN" || answer == "dawn" || answer == "Dawn") {
            typewrite("\nCorrect! \n");
            player.add_score(10);
        } else {
            typewrite("\nIncorrect.\n");
            typewrite("The correct word was: DAWN\n");
            player.subtract_score(5);
        }
        player.add_to_inventory("Cipher Decoder");
        typewrite(".....................\n"); //loading effect
    }
    if (level == 10) {
        typewrite("Challenge: Headline Pressure\n");
        typewrite("The Great Depression has left millions struggling.\n");
        typewrite("Your newspaper must publish tomorrow's front-page headline.\n");

        cout << "Choose your headline: " << endl;
        cout << "A) 'Hope on the Horizon: New Deal = New Jobs?'" << endl;
        cout << "B) 'Banks Continue to Fail: National Crisis'" << endl;
        cout << "C) 'Bread Lines Grow as Families Struggle'" << endl;
        char lv10multiple_choice;
        while (true) {
            cin >> lv10multiple_choice;
            if (lv10multiple_choice == 'A' || lv10multiple_choice == 'a') {
                typewrite("Your optimistic headline resonates with readers looking for hope during tough times.\n");
                player.add_score(10);
                break;
            } else if (lv10multiple_choice == 'B' || lv10multiple_choice == 'b') {
                typewrite("Your headline captures the severity of the situation, drawing attention to the financial crisis.\n");
                player.add_score(5);
                break;
            } else if (lv10multiple_choice == 'C' || lv10multiple_choice == 'c') {
                typewrite("Your headline highlights the human impact of the depression, evoking empathy from readers.\n");
                player.subtract_score(5);
                break;
            } else {
                typewrite("Invalid choice. Please select A, B, or C.\n");
            }
    }
        typewrite("Your words travel across the country by print and radio.\n");
        typewrite("In difficult times, information can either bring hope or deepen fear.\n");

        typewrite("You roll a blank sheet into the typewriter and start typing.\n");
        if (lv10multiple_choice == 'A' || lv10multiple_choice == 'a') {
            typewrite("'Hope on the Horizon: New Deal = New Jobs?'\n");
        } else if (lv10multiple_choice == 'B' || lv10multiple_choice == 'b') {
            typewrite("'Banks Continue to Fail: National Crisis'\n");
        } else if (lv10multiple_choice == 'C' || lv10multiple_choice == 'c') {
            typewrite("'Bread Lines Grow as Families Struggle'\n");
        }
        typewrite("Your editor shouts across the room:\n");
        typewrite("\"Use these words on cover: HOPE, WORK, TOMORROW\"\n");
        typewrite("You must type a short message using all three words to go on the cover:\n");
        typewrite("Type a short message in all caps (5-40 characters):\n");
        string message;
        cin.ignore();
        getline(cin, message);
        while (true) {
            if (message.length() >= 5 && message.length() <= 40 &&
                message.find("HOPE") != string::npos &&
                message.find("WORK") != string::npos &&
                message.find("TOMORROW") != string::npos) {
                typewrite("You type your message onto the paper:\n");
                typewrite("\"" + message + "\"\n");
                typewrite("The editor nods. \"That'll do.\"\n");
                player.add_score(10);
                break;
            } else {
                typewrite("Not quite right. Make sure your message is 5-40 characters and includes HOPE, WORK, and TOMORROW.\n");
                typewrite("Type a short message (5-40 characters):\n");
                getline(cin, message);
            }
        }

        typewrite("In the 1930s, typewriters turn thoughts into history.\n");
        typewrite("There is no delete key. No algorithm only paper and ink.\n");

        player.add_to_inventory("Typewriter");
        typewrite("You obtained: Typewriter\n");
        typewrite(".....................\n"); //loading effect

    }
    if (level == 11) {
        typewrite("Challenge: The Hidden Speakeasy\n");
        typewrite("New York City, 1926. Prohibition is in full force.\n");
        typewrite("Rumors say a speakeasy is hidden nearby.\n\n");

        typewrite("With a crumpled map in your hand you make your way around Lower Manhattan:\n\n");

        cout << "==============================\n";
        cout << "   LOWER MANHATTAN — 1926\n";
        cout << "==============================\n\n";

        cout << "[1] Bakery\n";
        cout << "    \"Fresh bread. Family owned.\"\n\n";

        cout << "[2] Tailor Shop\n";
        cout << "    \"Suits pressed daily.\"\n\n";

        cout << "[3] Narrow Alley\n";
        cout << "    \"No sign. One dim light.\"\n\n";

        cout << "[4] Jazz Hall\n";
        cout << "    \"Music spills onto the street.\"\n\n";

        cout << "[5] Apartment Building\n";
        cout << "    \"Quiet. Locked doors.\"\n\n";

        typewrite("Rumor says the speakeasy has:\n");
        typewrite("- No sign\n");
        typewrite("- No crowds\n");
        typewrite("- Only whispers\n\n");

        int location;
        bool found = false;

        while (!found) {
            cout << "Where do you investigate? (1-5): ";
            cin >> location;

            if (location == 3) {
                found = true;
            } else {
                typewrite("You look around, but this place seems too obvious so keep searching.\n");
            }
        }

        typewrite("\nYou slip into the narrow alley.\n");
        typewrite("The street noise fades behind you.\n");
        typewrite("You see a man standing casually against the wall in front of a door.\n\n");

        typewrite("You both make eye contact.\n");
        typewrite("\"Password?\" he asks.\n\n");

        cin.ignore();
        string password;
        typewrite("Hint: A book by F. Scott Fitzgerald — \"The Great ______\"\n");
        cout << "Enter the password: ";
        getline(cin, password);

        if (password == "Gatsby" || password == "gatsby") {
            typewrite("\nThe man nods and opens the door.\n");
            typewrite("You've found the speakeasy!\n\n");

            typewrite("Inside, flappers dance and jazz fills the room.\n");

            player.add_score(10);

        } else {
            typewrite("\nThe man shakes his head.\n");
            typewrite("\"Wrong password. Come back when you know it.\"\n");
            player.subtract_score(5);
        }
        typewrite("In the 1920s, speakeasies were hidden havens of music and rebellion.\n");
        player.add_to_inventory("Speakeasy Matchbook");
        typewrite("You obtained: Speakeasy Matchbook\n");
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
            std::cin >> answer;
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
    if (level == 2) {
        typewrite("Minigame: Tech Timeline Quiz\n");
        cout << "Question: What year was the first iPhone released?" << endl;
        cout << "A) 2005" << endl;
        cout << "B) 2007" << endl;
        cout << "C) 2009" << endl;
        char answer;
        while(true) {
            std::cin >> answer;
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
    if (level == 3)  {
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
        bool guessed_correctly = false;
        vector<string> clues = {selected_song.lyric_snippet, selected_song.clue1, selected_song.clue2, selected_song.clue3};

        std::cin.ignore();

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
            std::getline(std::cin, user_guess);
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
    if (level == 4){
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
        for (size_t i = 0; i < tracks.size(); i++) {
            const musicTrack& track = tracks.at(i);
            typewrite("Title: " + track.title + ", Artist: " + track.artist + ", Genre: " + track.genre + ", Duration: " + to_string(track.duration) + " minutes\n");
        }
        std::cin.ignore();
        while (true) {
            typewrite("Enter the title of the song to add to the mix tape (or type 'done' to finish): ");
            string song_title;
            std::getline(std::cin, song_title);
            if (lowerCase(song_title) == "done") {
                break; 
            }
            bool isaSongAdded = false;
            for (size_t i = 0; i < tracks.size(); i++) {
                if (lowerCase(tracks[i].title) == lowerCase(song_title)) {
                    new_tracks.push_back(tracks.at(i));
                    total_duration += tracks.at(i).duration;
                    cout << "Added: " << tracks.at(i).title << " by " << tracks.at(i).artist << endl;
                    isaSongAdded = true;
                    break;
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
    if (level == 5) {
        typewrite("Minigame: Arcade Trivia\n");
        cout << "Question: Which classic arcade game features a yellow character that eats dots and avoids ghosts?" << endl;
        cout << "A) Donkey Kong" << endl;
        cout << "B) Pac-Man" << endl;
        cout << "C) Space Invaders" << endl;
        char answer;
        while (true) {
            std::cin >> answer;
            if (answer == 'B' || answer == 'b') {
                typewrite("Correct! Pac-Man features a yellow character that eats dots and avoids ghosts.\n");
                player.add_score(10);
                break;
            } else if (answer == 'A' || answer == 'a' || answer == 'C' || answer == 'c') {
                typewrite("Incorrect. The correct answer is B\n");
                break;
            }
        }
    }
    if (level == 6) {
        typewrite("Minigame: Word Scramble - 70s Edition\n");
        cout << "You will be playing a game of scramble with 70s-related words/phrases." << endl;
        cout << endl;
        cout << endl;
        vector<string> words {"queen", "eagles", "fleetwood mac", "jaws", "star wars", "alien", "boogie", "funky", "sideburns", "afro", "pong", "atari", "vcr"};
        srand(static_cast<unsigned int>(time(0)));
        int random_index = rand() % words.size();
        string selected_word = words.at(random_index);
        for (int i = selected_word.size(); i > 0; i--) {
            int random_num = rand() % i;
            int j = i - 1;
            char temp = selected_word.at(j);
            selected_word.at(j) = selected_word.at(random_num);
            selected_word.at(random_num) = temp;
        }
        while(selected_word == words.at(random_index)) {
            for (int i = selected_word.size(); i > 0; i--) {
            int random_num = rand() % i;
            int j = i - 1;
            char temp = selected_word.at(j);
            selected_word.at(j) = selected_word.at(random_num);
            selected_word.at(random_num) = temp;
        }
        }
        cout << "Your Scrambled word is " << selected_word << ". Unscramble within 60 seconds" << endl;
        string userInput;
        /* i learned to use this library because i wanted to time the user in scrambling the words so i 
        searched up "c++ library thaat allows counting time"  and found this page: https://en.cppreference.com/w/cpp/chrono.html */
        const auto start = chrono::steady_clock::now();
        std::cin.ignore();
        std::getline(std::cin, userInput);
        
        const auto end_time = chrono::steady_clock::now();
        const auto duration = chrono::duration_cast<chrono::seconds> (end_time - start);
        const auto time_passed = duration.count();

        if (lowerCase(userInput) == words.at(random_index) && time_passed <= 60){
            typewrite("Congrats! You unscrambled the word and did so in " + to_string(time_passed) + "seconds! \n");
        }
        else if (lowerCase(userInput) == words.at(random_index) && time_passed > 60){
            typewrite("You unscrambled the word but took too long!  \n");
        }
        else {
            typewrite("Sorry you did not unscramble the word correctly. The correct word was " + words.at(random_index) + "\n");
        } 
    }
    if (level == 7) {
        typewrite("Minigame: 1960s Fact Checking quiz\n");

        cout << "You will be given a series of facts about the 1960s, and have to decide if it is True of False, points will be awarded or deducted based on answers." << endl;

        struct Fact{
            string statement;
            bool isTrue;
        };

        vector<Fact> civilRightsMovement {
            {"The Fair Housing Act was passed in 1968, outlawing discrimination in housing", true},
            {"Martin Luther King Jr. gave his 'I Have a Dream' speech in 1963", true},
            {"The Civil Rights Act was passed in 1970", false},
            {"The Civil Rights Act was passed in 1970", false},
        };
        vector<Fact> usMoonlanding{
            {"Neil Armstrong was the first person to walk on the Moon on July 20, 1969", true},
            {"Armstrong's famous quote was 'One small step for man, one giant leap for mankind'", true},
            {"The Apollo 11 mission landed on the dark side of the Moon" , false},
            {"Three astronauts walked on the Moon during Apollo 11" , false}
        };
        vector<Fact> veitnamWar{
            {"The Tet Offensive occurred in 1968", true},
            {"The Gulf of Tonkin incident in 1964 led to increased U.S. involvement", true},
            {"The Vietnam War ended in 1969", false},
            {"No protests occurred against the Vietnam War during the 1960s", false}
        };

        srand(static_cast<unsigned int> (time(0)));
        vector<vector<Fact>> allEvents {civilRightsMovement, usMoonlanding, veitnamWar};
        vector<vector<bool>> questionDone(3, vector<bool>(4, false));
        
        int num;
        while(true){
            typewrite("How many questions would you like to answer? (max 12 questions)");
            cin >> num;
            if (num > 0 && num < 13){
                break;
            }
            else {
                typewrite("Invalid Input, Please try again.");
            }
        }
        int correctCount = 0;
        int incorrectCount = 0;
        for (int i = 0; i < num; i++) {
            int rand_event = rand() % 3;
            int rand_question = rand() % 4;
            while(questionDone.at(rand_event).at(rand_question)){
                rand_event = rand() % 3;
                rand_question = rand() % 4;
            }
            questionDone.at(rand_event).at(rand_question) = true;
            cout << "This is your question " << allEvents.at(rand_event).at(rand_question).statement << " type true or false" << endl;
            string answer;
            std::cin.ignore();
            while(true){
                std::cin >> answer;
                if (lowerCase(answer) == "true" || lowerCase(answer) == "false"){
                    break;
                }
                else {
                    typewrite("Invalid answer, please write True or False.\n");
                }

            }
            if ((lowerCase(answer) == "true") == allEvents.at(rand_event).at(rand_question).isTrue){
                player.add_score(5);
                correctCount++;
            } else {
                player.subtract_score(5);
                incorrectCount++;
            }
        }
        if (correctCount > incorrectCount) {
            typewrite("Congrats, you got more questions correct than wrong.\n");
        }
        else if (correctCount == incorrectCount){
            typewrite("Congrats, you got same amount of questions right as you got wrong.\n");
        }
        else {
            typewrite("Unfortunately, you got more questions wrong than correct.\n");
        }

          
    }
    if (level == 8){
        typewrite("Minigame: 1950's TV Schedule Memory Game\n");
        cout << "You will be shown 3-5 shows with their air time. You will have some time to study the Schedule." << endl;
        cout << "The schedule will then be erased, and you will have to recall which shows aired at what time." << endl;


        cout << "TONIGHT'S SCHEDULE - Study this carefully!" << endl;
        cout << "I Love Lucy - 7:00 PM" << endl;
        cout << "Gunsmoke - 8:00 PM" << endl;
        cout << "The Ed Sullivan Show - 8:30 PM" << endl;
        cout << "Maverick - 9:00 PM" << endl;
        cout << "\nMemorizing time: ";

        const auto startTime = chrono::steady_clock::now();
        int study_duration = 10;
        while (true) {
            auto currentTime = chrono::steady_clock::now();

            auto elapsedTime = chrono::duration_cast<chrono::seconds>(currentTime - startTime);
            int seconds = study_duration - elapsedTime.count();

            if (seconds <= 0) {
                break;
            }

            /* I learned to use /r when i searched "is there a way to make a statement override another statement in c++ in the same line
            because i wanted it to keep on changing as the loop ran so it would be better if it kept overriding it
            i also learned that you should use flush so that the countdown could be displayed instantaneous
            instead of the countdown being not accurate*/
            cout << "Time Remainng : " << seconds << " seconds\r" << flush;

        }
        /* I searched " is there a clear function in c++ that clears the console ouput for the user"
        and the ai overview gave me this code.*/
        #if defined(_WIN32) | defined(_WIN64)
            std::system("cls");
        #else
            std::system("clear");
        #endif
        typewrite("Now, please recall the air times for the following shows:\n");
        vector<string> shows = {"I Love Lucy", "Gunsmoke", "The Ed Sullivan Show", "Maverick"};
        vector<string> correctTimes = {"7:00 PM", "8:00 PM", "8:30 PM", "9:00 PM"};
        std::cin.ignore();
        for (size_t i = 0; i < shows.size(); i++) {
            typewrite("What time did " + shows.at(i) + " air? ");
            string userInput;
            while (true) {
                std::getline(std::cin, userInput);
                if (userInput.find(":") != string::npos && (userInput.find("AM") != string::npos || userInput.find("PM") != string::npos)) {
                    break;
                } else {
                    typewrite("Invalid time format. Please enter the time in the format HH:MM AM/PM.\n");
                }
            }
            if (lowerCase(userInput) == lowerCase(correctTimes.at(i))) {
                typewrite("Correct!\n");
                player.add_score(5);
            } else {
                typewrite("Incorrect. The correct time was " + correctTimes.at(i) + ".\n");
            }
        }
    }
}