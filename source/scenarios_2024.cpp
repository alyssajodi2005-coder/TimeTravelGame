#include "../headers/scenario.h"
#include "../headers/player.h"
#include "../headers/gameState.h"
#include <iostream>

using namespace std;

// 2024 Scenario 1: The Viral Post
Scenario* create_2024_scenario1() {
    Scenario* scenario = new Scenario("2024_viral_post", "2024", "The Viral Post");
    
    scenario->setDescription(
        "You come across a controversial post on social media that a few of your mutual friends have shared.\n"
        "The topic is very sensitive and could greatly impact public opinion but sheds light on an important global issue.\n"
        "What do you do?"
    );
    
    // Choice A: Share immediately
    Choice choiceA;
    choiceA.id = "share_immediately";
    choiceA.text = "Share the post without verifying its accuracy";
    choiceA.description = "Fast spread, but risky...";
    choiceA.scoreImpact = -10;
    choiceA.credibilityImpact = -10;
    choiceA.influenceImpact = 15;
    choiceA.paradoxImpact = 5;
    choiceA.rippleEffects.push_back("misinformation_cascade");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou shared unverified information, adding to the spread of misinformation." << endl;
        cout << "Your social reputation takes a hit, but the post goes viral." << endl;
        gs.setFlag("2024_needs_damage_control", true);
    };
    scenario->addChoice(choiceA);
    
    // Choice B: Research first
    Choice choiceB;
    choiceB.id = "research_first";
    choiceB.text = "Research the information before sharing it";
    choiceB.description = "Responsible, builds credibility";
    choiceB.scoreImpact = 10;
    choiceB.credibilityImpact = 10;
    choiceB.knowledgeImpact = 5;
    choiceB.itemsGranted.push_back("Verified Badge");
    choiceB.unlocksDecades.push_back("1969");
    choiceB.rippleEffects.push_back("verification_standard");
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou took time to research and verify the information." << endl;
        cout << "Your post is well-received and sparks meaningful discussion." << endl;
        cout << "\n[ITEM OBTAINED: Verified Badge]" << endl;
        gs.setFlag("2024_fact_checker", true);
    };
    scenario->addChoice(choiceB);
    
    // Choice C: Ignore
    Choice choiceC;
    choiceC.id = "ignore_post";
    choiceC.text = "Ignore the post entirely";
    choiceC.description = "Safe, but passive";
    choiceC.scoreImpact = 5;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou avoided contributing to misinformation." << endl;
        cout << "However, this was a missed opportunity to educate yourself and others." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

