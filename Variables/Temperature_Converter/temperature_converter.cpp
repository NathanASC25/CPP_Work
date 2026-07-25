#include <iostream>
#include <iomanip> // for formatting output

// Constoants for conversion formulas

const double FREEZING_POINT_C = 0.0;      // Freezing point of water in Celsius
const double FREEZING_POINT_F = 32.0;     // Freezing point of water in Fahrenheit
const double ABSOLUTE_ZERO_C = -273.15;   // Absolute zero in Celsius
const double F_TO_C_FACTOR = 5.0 / 9.0;   // Multiplication factor to convert F to C
const double C_TO_F_FACTOR = 9.0 / 5.0;   // Multiplication factor to convert C to F

// Function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);

int main() {
    // Display program header
    std::cout << "=======================================" << std::endl;
    std::cout << "       TEMPERATURE CONVERTER           " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "This program converts temperatures between" << std::endl;
    std::cout << "Celsius, Fahrenheit, and Kelvin." << std::endl << std::endl;
    
    // Main program code will go here
    
    // Variable to control the program loop
    bool keepRunning = true;

    while (keepRunning) {
        // Display the menu options
        std::cout << "\nTemperature Conversion Options:" << std::endl;
        std::cout << "1. Celsius to Fahrenheit" << std::endl;
        std::cout << "2. Fahrenheit to Celsius" << std::endl;
        std::cout << "3. Celsius to Kelvin" << std::endl;
        std::cout << "4. Kelvin to Celsius" << std::endl;
        std::cout << "5. Fahrenheit to Kelvin" << std::endl;
        std::cout << "6. Kelvin to Fahrenheit" << std::endl;
        std::cout << "7. Exit Program" << std::endl;
        std::cout << "\nEnter your choice (1-7): ";

        // Get user's menu choice
        int choice;
        std::cin >> choice;

        // Variable for temperature input and result
        double inputTemp, result;

        // Process the user's choice
        switch (choice) {
            case 1: // Celsius to Fahrenheit
                std::cout << "Enter temperature in Celsius: ";
                std::cin >> inputTemp;
                if (inputTemp < ABSOLUTE_ZERO_C) {
                    std::cout << "Invalid Celsius input (Below Absolute Zero)" << std::endl;
                    break;
                }
                result = celsiusToFahrenheit(inputTemp);
                std::cout << fixed << setprecision(2);
                std::cout << inputTemp << " °C = " << result << " °F" << std::endl;
                displayTemperatureFacts(inputTemp);
                break;
            case 2: // Fahrenheit to Celsius
                std::cout << "Enter temperature in Fahrenheit";
                std::cin >> inputTemp;
                result = fahrenheitToCelsius(inputTemp);
                if (result < ABSOLUTE_ZERO_C) {
                    std::cout << "Invalid Fahrenheit input (Below Absolute Zero)" << std::endl;
                    break;
                }
                std::cout << fixed << setprecision(2);
                std::cout << inputTemp << " °F = " << result << " °C" << std::endl;
                displayTemperatureFacts(result);
                break;
            case 3: // Celsius to Kelvin
                std::cout << "Enter temperature in Celsius: ";
                std::cin >> inputTemp;
                if (inputTemp < ABSOLUTE_ZERO_C) {
		    std::cout << "Invalid Celsius input (Below Absolute Zero)" << std::endl;
                    break;
                }
                result = celsiusToKelvin(inputTemp);
                std::cout << fixed << setprecision(2);
                std::cout << inputTemp << " °C = " << result = " K" << std::endl;
                displayTemperatureFacts(inputTemp);
                break;
	    case 4: // Kelvin to Celsius
                std::cout << "Enter temperature in Kelvin: ";
                std::cin >> inputTemp;
                if (inputTemp < 0) {
                    std::cout << "Invalid Kelvin input (Below Absolute Zero)" << std::endl;
                    break;
                }
                result = kelvinToCelsius(inputTemp);
                std::cout << fixed << setprecision(2);
                std::cout << inputTemp << " K = " << result = " °C" << std::endl;
                displayTemperatureFacts(result);
                break;
            case 5: // Fahrenheit to Kelvin
                std::cout << "Enter temperature in Fahrenheit: ";
                std::cin >> inputTemp;
                result = fahrenheitToKelvin(inputTemp);
                if (result < 0) {
                    std::cout << "Invalid Fahrenheit input (Below Absolute Zero)" << std::endl;
                    break;
                }
                std::cout << fixed << setprecision(2);
                std::cout << inputTemp << " °F = " << result = " K" << std::endl;
                resultToCelsius = kelvinToCelsius(result);
                displayTemperatureFacts(resultToCelsius);
                break;
            case 6: // Kelvin to Fahrenheit
                std::cout << "Enter temperature in Kelvin: ";
                std::cin >> inputTemp;
                if (result < 0) {
                    std::cout << "Invalid Kelvin input (Below Absolute Zero)" << std::endl;
                    break;
                }
                result = kelvinToFahrenheit(inputTemp);
                std::cout << fixed << setprecision(2);
                std::cout << inputTemp << " K = " << result = " °F" << std::endl;
                resultToCelsius = fahrenheitToCelsius(result);
                displayTemperatureFacts(resultToCelsius);
                break;
            case 7: // Exit
                keepRunning = false;
                std::cout << "Thank you for using the Temperature Converter!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please select a number between 1 and 7." << std::endl;
                break;
        }
    }
    return 0;
}

