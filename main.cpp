#include <iostream>
#include <string>
#include "../lab1/include/bad_number.h"

int main() {
    std::string day_of_the_week = "";
    int number = 0;
    std::cout << "Введите день недели: ";
    std::cin >> day_of_the_week;
    std::cout << "Введите число: ";
    std::cin >> number;
    if (bad_number(day_of_the_week, number) == 1)
        std::cout << "Bad" << std::endl;
    else
        std::cout << "Good" << std::endl;
}
//g++ -std=c++20 -Wall -Wextra main.cpp src/bad_number.cpp -o lab