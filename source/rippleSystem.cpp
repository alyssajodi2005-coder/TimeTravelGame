#include "../headers/rippleSystem.h"
#include "../headers/scenario.h"
#include "../headers/player.h"
#include "../headers/gameState.h"
#include <iostream>

using namespace std;

RippleSystem::RippleSystem() {
    initializeRipples();
}

void RippleSystem::registerRipple(RippleEffect ripple) {
    ripples[ripple.id] = ripple;
}

void RippleSystem::triggerRipple(string rippleId, Player& player, GameState& gameState) {
    if (ripples.find(rippleId) != ripples.end()) {
        RippleEffect& ripple = ripples[rippleId];
        
        // Mark as active
        gameState.activateRipple(rippleId);
        player.add_ripple(rippleId);
        
        cout << "\n[RIPPLE EFFECT ACTIVATED: " << ripple.description << "]" << endl;
    }
}

void RippleSystem::applyRipplesToScenario(Scenario* scenario, Player& player, GameState& gameState) {
    // Check all active ripples to see if they affect this scenario
    for (const string& rippleId : player.get_active_ripples()) {
        if (ripples.find(rippleId) != ripples.end()) {
            RippleEffect& ripple = ripples[rippleId];
            
            // Check if this scenario is affected
            for (const string& affectedScenario : ripple.affectedScenarios) {
                if (affectedScenario == scenario->getId()) {
                    // Apply the ripple effect
                    if (ripple.applyEffect) {
                        ripple.applyEffect(scenario, player, gameState);
                    }
                }
            }
        }
    }
}

void RippleSystem::initializeRipples() {
    // RIPPLE 1: Misinformation Cascade
    RippleEffect misinfoRipple;
    misinfoRipple.id = "misinformation_cascade";
    misinfoRipple.triggerScenarioId = "2024_viral_post";
    misinfoRipple.triggerChoiceId = "share_immediately";
    misinfoRipple.description = "Your history of sharing unverified info affects media trust";
    misinfoRipple.affectedScenarios = {"1975_breaking_news", "1969_front_page", "1944_propaganda"};
    misinfoRipple.applyEffect = [](Scenario* scenario, Player& player, GameState& gameState) {
        cout << "\n[RIPPLE: Your 2024 misinformation sharing affects this era's media landscape]" << endl;
        
        if (scenario->getId() == "1975_breaking_news") {
            // Make verification harder
            player.subtract_credibility(10);
            cout << "Public trust in media is lower. Verification is harder." << endl;
        }
        else if (scenario->getId() == "1969_front_page") {
            cout << "There's pressure to publish fast over accurate." << endl;
            player.add_paradox_risk(5);
        }
    };
    registerRipple(misinfoRipple);
    
    // RIPPLE 2: Verification Standard
    RippleEffect verifyRipple;
    verifyRipple.id = "verification_standard";
    verifyRipple.triggerScenarioId = "2024_viral_post";
    verifyRipple.triggerChoiceId = "research_first";
    verifyRipple.description = "Your commitment to fact-checking strengthens journalism across eras";
    verifyRipple.affectedScenarios = {"1975_breaking_news", "1969_source_protection", "1944_radio_broadcast"};
    verifyRipple.applyEffect = [](Scenario* scenario, Player& player, GameState& gameState) {
        cout << "\n[RIPPLE: Your fact-checking standards elevate journalism in this era]" << endl;
        
        if (scenario->getId() == "1975_breaking_news") {
            // Auto-verify faster
            player.add_credibility(10);
            cout << "Your verification instincts help you confirm facts quickly." << endl;
        }
        else if (scenario->getId() == "1969_source_protection") {
            cout << "Sources trust you more due to your track record." << endl;
            player.add_credibility(5);
        }
    };
    registerRipple(verifyRipple);
    
    // RIPPLE 3: Algorithm Understanding
    RippleEffect algoRipple;
    algoRipple.id = "algorithm_understanding";
    algoRipple.triggerScenarioId = "2024_algorithm";
    algoRipple.triggerChoiceId = "engage_algorithm";
    algoRipple.description = "Understanding modern algorithms helps you recognize network effects early";
    algoRipple.affectedScenarios = {"2015_pitch", "1969_arpanet"};
    algoRipple.applyEffect = [](Scenario* scenario, Player& player, GameState& gameState) {
        cout << "\n[RIPPLE: Your algorithm knowledge gives you insight into network systems]" << endl;
        
        if (scenario->getId() == "2015_pitch") {
            cout << "Investors are impressed by your deep understanding of user engagement." << endl;
            player.add_score(15);
        }
        else if (scenario->getId() == "1969_arpanet") {
            cout << "You grasp the future implications of ARPANET faster than others." << endl;
            player.add_knowledge(30);
        }
    };
    registerRipple(algoRipple);
    
    // RIPPLE 4: Music Curator Path
    RippleEffect musicRipple;
    musicRipple.id = "music_curator_2003";
    musicRipple.triggerScenarioId = "2003_playlist";
    musicRipple.triggerChoiceId = "perfect_playlist";
    musicRipple.description = "Your playlist curation skills transcend eras";
    musicRipple.affectedScenarios = {"1994_store_organization", "1975_playlist_revolution"};
    musicRipple.applyEffect = [](Scenario* scenario, Player& player, GameState& gameState) {
        cout << "\n[RIPPLE: Your musical knowledge flows across decades]" << endl;
        
        if (scenario->getId() == "1994_store_organization") {
            cout << "Organizing by genre comes naturally - you've done this before." << endl;
            player.add_score(20);
        }
        else if (scenario->getId() == "1975_playlist_revolution") {
            cout << "Your DJ show is an instant hit - you know exactly what flows." << endl;
            player.add_score(40);
        }
    };
    registerRipple(musicRipple);
    
    // Add more ripples following this pattern...
}