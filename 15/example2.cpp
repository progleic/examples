#include <iostream>

int read_positive_int() {
    int n;
    std::cin >> n;
    if (n <= 0) throw std::logic_error("expected positive integer");
    return n;
}
int main() {
    try {
        std::cout << "Enter a positive integer: ";
        int n = read_positive_int();
        std::cout << "The number is " << n << std::endl;
    }
    catch(std::logic_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}