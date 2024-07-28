#include "Time.h"
#include <stdexcept>
#include <iostream>
#include <iomanip>

using namespace std;

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) {
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
    validateTime(h, m, s);
    hours = h;
    minutes = m;
    seconds = s;
}

void Time::validateTime(int h, int m, int s) const {
    if (h < 0 || h > 23) {
        throw invalid_argument("Часы должны быть в диапазоне от 0 до 23.");
    }
    if (m < 0 || m > 59) {
        throw invalid_argument("Минуты должны быть в диапазоне от 0 до 59.");
    }
    if (s < 0 || s > 59) {
        throw invalid_argument("Секунды должны быть в диапазоне от 0 до 59.");
    }
}

void Time::display() const {
    cout << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << endl;
}

Time Time::operator+(const Time& other) const {
    int totalSeconds = hours * 3600 + minutes * 60 + seconds +
                       other.hours * 3600 + other.minutes * 60 + other.seconds;
    int h = (totalSeconds / 3600) % 24;
    int m = (totalSeconds % 3600) / 60;
    int s = totalSeconds % 60;

    return Time(h, m, s);
}

Time Time::operator-(const Time& other) const {
    int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
    int totalSeconds2 = other.hours * 3600 + other.minutes * 60 + other.seconds;
    int totalSeconds = totalSeconds1 - totalSeconds2;

    if (totalSeconds < 0) {
        totalSeconds += 24 * 3600;
    }

    int h = (totalSeconds / 3600) % 24;
    int m = (totalSeconds % 3600) / 60;
    int s = totalSeconds % 60;

    return Time(h, m, s);
}

Time Time::operator+(double sec) const {
    int totalSeconds = hours * 3600 + minutes * 60 + seconds + static_cast<int>(sec);
    int h = (totalSeconds / 3600) % 24;
    int m = (totalSeconds % 3600) / 60;
    int s = totalSeconds % 60;

    return Time(h, m, s);
}

Time operator+(double sec, const Time& time) {
    return time + sec;
}

bool Time::operator==(const Time& other) const {
    return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
}

bool Time::operator!=(const Time& other) const {
    return !(*this == other);
}
