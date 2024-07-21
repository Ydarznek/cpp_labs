#include <iostream>
#include "lab.h"

using namespace std;

int Time::toSeconds() const {
    return hours * 3600 + minutes * 60 + seconds;
}

Time Time::add(const Time& other) const {
    Time result;
    int total_seconds = this->toSeconds() + other.toSeconds();
    result.hours = total_seconds / 3600;
    total_seconds %= 3600;
    result.minutes = total_seconds / 60;
    result.seconds = total_seconds % 60;
    return result;
}

Time Time::subtract(const Time& other) const {
    Time result;
    int total_seconds = this->toSeconds() - other.toSeconds();
    if (total_seconds < 0) {
        total_seconds = 0;
    }
    result.hours = total_seconds / 3600;
    total_seconds %= 3600;
    result.minutes = total_seconds / 60;
    result.seconds = total_seconds % 60;
    return result;
}

void Time::input() {
    do {
        cout << "Введите часы (0-23): ";
        cin >> hours;
    } while (hours < 0 || hours > 23);

    do {
        cout << "Введите минуты (0-59): ";
        cin >> minutes;
    } while (minutes < 0 || minutes > 59);

    do {
        cout << "Введите секунды (0-59): ";
        cin >> seconds;
    } while (seconds < 0 || seconds > 59);
}

void lab() {
    Time time1, time2;

    std::cout << "Введите первое время:\n";
    time1.input();

    std::cout << "Введите второе время:\n";
    time2.input();

    int total_seconds = time1.toSeconds();
    std::cout << "Первое время в секундах: " << total_seconds << " секунд\n";

    Time addedTime = time1.add(time2);
    Time subtractedTime = time1.subtract(time2);

    std::cout << "Сложение: "
              << addedTime.hours << " часов, "
              << addedTime.minutes << " минут, "
              << addedTime.seconds << " секунд\n";

    std::cout << "Вычитание: "
              << subtractedTime.hours << " часов, "
              << subtractedTime.minutes << " минут, "
              << subtractedTime.seconds << " секунд\n";
}
