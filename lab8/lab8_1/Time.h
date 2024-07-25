#ifndef LAB8_1_TIME_H
#define LAB8_1_TIME_H

#include <iostream>
#include <iomanip>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();

    Time(int h, int m, int s);

    void setTime(int h, int m, int s);

    void display() const;

    Time add(const Time& t) const;
};

#endif //LAB8_1_TIME_H