// 2024 Scenario 2: Doomscroll Battle
Scenario* create_2024_scenario2() {
    Scenario* scenario = new Scenario("2024_doomscroll", "2024", "The Doomscroll Battle");
    
    scenario->addRequiredScenario("2024_viral_post");
    
    scenario->setDescription(
        "Working on your research paper, your phone keeps buzzing with notifications.\n"
        "You need to stay focused. How do you handle distractions?"
    );
    
    Choice choiceA;
    choiceA.id = "phone_off";
    choiceA.text = "Turn off your cellphone completely";
    choiceA.description = "Maximum focus";
    choiceA.scoreImpact = 15;
    choiceA.knowledgeImpact = 10;
    choiceA.itemsGranted.push_back("Focus Mode Achievement");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nTurning off your phone helped you stay completely focused." << endl;
        cout << "You finish your paper in record time with excellent quality." << endl;
        gs.setFlag("2024_focused_worker", true);
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "time_blocks";
    choiceB.text = "Time block your study session with small breaks for social media";
    choiceB.description = "Balanced approach";
    choiceB.scoreImpact = 10;
    choiceB.knowledgeImpact = 5;
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nTime blocking allowed a good balance of productivity and relaxation." << endl;
        cout << "You complete your work without burning out." << endl;
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "phone_silent";
    choiceC.text = "Keep your phone on silent but within reach";
    choiceC.description = "Temptation lurks...";
    choiceC.scoreImpact = 5;
    choiceC.credibilityImpact = -5;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nKeeping your phone nearby made it tempting to check frequently." << endl;
        cout << "Your work suffers from constant interruptions." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

// 2024 Scenario 3: Algorithm Challenge
Scenario* create_2024_scenario3() {
    Scenario* scenario = new Scenario("2024_algorithm", "2024", "The Algorithm Challenge");
    
    scenario->setRequiredInfluence(40);
    
    scenario->setDescription(
        "An AI recommendation algorithm is showing you increasingly extreme content.\n"
        "You notice yourself being pulled into an echo chamber. How do you respond?"
    );
    
    Choice choiceA;
    choiceA.id = "engage_algorithm";
    choiceA.text = "Engage with it to understand how it works";
    choiceA.description = "Learn the system";
    choiceA.scoreImpact = 5;
    choiceA.knowledgeImpact = 15;
    choiceA.paradoxImpact = 10;
    choiceA.unlocksDecades.push_back("2015");
    choiceA.rippleEffects.push_back("algorithm_understanding");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou experiment with the algorithm, watching the echo chamber form." << endl;
        cout << "You learn exactly how filter bubbles work, but feel somewhat manipulated." << endl;
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "diverse_sources";
    choiceB.text = "Actively seek diverse sources";
    choiceB.description = "Break the bubble";
    choiceB.scoreImpact = 20;
    choiceB.credibilityImpact = 20;
    choiceB.itemsGranted.push_back("Critical Thinker Badge");
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou break out of the echo chamber by seeking balanced perspectives." << endl;
        cout << "Your understanding becomes more nuanced and complete." << endl;
        cout << "\n[BADGE EARNED: Critical Thinker]" << endl;
        gs.setFlag("2024_balanced_observer_path", true);
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "delete_app";
    choiceC.text = "Delete the app";
    choiceC.description = "Avoid the problem";
    choiceC.scoreImpact = 5;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou delete the app, avoiding the manipulation." << endl;
        cout << "But you don't learn how these systems work." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

// 2024 Scenario 4: AI Ethics
Scenario* create_2024_scenario4() {
    Scenario* scenario = new Scenario("2024_ai_ethics", "2024", "AI Ethics Debate");
    
    scenario->setRequiredKnowledge(50);
    
    scenario->setDescription(
        "Your class debates whether AI-generated content should be labeled.\n"
        "The discussion gets heated. What's your position?"
    );
    
    Choice choiceA;
    choiceA.id = "transparency_required";
    choiceA.text = "Full transparency required - all AI content must be labeled";
    choiceA.description = "Authenticity matters";
    choiceA.scoreImpact = 10;
    choiceA.credibilityImpact = 15;
    choiceA.knowledgeImpact = 5;
    choiceA.rippleEffects.push_back("ethical_tech_path");
    choiceA.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou argue passionately for transparency and authenticity." << endl;
        cout << "The class debates the line between innovation and deception." << endl;
        gs.setFlag("2024_transparency_advocate", true);
    };
    scenario->addChoice(choiceA);
    
    Choice choiceB;
    choiceB.id = "creator_freedom";
    choiceB.text = "Let creators decide - freedom over regulation";
    choiceB.description = "Liberty-focused";
    choiceB.scoreImpact = 10;
    choiceB.influenceImpact = 10;
    choiceB.knowledgeImpact = 5;
    choiceB.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYou defend creative freedom and innovation." << endl;
        cout << "Some agree, others worry about accountability." << endl;
    };
    scenario->addChoice(choiceB);
    
    Choice choiceC;
    choiceC.id = "ban_ai_creative";
    choiceC.text = "AI should be banned from creative work entirely";
    choiceC.description = "Controversial stance";
    choiceC.scoreImpact = 5;
    choiceC.credibilityImpact = 5;
    choiceC.influenceImpact = -5;
    choiceC.customEffect = [](Player& p, GameState& gs) {
        cout << "\nYour hardline stance sparks debate about progress vs preservation." << endl;
        cout << "It's an unpopular take, but you stand by your principles." << endl;
    };
    scenario->addChoice(choiceC);
    
    return scenario;
}

void load_2024_scenarios(GameState& gameState) {
    gameState.addScenario("2024", create_2024_scenario1());
    gameState.addScenario("2024", create_2024_scenario2());
    gameState.addScenario("2024", create_2024_scenario3());
    gameState.addScenario("2024", create_2024_scenario4());
}