#include <iostream>
#include <climits>

int main() {
    // Test Integer Limits
    std :: cout << "Integer Limits and Overflow: " << std :: endl;
    int maxValue = INT_MAX;
    std :: cout << "Maximum int value: " << maxValue << std :: endl;
    std :: cout << "What happens when we add 1: " << maxValue + 1 << std :: endl;
    // Test type casting between different types
    std :: cout << "\nType Casting Examples: " << std :: endl;
    double precisePrice = 29.95;
    int roundedPrice = static_cast<int> (precisePrice);
    std :: cout << "Original price (double): " << precisePrice << std :: endl;
    std :: cout << "After casting to int: " << roundedPrice << std :: endl;
    // New decimal to integer casting
    double precisePrice_1 = 30.45;
    int roundedPrice_1 = static_cast<int> (precisePrice_1);
    std :: cout << "Original price (double): " << precisePrice_1 << std :: endl;
    std :: cout << "After casting to int: " << roundedPrice_1 << std :: endl;
    // Test character to integer conversion
    char letter = 'C';
    int letterValue = static_cast<int> (letter);
    std :: cout << "Character '" << letter << "' has ASCII value: " << letterValue << std :: endl;
    // New character to integer conversion
    char letter_1 = 'l';
    int letterValue_1 = static_cast<int> (letter_1);
    std :: cout << "Character '" << letter_1 << "' has ASCII value: " << letterValue_1 << std :: endl;
    // Boolean to Integer conversion test
    bool trueTest = true;
    int trueInt = static_cast<int> (trueTest);
    bool falseTest = false;
    int falseInt = static_cast<int> (falseTest);
    std :: cout << "Boolean value 'true' has int value: " << trueInt << std :: endl;
    std :: cout << "Boolean value 'false' has int value: " << falseInt << std :: endl;
    // Experimental Casting
    std :: cout << "\nExperiment Casting:" << std :: endl;
    // Changing a negative double to an int
    double negDouble = -1.2;
    int negInt = static_cast<int> (negDouble);
    std :: cout << "Original negative double: " << negDouble << std :: endl;
    std :: cout << "After casting to int: " << negInt << std :: endl;
    return 0;
}
