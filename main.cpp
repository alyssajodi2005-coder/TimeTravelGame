#ifdef _WIN32
#include <windows.h>
#endif

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "headers/player.h"
#include "headers/gameState.h"
#include "headers/scenario.h"
#include "headers/rippleSystem.h"
#include "headers/timeMachine.h"
#include "headers/typewrite.h"

// Forward declarations for scenario loaders
void load_2024_scenarios(GameState& gameState);
void load_2015_scenarios(GameState& gameState);
void load_2003_scenarios(GameState& gameState);
void load_1994_scenarios(GameState& gameState);
void load_1986_scenarios(GameState& gameState);
void load_1975_scenarios(GameState& gameState);
void load_1969_scenarios(GameState& gameState);
void load_1955_scenarios(GameState& gameState);
void load_1944_scenarios(GameState& gameState);
void load_1935_scenarios(GameState& gameState);
void load_1928_scenarios(GameState& gameState);

void showIntro() {
    cout << "\n* HOW TO PLAY *" << endl;
    cout << "1. Travel between decades in any order you choose." << endl;
    cout << "2. Complete scenarios to unlock new paths and decades." << endl;
    cout << "3. Your choices create ripple effects across time." << endl;
    cout << "4. Build your stats to unlock advanced scenarios." << endl;
    cout << "5. Collect artifacts and badges to enhance your journey." << endl;
}

void displayTimeHub(Player& player, GameState& gameState) {
    clearScreen();
    cout << "\n========================================" << endl;
    cout << "       TIME MACHINE CONSOLE" << endl;
    cout << "========================================" << endl;
    cout << "Current Year: " << player.get_year() << endl;
    player.print_stats();
    cout << "\nAVAILABLE DECADES:" << endl;
    
    vector<string> unlocked = gameState.getUnlockedDecades();
    int index = 1;
    for (const string& decade : unlocked) {
        cout << index++ << ") " << decade << "s" << endl;
    }
    cout << (index) << ") View Stats & Inventory" << endl;
    cout << (index + 1) << ") End Journey (View Ending)" << endl;
    cout << "========================================" << endl;
}

void playDecade(string decadeId, Player& player, GameState& gameState, RippleSystem& rippleSystem) {
    clearScreen();
    cout << "\n=== TRAVELING TO " << decadeId << " ===" << endl;
    
    // Time travel animation
    TimeMachine tm;
    tm.TimeTravel();
    
    // Record visit
    gameState.recordVisit(decadeId);
    
    // Get available scenarios for this decade
    vector<Scenario*> available = gameState.getAvailableScenarios(decadeId, player);
    
    if (available.empty()) {
        cout << "\nNo scenarios available in this decade right now." << endl;
        cout << "You may need to meet certain requirements or complete other scenarios first." << endl;
        Continue();
        return;
    }
    
    // Display available scenarios
    cout << "\n=== SCENARIOS IN " << decadeId << " ===" << endl;
    for (size_t i = 0; i < available.size(); i++) {
        cout << (i + 1) << ") " << available[i]->getTitle();
        if (available[i]->isCompleted()) {
            cout << " [COMPLETED]";
        }
        cout << endl;
    }
    cout << (available.size() + 1) << ") Return to Time Hub" << endl;
    
    cout << "\nSelect scenario: ";
    int choice;
    cin >> choice;
    cin.ignore();
    
    if (choice < 1 || choice > available.size() + 1) {
        cout << "Invalid choice." << endl;
        Continue();
        return;
    }
    
    if (choice == available.size() + 1) {
        return; // Return to hub
    }
    
    // Play selected scenario
    Scenario* selectedScenario = available[choice - 1];
    
    // Apply any active ripple effects to this scenario
    rippleSystem.applyRipplesToScenario(selectedScenario, player, gameState);
    
    // Display scenario
    selectedScenario->display();
    
    // Get player choice
    vector<Choice> choices = selectedScenario->getChoices();
    cout << "\nYour choice (1-" << choices.size() << "): ";
    int choiceNum;
    cin >> choiceNum;
    cin.ignore();
    
    if (choiceNum < 1 || choiceNum > choices.size()) {
        cout << "Invalid choice." << endl;
        Continue();
        return;
    }
    
    // Execute choice
    string choiceId = choices[choiceNum - 1].id;
    selectedScenario->complete(choiceId, player, gameState);
    
    // Show updated stats
    cout << "\n=== IMPACT ===" << endl;
    player.print_stats();
    player.print_inventory();
    
    Continue();
}

