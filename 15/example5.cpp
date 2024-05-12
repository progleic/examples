#include <iostream>
#include <stdexcept>

void f(int v) {
    switch (v % 3) {
        case 0:
            throw std::out_of_range("out of range");
        case 1:
            throw std::logic_error("logic error");
        case 2:
            throw std::runtime_error("runtime error");
    }
}

int main() {
    try {
        f(123); // lança std::out_range;
    }
    catch(std::out_of_range& e) {
        std::cout << "out_of_range handler: " << e.what() << std::endl;
    }
    catch(std::logic_error& e) {
        std::cout << "logic_error handler: " << e.what() << std::endl;
    }
    catch(std::runtime_error& e) {
        std::cout << "runtime_error handler: " << e.what() << std::endl;
    }

    try {
        f(123); // lança std::out_range;
    }
    catch(std::logic_error& e) {
        std::cout << "logic_error handler: " << e.what() << std::endl;
    }
    catch(std::runtime_error& e) {
        std::cout << "runtime_error handler: " << e.what() << std::endl;
    }

    try {
        f(123); // lança std::out_range;
    }
    catch(std::exception& e) {
        std::cout << "exception handler: " << e.what() << std::endl;
    }

    try {
        f(123); // lança std::out_range;
    }
    catch(...) {
        std::cout << "... handler" << std::endl;
    }
    return 0;
}