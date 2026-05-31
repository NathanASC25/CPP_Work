// Include necessary headers
#include <iostream> // For input/output operations
#include <iomanip> // For output formatting
#include <string> // For string data type
#include <array> // Container array to hold objects
#include <exception> // Exception utilities library
#include <cmath> // Math utilities
using namespace std;
int main() {
    //string name;
    //cout << "\nHello! What is your name? ";
    //cin >> name;
    //cout << "Your name: " << name << std :: endl;
    // Program title and introduction
    cout << "================================================" << endl;
    cout << "            MULTI-COMPONENT PROGRAM             " << endl;
    cout << "================================================" << endl;
    cout << "This program demonstrates using multiple headers" << endl;
    cout << "and formatting techniques in C++" << endl << endl;

    // Component 1: Basic information display
    cout << "------------- COMPONENT 1: BASIC INFO -------------" << endl;

    // Create variables
    /*
    A string is a sequence of characters
    A variable is a storage location that holds a value
    */
    string name = "C++ Programming";
    string version = "C++17";
    string creator = "Bjarne Stroustrup";
    int yearCreated = 1985;

    // Display the information
    cout << "Language: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year Created: " << yearCreated << endl << endl;

    // Add more variables and facts about C++
    string fact1 = "The ++ in C++ stands for adding one more feature to the C Language: Object-Oriented Programming";
    bool usedInQuantFinance = true;
    int yearsOld = 41;

    // Display additional facts
    cout << "Interesting Fact 1: " << fact1 << endl;
    cout << "Interesting Fact 2: C++ is used in Quantitative Finance: " << (usedInQuantFinance ? "True" : "False") << endl;
    cout << "Interesting Fact 3: C++ is " << yearsOld << " years old" << endl << endl;
    // Component 2: Formatted numeric output
    cout << "---------- COMPONENT 2: FORMATTED NUMBERS ---------" << endl;

    // Create numeric variables
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double goldenRatio = 1.61803398874989484820;

    // Display with different precision
    cout << "Default display:" << endl;
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 2 decimal places:" << endl;
    cout << fixed << setprecision(2);
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout << "With 6 decimal places:" << endl;
    cout << fixed << setprecision(6);
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl << endl;

    cout.unsetf(ios::fixed);
    cout << setprecision(6);
    // Component 3: Table display
    cout << "------------- COMPONENT 3: TABLE DATA ------------" << endl;

    // Set up table header
    // setw sets the field width
    cout << left << setw(15) << "Data Type" << setw(20) << "Size (bytes)" << setw(20) << "Value Range" << endl;
    cout << string(55, '-') << endl;
    
    // Table rows
    cout << left << setw(15) << "int" << right << setw(20) << sizeof(int) << left << setw(20) << "  -2^31 to 2^31-1" << endl;
    cout << left << setw(15) << "double" << right << setw(20) << sizeof(double) << left << setw(20) << "  ±1.7e^308" << endl;
    cout << left << setw(15) << "char" << right << setw(20) << sizeof(char) << left << setw(20) << "  -128 to 127" << endl;
    cout << left << setw(15) << "bool" << right << setw(20) << sizeof(bool) << left << setw(20) << "  true or false" << endl;
    // Additional rows for data types
    cout << left << setw(15) << "string" << right << setw(20) << sizeof(std::string) << left << setw(20) << "  (Variable)" << endl;
    cout << left << setw(15) << "float" << right << setw(20) << sizeof(float) << left << setw(20) << "  -3.40282 * 10^38 to (3.40282 * 10^38) - 1" << endl;
    cout << "\n------------- COMPONENT 4: PROGRESS BAR ------------" << endl;
    cout << "Completion: [";
    int progress = 50; // 50% Complete
    for (int i = 0; i < 50; i += 1) {
        if (i < (progress - 4)) cout << "=";
	else cout << " ";
    }
    cout << "] " << progress << "%" << endl;
    cout << "\n------------ COMPONENT 5: POWER Of 2 ------------" << endl;
    int power;
    cout << "Enter a power to raise for base 2: ";
    cin >> power;
    int result = exp2(power);
    cout << "\n2 the power of " << power << " is: " << result << endl << endl;;
    // Program end
    cout << "\nProgram execution completed." << endl;
    return 0;
}
