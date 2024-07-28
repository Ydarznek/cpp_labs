#ifndef LAB9_2_TIME_H
#define LAB9_2_TIME_H

#include <iostream>
#include <iomanip>
#include <stdexcept>

class Time {
public:
    Time();
    Time(int h, int m, int s);

    void setTime(int h, int m, int s);

    void display() const;

    Time add(const Time& t) const;

private:
    int hours;
    int minutes;
    int seconds;

    void validateTime(int h, int m, int s) const;
};

#endif //LAB9_2_TIME_H
