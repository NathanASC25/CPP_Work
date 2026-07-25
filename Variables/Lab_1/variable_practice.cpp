#include <iostream>

int main() {
    // Declare and initialize variables for player data
    int playerLevel = 5;
    double experiencePoints = 1250.75;
    char difficultyRating = 'B';
    bool hasCompletedTutorial = true;
    // New Player Variables
    float playerSpeed = 9.5;
    short numOfLives = 5;
    char playerRating = 'A';
    // Display the player information
    std::cout << "Player Profile:" << std::endl;
    std::cout << "Level: " << playerLevel << std::endl;
    std::cout << "Experience: " << experiencePoints << std::endl;
    std::cout << "Difficulty Rating: " << difficultyRating << std::endl;
    std::cout << "Completed Tutorial: " << hasCompletedTutorial << std::endl;
    // New Player Information Displayed
    std::cout << "Player Speed: " << playerSpeed << std::endl;
    std::cout << "Number of Lives: " << numOfLives << std::endl;
    std::cout << "Player Rating: " << playerRating << std::endl;

    return 0;
}
