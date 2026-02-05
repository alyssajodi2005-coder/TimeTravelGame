#include "../headers/scenario.h"
#include "../headers/player.h"
#include "../headers/gameState.h"
#include <iostream>

using namespace std;

Scenario* create_1994_scenario1() {
    Scenario* scenario = new Scenario("1994_customer_service", "1994", "Customer Approach");
    scenario->setDescription("A young woman browses the record store slowly. What do you do?");
    
    Choice choiceA;
    choiceA.id = "greet_warmly";
    choiceA.text = "Greet her warmly and offer help";
    choiceA.scoreImpact = 15;
    choiceA.credibilityImpact = 10;
    choiceA.itemsGranted.push_back("Salesperson of the Month");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYour friendly approach wins her over." << endl;
        cout << "She buys multiple records based on your recommendations." << endl;
        cout << "\n[ITEM OBTAINED: Salesperson of the Month]" << endl;
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "stay_counter";
    choiceB.text = "Stay behind the counter";
    choiceB.scoreImpact = -5;
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nShe leaves without buying anything." << endl;
        cout << "Sometimes initiative matters." << endl;
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "play_music";
    choiceC.text = "Play popular music to catch her attention";
    choiceC.scoreImpact = 10;
    choiceC.influenceImpact = 5;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nShe mouths along to the lyrics and approaches the counter." << endl;
        cout << "Music creates connection." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

Scenario* create_1994_scenario2() {
    Scenario* scenario = new Scenario("1994_organization", "1994", "Store Organization");
    scenario->addRequiredScenario("1994_customer_service");
    scenario->setDescription("Reorganize the store for better customer experience. How?");
    
    Choice choiceA;
    choiceA.id = "by_genre";
    choiceA.text = "Organize by genre";
    choiceA.scoreImpact = 15;
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nCustomers find their preferred music faster." << endl;
        cout << "Sales improve noticeably." << endl;
        if (p.has_ripple("music_curator_path")) {
            cout << "\n[RIPPLE: Your 2003 playlist skills make this effortless!]" << endl;
            p.add_score(20);
        }
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "by_artist";
    choiceB.text = "Organize by artist";
    choiceB.scoreImpact = 10;
    choiceB.credibilityImpact = 5;
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nFans quickly locate their favorite musicians' albums." << endl;
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "by_decade";
    choiceC.text = "Organize by decade/era";
    choiceC.scoreImpact = 10;
    choiceC.knowledgeImpact = 15;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou create a historical journey through music." << endl;
        cout << "Music historians love it!" << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

Scenario* create_1994_scenario3() {
    Scenario* scenario = new Scenario("1994_decline", "1994", "The Decline");
    scenario->addRequiredScenario("1994_organization");
    scenario->setDescription("Sales are down 40%. Owner considers closing. Your suggestion?");
    
    Choice choiceA;
    choiceA.id = "live_events";
    choiceA.text = "Host live music events";
    choiceA.scoreImpact = 20;
    choiceA.influenceImpact = 15;
    choiceA.itemsGranted.push_back("Event Organizer Badge");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nCommunity gathers for live music nights." << endl;
        cout << "The store becomes a cultural hub!" << endl;
        cout << "\n[BADGE EARNED: Event Organizer]" << endl;
        if (p.has_ripple("community_leadership_1975")) {
            cout << "\n[RIPPLE: Your community building experience helps immensely!]" << endl;
            p.add_score(30);
        }
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "online_sales";
    choiceB.text = "Sell online via mail order";
    choiceB.scoreImpact = 25;
    choiceB.knowledgeImpact = 20;
    choiceB.rippleEffects.push_back("early_ecommerce");
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou adapt early to internet sales!" << endl;
        cout << "Ahead of the curve pays off." << endl;
        gs.setFlag("1994_digital_pioneer", true);
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "rare_collectibles";
    choiceC.text = "Focus on rare/collectible vinyl";
    choiceC.scoreImpact = 15;
    choiceC.credibilityImpact = 10;
    choiceC.itemsGranted.push_back("Collector's Network Access");
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nNiche market of serious collectors keeps you afloat." << endl;
        cout << "Smaller audience, but deeply loyal." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

Scenario* create_1994_scenario4() {
    Scenario* scenario = new Scenario("1994_connection", "1994", "Personal Connection");
    scenario->setRequiredCredibility(70);
    scenario->setDescription("A regular customer shares how music helped them through hard times.");
    
    Choice choiceA;
    choiceA.id = "share_story";
    choiceA.text = "Share your own music story";
    choiceA.scoreImpact = 20;
    choiceA.credibilityImpact = 20;
    choiceA.itemsGranted.push_back("Human Touch Badge");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nA deep connection forms through shared love of music." << endl;
        cout << "This is why music matters." << endl;
        cout << "\n[BADGE EARNED: Human Touch]" << endl;
        gs.setFlag("1994_connector_path", true);
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "recommend_playlists";
    choiceB.text = "Recommend therapeutic playlists";
    choiceB.scoreImpact = 15;
    choiceB.knowledgeImpact = 10;
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYour curated recommendations become their comfort." << endl;
        cout << "They become a lifelong customer." << endl;
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "listen_quietly";
    choiceC.text = "Listen quietly and offer support";
    choiceC.scoreImpact = 10;
    choiceC.credibilityImpact = 10;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nSometimes listening is the most powerful gift." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

void load_1994_scenarios(GameState& gameState) {
    gameState.addScenario("1994", create_1994_scenario1());
    gameState.addScenario("1994", create_1994_scenario2());
    gameState.addScenario("1994", create_1994_scenario3());
    gameState.addScenario("1994", create_1994_scenario4());
}