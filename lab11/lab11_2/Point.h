#ifndef LAB11_2_POINT_H
#define LAB11_2_POINT_H

#include <iostream>
#include <cmath>

class Point {
public:
    Point(double x = 0, double y = 0);

    double distanceToOrigin() const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
    bool operator<(const Point& other) const;

private:
    double x;
    double y;
};

#endif //LAB11_2_POINT_H
