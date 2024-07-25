#include "Time.h"

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) {
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
    minutes += s / 60;
    seconds = s % 60;

    hours += m / 60;
    minutes = m % 60;

    hours = (h + hours) % 24;
}

void Time::display() const {
    std::cout << std::setw(2) << std::setfill('0') << hours << ":"
              << std::setw(2) << std::setfill('0') << minutes << ":"
              << std::setw(2) << std::setfill('0') << seconds << std::endl;
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