void calculateEnding(Player& player, GameState& gameState) {
    clearScreen();
    cout << "\n========================================" << endl;
    cout << "     YOUR JOURNEY THROUGH TIME" << endl;
    cout << "========================================" << endl;
    
    player.print_stats();
    player.print_inventory();
    
    int finalScore = player.get_score();
    int credibility = player.get_credibility();
    int influence = player.get_influence();
    int knowledge = player.get_knowledge();
    int paradox = player.get_paradox_risk();
    
    cout << "\n========================================" << endl;
    cout << "           YOUR ENDING" << endl;
    cout << "========================================" << endl;
    
    // Determine ending based on stats and choices
    if (paradox >= 100) {
        cout << "\n=== PARADOX COLLAPSE ===" << endl;
        cout << "Too many changes. Too many contradictions." << endl;
        cout << "The timeline couldn't sustain your interference." << endl;
        cout << "Everything unravels..." << endl;
        finalScore = finalScore / 2;
    }
    else if (knowledge >= 95 && credibility >= 95 && player.get_inventory().size() >= 20) {
        cout << "\n=== THE PERFECT ARCHIVIST ===" << endl;
        cout << "With scientific precision and historical reverence," << endl;
        cout << "you assembled the complete record." << endl;
        cout << "Not a single ripple disturbed the timeline." << endl;
        finalScore = finalScore * 2.2;
    }
    else if (knowledge >= 80 && player.has_badge("Critical Thinker Badge")) {
        cout << "\n=== THE HISTORIAN ===" << endl;
        cout << "Through careful research and dedication," << endl;
        cout << "you've documented history without disrupting it." << endl;
        cout << "Your artifacts tell the complete story." << endl;
        finalScore = finalScore * 1.5;
    }
    else if (credibility >= 80) {
        cout << "\n=== THE COMMUNICATOR ===" << endl;
        cout << "Across a century, you upheld truth and ethics." << endl;
        cout << "In every medium, you chose integrity." << endl;
        finalScore = finalScore * 1.3;
    }
    else if (influence >= 85) {
        cout << "\n=== THE INFLUENCER ===" << endl;
        cout << "Your bold choices created waves across time." << endl;
        cout << "You shaped culture and sparked movements." << endl;
        finalScore = finalScore * 1.4;
    }
    else if (finalScore >= 400) {
        cout << "\n=== THE TIME TRAVELER ===" << endl;
        cout << "You navigated the centuries with skill." << endl;
        cout << "Your journey was remarkable." << endl;
        finalScore = finalScore * 1.2;
    }
    else {
        cout << "\n=== THE OBSERVER ===" << endl;
        cout << "You witnessed history but left little mark." << endl;
        cout << "Sometimes the quiet observer sees the most truth." << endl;
    }
    
    cout << "\n========================================" << endl;
    cout << "FINAL SCORE: " << finalScore << " points" << endl;
    cout << "========================================" << endl;
    
    // Rank
    if (finalScore >= 800) cout << "RANK: LEGENDARY" << endl;
    else if (finalScore >= 600) cout << "RANK: EXCELLENT" << endl;
    else if (finalScore >= 400) cout << "RANK: GREAT" << endl;
    else if (finalScore >= 250) cout << "RANK: GOOD" << endl;
    else cout << "RANK: NOVICE" << endl;
    
    cout << "\nThank you for playing Change the Century!" << endl;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif
    
    string userName;
    
    // Welcome screen
    clearScreen();
    cout << "-------------------------------------" << endl;
    typewrite("   Welcome to Change the Century        \n");
    cout << "-------------------------------------" << endl;
    typewrite("     Make choices, solve puzzles     \n");
    typewrite("          and explore decades        \n");
    cout << "-------------------------------------" << endl;
    cout << endl;
    
    cout << "Enter username: ";
    getline(cin, userName);
    
    showIntro();
    Continue();
    
    // Initialize game
    Player player(userName);
    GameState gameState;
    RippleSystem rippleSystem;
    
    // Load all scenarios
    cout << "\nInitializing time machine..." << endl;
    load_2024_scenarios(gameState);
    load_2015_scenarios(gameState);
    load_2003_scenarios(gameState);
    load_1994_scenarios(gameState);
    load_1986_scenarios(gameState);
    load_1975_scenarios(gameState);
    load_1969_scenarios(gameState);
    load_1955_scenarios(gameState);
    load_1944_scenarios(gameState);
    load_1935_scenarios(gameState);
    load_1928_scenarios(gameState);
    
    cout << "Time machine ready!" << endl;
    Continue();
    
    // Main game loop
    bool gameRunning = true;
    while (gameRunning) {
        displayTimeHub(player, gameState);
        
        cout << "\nSelect destination: ";
        int choice;
        cin >> choice;
        cin.ignore();
        
        vector<string> unlocked = gameState.getUnlockedDecades();
        
        if (choice >= 1 && choice <= unlocked.size()) {
            string selectedDecade = unlocked[choice - 1];
            playDecade(selectedDecade, player, gameState, rippleSystem);
        }
        else if (choice == unlocked.size() + 1) {
            // View stats
            clearScreen();
            player.print_stats();
            player.print_inventory();
            player.print_decades_visited();
            Continue();
        }
        else if (choice == unlocked.size() + 2) {
            // End game
            gameRunning = false;
        }
        else {
            cout << "Invalid choice." << endl;
            Continue();
        }
        
        // Check for paradox collapse
        if (player.get_paradox_risk() >= 100) {
            cout << "\n[WARNING: PARADOX RISK CRITICAL]" << endl;
            cout << "The timeline is collapsing!" << endl;
            Continue();
            gameRunning = false;
        }
    }
    
    // Calculate and show ending
    calculateEnding(player, gameState);
    
    return 0;
}