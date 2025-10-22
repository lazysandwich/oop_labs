#include "../include/bad_number.h"
#include <string>

int bad_number(std::string day_of_the_week, int number) {
    if (day_of_the_week == "Понедельник" && number == 12) {
        return 1;
    }
    else if (day_of_the_week == "Вторник" && number > 95) {
        return 1;
    }
    else if (day_of_the_week == "Среда" && number == 34) {
        return 1;
    }
    else if (day_of_the_week == "Четверг" && number == 0) {
        return 1;
    }
    else if (day_of_the_week == "Пятница" && number % 2 == 0) {
        return 1;
    }
    else if (day_of_the_week == "Суббота" && number == 56) {
        return 1;
    }
    else if (day_of_the_week == "Воскресенье" && abs(number) == 666) {
        return 1;
    }
    else {
        return 0;
    }
}
