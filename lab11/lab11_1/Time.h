#ifndef LAB11_1_TIME_H
#define LAB11_1_TIME_H

class Time {
public:
    Time();
    Time(int h, int m, int s);

    void setTime(int h, int m, int s);

    void display() const;

    Time operator+(const Time& other) const;
    Time operator-(const Time& other) const;
    Time operator+(double seconds) const;

    friend Time operator+(double seconds, const Time& time);
    bool operator==(const Time& other) const;
    bool operator!=(const Time& other) const;

private:
    int hours;
    int minutes;
    int seconds;

    void validateTime(int h, int m, int s) const;
};

#endif //LAB11_1_TIME_H
