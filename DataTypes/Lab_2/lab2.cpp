#include <iostream>
#include <climits>  // For data type limits like INT_MAX

int main() {
    // Display program header
    std::cout << "=======================================" << std::endl;
    std::cout << "   PRACTICAL DATA TYPE APPLICATION     " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "This program demonstrates appropriate usage of different data types" << std::endl;
    std::cout << "for various kinds of information." << std::endl << std::endl;
    
    // Program sections will go here
    // ------ AGE DATA SECTION ------
    std::cout << "\n------ AGE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for age information:" << std::endl;

    // Integer type for ages (no fractional years needed)
    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;
    // Display age information
    std::cout << "Child age: " << childAge << " years" << std::endl;
    std::cout << "Teen age: " << teenAge << " years" << std::endl;
    std::cout << "Adult age: " << adultAge << " years" << std::endl;

    // Show memory usage
    std::cout << "\nAge data memory usage:" << std::endl;
    std::cout << "Size of int (for ages): " << sizeof(int) << " bytes" << std::endl;
    
    // Demonstrate age calculations
    std::cout << "\nAge calculations:" << std::endl;
    int totalAges = childAge + teenAge + adultAge;
    int averageAge = (childAge + teenAge + adultAge) / 3;
    int ageRange = adultAge - childAge;
    int myBirthYear = 2007;
    int myCurrentAge = 2026 - myBirthYear;
    std::cout << "Total of all ages: " << totalAges << " years" << std::endl;
    std::cout << "Average of all ages: " << averageAge << " years" << std::endl;
    std::cout << "Age Range: " << ageRange << " years" << std::endl;
    std::cout << "My current age: " << myCurrentAge << " years" << std::endl;
    // ------ PRICE DATA SECTION ------
    std::cout << "\n------ PRICE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for price information:" << std::endl;

    // Use double for prices (needs decimal precision)
    double coffeePrice = 3.99;
    double laptopPrice = 1299.99;
    double housePrice = 350000.00;

    // Display price information
    std::cout << "Coffee price: $" << coffeePrice << std::endl;
    std::cout << "Laptop price: $" << laptopPrice << std::endl;
    std::cout << "House price: $" << housePrice << std::endl;

    // Show memory usage comparison
    float priceAsFloat = 19.99f;
    double priceAsDouble = 19.99;
    std::cout << "\nPrice storage comparison:" << std::endl;
    std::cout << "Price as float: $" << priceAsFloat << " (uses " << sizeof(float) << " bytes)" << std::endl;
    std::cout << "Price as double: $" << priceAsDouble << " (uses " << sizeof(double) << " bytes)" << std::endl;
     
    // Simple price calculations
    double totalPrice = coffeePrice + laptopPrice;
    std::cout << "\nPrice calculations:" << std::endl;
    std::cout << "Coffee + Laptop total: $" << totalPrice << std::endl;

    // Character Practice
    std::cout << std::endl;
    char firstInitial = 'N';
    char lastInitial = 'C';
    char favoriteChar = 'L';
    int firstInitial_int = static_cast<int> (firstInitial);
    int lastInitial_int = static_cast<int> (lastInitial);
    int favoriteChar_int = static_cast<int> (favoriteChar);
    std::cout << "My first initial '" << firstInitial << "' has the ASCII value: " << firstInitial_int << std::endl;
    std::cout << "My last initial '" << lastInitial << "' has the ASCII value: " << lastInitial_int << std::endl;
    std::cout << "My favorite character '" << favoriteChar << "' has the ASCII value: " << favoriteChar_int << std::endl;

    // ------ BOOLEAN DATA SECTION ------
    std::cout << "\n------ BOOLEAN DATA SECTION ------" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;

    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;

    // Display boolean values (they show as 1 for true, 0 for false)
    std::cout << "User account active: " << isActive << std::endl;
    std::cout << "User has admin permission: " << hasPermission << std::endl;
    std::cout << "Task completed: " << isCompleted << std::endl;

    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
    
    // Simple boolean comparisons
    std::cout << "\nBoolean comparisons:" << std::endl;
    std::cout << "Are both account active AND task completed? ";

    if (isActive == true && isCompleted == true) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    // ------ SIMPLE PRODUCT EXAMPLE ------
    std::cout << "\n------ SIMPLE PRODUCT EXAMPLE ------" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;

    // Product information using different data types
    int productId = 12345;
    double productPrice = 29.99;
    char productGrade = 'B';
    bool inStock = true;

    // Display product information
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productId << std::endl;
    std::cout << "Price: $" << productPrice << std::endl;
    std::cout << "Quality Grade: " << productGrade << std::endl;
    std::cout << "In Stock: " << inStock << std::endl;

    // Simple calculations
    double salesTax = productPrice * 0.08;  // 8% tax
    double totalPrice_1 = productPrice + salesTax;
    
    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << salesTax << std::endl;
    std::cout << "Total with tax: $" << totalPrice_1 << std::endl;
    
    // Memory usage summary
    int totalMemory = sizeof(productId) + sizeof(productPrice) + sizeof(productGrade) + sizeof(inStock);
    std::cout << "\nTotal memory used for this product: " << totalMemory << " bytes" << std::endl;

    // SECOND PRODUCT EXAMPLE
    std::cout << "\n------ SECOND PRODUCT EXAMPLE ------" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;
    
    int productId_2 = 23456;
    double productPrice_2 = 30.15;
    char productGrade_2 = 'A';
    bool inStock_2 = true;

    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productId_2 << std::endl;
    std::cout << "Price: $" << productPrice_2 << std::endl;
    std::cout << "Quality Grade: " << productGrade_2 << std::endl;
    std::cout << "In Stock: " << inStock_2 << std::endl;

    double salesTax_2 = productPrice_2 * 0.10; // 10% tax
    double totalPrice_2 = productPrice_2 + salesTax_2;
    
    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (10%): $" << salesTax_2 << std::endl;
    std::cout << "Total with tax: $" << totalPrice_2 << std::endl;

    int totalMemory_2 = sizeof(productId_2) + sizeof(productPrice_2) + sizeof(productGrade_2) + sizeof(inStock_2);
    std :: cout << "\nTotal memory used for this product: " << totalMemory_2 << " bytes" << std::endl;

    return 0;
}
