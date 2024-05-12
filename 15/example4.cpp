#include <iostream>
#include <stdexcept>

class invalid_time : public std::logic_error {
public:
    invalid_time()
            : logic_error("invalid time") {

    }
};
class time_of_day {
private:
    int hours, minutes;
public:
    time_of_day(int h, int m) {
        if (h < 0 || h > 23 || m < 0 || m > 59)
            throw invalid_time();
        hours = h;
        minutes = m;
    }
    ~time_of_day() {
        // For illustration purposes only.
        std::cout << "Destructor called!" << std::endl;
    }
};
int main() {
    try {
        time_of_day a(23, 59); // execução normal
        time_of_day b(24, 2); // lança excepção
        time_of_day c(23, 12); // não executado
    }
    catch (invalid_time& e) {
        // Destrutor de a invocado antes!
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}