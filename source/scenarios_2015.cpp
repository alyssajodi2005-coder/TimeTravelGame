#include "../headers/scenario.h"
#include "../headers/player.h"
#include "../headers/gameState.h"
#include <iostream>

using namespace std;

// 2015 Scenario 1: The Pitch
Scenario* create_2015_scenario1() {
    Scenario* scenario = new Scenario("2015_pitch", "2015", "The Pitch");
    
    scenario->setDescription(
        "You're mistaken for a presenter and pushed into pitching to investors!\n"
        "You must present a new app idea. What do you focus on?"
    );
    
    Choice choiceA;
    choiceA.id = "features_design";
    choiceA.text = "Focus on features and design of the app";
    choiceA.description = "Creative but needs business case";
    choiceA.scoreImpact = 5;
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYour creative features impressed investors," << endl;
        cout << "but they wanted more about profitability." << endl;
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "market_revenue";
    choiceB.text = "Highlight market potential, revenue model, and user benefits";
    choiceB.description = "Business-focused approach";
    choiceB.scoreImpact = 15;
    choiceB.influenceImpact = 10;
    choiceB.itemsGranted.push_back("Business Card");
    choiceB.itemsGranted.push_back("Contract");
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nInvestors are excited about your vision!" << endl;
        cout << "They see great market potential." << endl;
        cout << "\n[ITEMS OBTAINED: Business Card, Contract]" << endl;
        gs.setFlag("2015_got_funding", true);
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "personal_story";
    choiceC.text = "Give background on yourself and your experience";
    choiceC.description = "Emotional but unfocused";
    choiceC.scoreImpact = -10;
    choiceC.influenceImpact = -10;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nInvestors are unimpressed." << endl;
        cout << "They wanted to hear about the app, not you." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

// 2015 Scenario 2: Funding Round
Scenario* create_2015_scenario2() {
    Scenario* scenario = new Scenario("2015_funding_round", "2015", "The Funding Round");
    
    scenario->addRequiredScenario("2015_pitch");
    scenario->addRequiredItem("Contract");
    
    scenario->setDescription(
        "6 months later, your app is live. Investors want updates on growth.\n"
        "What's your user acquisition strategy?"
    );
    
    Choice choiceA;
    choiceA.id = "organic_growth";
    choiceA.text = "Organic, word-of-mouth growth";
    choiceA.description = "Slow but sustainable";
    choiceA.scoreImpact = 10;
    choiceA.credibilityImpact = 10;
    choiceA.rippleEffects.push_back("sustainable_tech");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYour sustainable approach builds a loyal user base." << endl;
        cout << "Growth is steady and manageable." << endl;
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "aggressive_marketing";
    choiceB.text = "Aggressive ads and marketing";
    choiceB.description = "Fast growth, high cost";
    choiceB.scoreImpact = 15;
    choiceB.influenceImpact = 15;
    choiceB.credibilityImpact = -5;
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nExplosive growth! But it's expensive..." << endl;
        cout << "You'll need another funding round soon." << endl;
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "viral_stunt";
    choiceC.text = "Viral marketing stunt";
    choiceC.description = "Risky but could explode";
    choiceC.scoreImpact = 20;
    choiceC.influenceImpact = 20;
    choiceC.credibilityImpact = -10;
    choiceC.paradoxImpact = 15;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYour stunt goes viral - millions of users!" << endl;
        cout << "But your reputation is... complicated." << endl;
        
        if (p.has_ripple("misinformation_cascade")) {
            cout << "\n[RIPPLE: Your past with spreading unverified info compounds this]" << endl;
            p.subtract_credibility(5);
        }
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

// 2015 Scenario 3: The Competitor
Scenario* create_2015_scenario3() {
    Scenario* scenario = new Scenario("2015_competitor", "2015", "The Competitor");
    
    scenario->addRequiredScenario("2015_pitch");
    
    scenario->setDescription(
        "A bigger company launches a feature identical to your app.\n"
        "How do you respond?"
    );
    
    Choice choiceA;
    choiceA.id = "sue_for_theft";
    choiceA.text = "Sue for theft";
    choiceA.description = "Legal battle ahead";
    choiceA.scoreImpact = -15;
    choiceA.influenceImpact = -10;
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nThe legal battle drains your resources." << endl;
        cout << "Eventually you settle, but the damage is done." << endl;
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "innovate_faster";
    choiceB.text = "Innovate faster - pivot to new features";
    choiceB.description = "Out-compete them";
    choiceB.scoreImpact = 20;
    choiceB.knowledgeImpact = 10;
    choiceB.itemsGranted.push_back("Pivot Master Badge");
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou pivot to features they don't have." << endl;
        cout << "Your innovation keeps you ahead of the curve." << endl;
        cout << "\n[BADGE EARNED: Pivot Master]" << endl;
        gs.setFlag("2015_innovator_path", true);
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "sell_to_them";
    choiceC.text = "Sell your company to them";
    choiceC.description = "Cash out, exit startup life";
    choiceC.scoreImpact = 30;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou cash out with a lucrative acquisition." << endl;
        cout << "The startup journey ends, but you're financially secure." << endl;
        gs.setFlag("2015_sold_company", true);
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

// 2015 Scenario 4: Team Crisis
Scenario* create_2015_scenario4() {
    Scenario* scenario = new Scenario("2015_team_crisis", "2015", "Team Crisis");
    
    scenario->setRequiredInfluence(60);
    
    scenario->setDescription(
        "Your co-founder wants to take the company in a different direction.\n"
        "This could split the team. How do you handle it?"
    );
    
    Choice choiceA;
    choiceA.id = "compromise_collaborate";
    choiceA.text = "Compromise and collaborate";
    choiceA.description = "Find middle ground";
    choiceA.scoreImpact = 15;
    choiceA.credibilityImpact = 15;
    choiceA.itemsGranted.push_back("Team Player Award");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou find middle ground, strengthening the partnership." << endl;
        cout << "The team emerges more united." << endl;
        cout << "\n[ITEM OBTAINED: Team Player Award]" << endl;
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "stand_firm";
    choiceB.text = "Stand firm on your vision";
    choiceB.description = "They leave, you go solo";
    choiceB.scoreImpact = 10;
    choiceB.influenceImpact = 10;
    choiceB.credibilityImpact = -10;
    choiceB.rippleEffects.push_back("individualism_1950s");
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYour co-founder leaves. You continue alone." << endl;
        cout << "It's lonely, but the vision remains pure." << endl;
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "let_them_lead";
    choiceC.text = "Let them take the lead";
    choiceC.description = "Step back from leadership";
    choiceC.scoreImpact = 5;
    choiceC.influenceImpact = -5;
    choiceC.rippleEffects.push_back("community_leadership_1975");
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou step back, letting them drive the direction." << endl;
        cout << "Sometimes following is harder than leading." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

void load_2015_scenarios(GameState& gameState) {
    gameState.addScenario("2015", create_2015_scenario1());
    gameState.addScenario("2015", create_2015_scenario2());
    gameState.addScenario("2015", create_2015_scenario3());
    gameState.addScenario("2015", create_2015_scenario4());
}