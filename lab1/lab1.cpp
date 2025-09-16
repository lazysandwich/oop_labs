#include <iostream>
#include <string>
#include "bad_number.cpp"

int main() {
    std::string day_of_the_week = "";
    int number = 0;
    std::cout << "Введите день недели: ";
    std::cin >> day_of_the_week;
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << bad_number(day_of_the_week, number) << std::endl;
}