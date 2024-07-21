#ifndef LAB7_1_LAB_H
#define LAB7_1_LAB_H

struct Time {
    int hours;
    int minutes;
    int seconds;

    int toSeconds() const;
    Time add(const Time& other) const;
    Time subtract(const Time& other) const;
    void input();
};


void lab();

#endif //LAB7_1_LAB_H
