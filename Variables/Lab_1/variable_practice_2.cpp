#include <iostream>

int main() {
    // Constants for game configuration
    const int MAX_PLAYER_LEVEL = 100;
    const double EXPERIENCE_MULTIPLIER = 1.5;
    const char GOLD_TIER_RATING = 'A';
    // Using auto for type deduction
    auto currentScore = 98500; // Compiler deduces int
    auto averagePlayTime = 45.5; // Compiler deduces double
    auto playerInitial = 'M'; // Compiler deduces char
    auto isOnline = false; // Compiler deduces bool
    auto averageJumpTime = 5.5f; // Compiler deduces float
    auto playerName = "Man"; // Compiler deduces string
    auto highestKillStreak = 25; // Compiler deduces int
    auto currentExperience = 1500; // Compiler deduces int
    // Display Constants
    std::cout << "Game Configuration:" << std::endl;
    std::cout << "Max Level: " << MAX_PLAYER_LEVEL << std::endl;
    std::cout << "Experience Multiplier: " << EXPERIENCE_MULTIPLIER << std::endl;
    // Display auto variables
    std::cout << "\nPlayer Data (using auto):" << std::endl;
    std::cout << "Score: " << currentScore << std::endl;
    std::cout << "Average Play Time: " << averagePlayTime << " hours" << std::endl;
    std::cout << "Initial: " << playerInitial << std::endl;
    std::cout << "Online Status: " << isOnline << std::endl;
    std::cout << "Current Experience (With Multiplier): " << currentExperience * EXPERIENCE_MULTIPLIER << std::endl;

    return 0;
}
