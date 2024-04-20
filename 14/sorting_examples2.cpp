#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
void print(const T& container) {
    std::cout << "[";
    for (auto v: container) {
        std::cout << ' ' << v ;
    }
    std::cout << " ]" << std::endl;
}

struct Date {
    int day, month, year;
};

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.day << '/' << date.month << '/' << date.year;
    return out;
}

// Ordenação crescente por ano apenas  (campos day e month ignorado).
bool by_year(const Date& a, const Date& b) {
    return a.year < b.year;
}
// Ordenação crescente por ano, depois por mês,
// e finalmente por dia.
bool by_year_month_and_day(const Date& a, const Date& b) {
    if (a.year != b.year) return a.year < b.year;
    if (a.month != b.month) return a.month < b.month;
    return a.day < b.day;
}

// Ordenação crescente por mês, depois por dia,
// e finalmente por ano.
bool by_month_day_and_year(const Date& a, const Date& b) {
    if (a.month != b.month) return a.month < b.month;
    if (a.day != b.day) return a.day < b.day;
    return a.year < b.year;
}
bool has_year_2022(const Date& d) {
    return d.year == 2022;
}
void print_date(const Date& d) {
    std::cout << d.day << '/' << d.month << '/' << d.year << std::endl;
}

int main() {
    std::vector<Date> vec{
            {1,  7,  2021},
            {30, 12, 2020},
            {30, 11, 2020},
            {14, 5,  2020},
            {14, 5,  2021},
            {12, 5,  2020},
            {13, 5,  2020}
    };
    print(vec);

    std::sort(vec.begin(), vec.end(), by_year);
    print(vec);
    std::sort(vec.begin(), vec.end(), by_year_month_and_day);
    print(vec);
    std::sort(vec.begin(), vec.end(), by_month_day_and_year);
    print(vec);
    std::cout << std::any_of(vec.begin(), vec.end(), has_year_2022)
              << ' '
              << std::all_of(vec.begin(), vec.end(), has_year_2022)
              << ' '
              << std::none_of(vec.begin(), vec.end(), has_year_2022);
    std::for_each(vec.begin(), vec.end(), print_date);
    return 0;
}