double celsiusToFahrenheit(double celsius) {
    if (celsius < ABSOLUTE_ZERO_C) {
        std::cout << "\nInvalid Celsius input: Below Absolute Zero" << std::endl;
        return 0.0;
    }
    return C_TO_F_FACTOR * (celsius + FREEZING_POINT_F);
}

double fahrenheitToCelsius(double fahrenheit) {
    double celsius = F_TO_C_FACTOR * (fahrenheit - FREEZING_POINT_F);
    if (celsius < ABSOLUTE_ZERO_C) {
        std::cout << "\nInvalid Fahrenheit input: Below Absolute Zero" << std::endl;
        return 0.0;
    }
    return celsius;
}

// Convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    if (celsius < ABSOLUTE_ZERO_C) {
        std::cout << "\nInvalid Celsius input: Below Absolute Zero" << std::endl;
        return 0.0;
    }
    return celsius - ABSOLUTE_ZERO_C;
}

// Convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    if (kelvin < 0) {
        std::cout << "\nInvalid Kelvin input: Below Absolute Zero" << std::endl;
        return 0.0;
    }
    return kelvin + ABSOLUTE_ZERO_C;
}

// Convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    // First convert to Celsius, then to Kelvin
    double celsius = fahrenheitToCelsius(fahrenheit);
    if (celsius < ABSOLUTE_ZERO_C) {
        std::cout << "\nInvalid Fahrenheit input: Below Absolute Zero" << std::endl;
        return 0.0;
    }
    return celsiusToKelvin(celsius);
}

// Convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    // First convert to Celsius, then to Fahrenheit
    double celsius = kelvinToCelsius(kelvin);
    if (celsius < ABSOLUTE_ZERO_C) {
        std::cout << "\nInvalid Kelvin input: Below Absolute Zero" << std::endl;
        return 0.0;
    }
    return celsiusToFahrenheit(celsius);
}

// Display interesting facts about the temperature
void displayTemperatureFacts(double celsius) {
    std::cout << "\nInteresting facts about this temperature:" << std::endl;
    
    if (celsius < ABSOLUTE_ZERO_C) {
        std::cout << "This temperature is below absolute zero, which is physically impossible!" << std::endl;
    }
    else if (celsius == ABSOLUTE_ZERO_C) {
        std::cout << "This is absolute zero, the lowest possible temperature in the universe!" << std::endl;
    }
    else if (celsius < FREEZING_POINT_C) {
        std::cout << "This temperature is below the freezing point of water." << std::endl;
    }
    else if (celsius == FREEZING_POINT_C) {
        std::cout << "This is the freezing point of water at standard pressure." << std::endl;
    }
    else if (celsius < 20.0) {
        std::cout << "This is a cool temperature." << std::endl;
    }
    else if (celsius <= 30.0) {
        std::cout << "This is a comfortable room temperature." << std::endl;
    }
    else if (celsius <= 40.0) {
        std::cout << "This is a hot temperature." << std::endl;
    }
    else if (celsius <= 100.0) {
        std::cout << "This is a very hot temperature." << std::endl;
    }
    else if (celsius == 100.0) {
        std::cout << "This is the boiling point of water at standard pressure." << std::endl;
    }
    else {
        std::cout << "This is above the boiling point of water." << std::endl;
    }
}
