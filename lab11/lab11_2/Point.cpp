#include "Point.h"

using namespace std;

Point::Point(double x, double y) : x(x), y(y) {}

double Point::distanceToOrigin() const {
    return sqrt(x * x + y * y);
}

ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

bool Point::operator<(const Point& other) const {
    return this->distanceToOrigin() < other.distanceToOrigin();
}
