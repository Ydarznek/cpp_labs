#include "Time.h"
#include <stdexcept>

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
        throw invalid_argument("Часы должны быть в диапазоне от 0 до 23");
    }
    if (m < 0 || m > 59) {
        throw invalid_argument("Минуты должны быть в диапазоне от 0 до 59");
    }
    if (s < 0 || s > 59) {
        throw invalid_argument("Секунды должны быть в диапазоне от 0 до 59");
    }
}

void Time::display() const {
    cout << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << endl;
}

Time Time::add(const Time& t) const {
    Time result;

    result.seconds = seconds + t.seconds;
    result.minutes = minutes + t.minutes + result.seconds / 60;
    result.seconds %= 60;

    result.hours = hours + t.hours + result.minutes / 60;
    result.minutes %= 60;

    result.hours %= 24;

    return result;
}
