#include <iostream>

int main() {
    auto num = 30.00f;
    auto num_1 = 30.00;
    std::cout << "\nSize of Number 1 (Float): " << sizeof(num) << ", Value: " << num << std::endl;
    std::cout << "Size of Number 2 (Double): " << sizeof(num_1) << ", Value: " << num_1 << std::endl;
    return 0;
}
