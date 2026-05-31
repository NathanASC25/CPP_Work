#include <iostream>
using namespace std;
int greetUser(int val) {
    std :: cout << "\nHello World!\n";
    return val * 2;
}

int main() {
    // int num = greetUser(9);
    // std :: cout << "\nNathan's Current Age: " << num << "\n" << std :: endl;
    string userName;
    std :: cout << "Enter name: " << std :: endl;
    cin >> userName;
    cout << "\nYou entered the Name: " << userName << "\n";
    return 0;
}
