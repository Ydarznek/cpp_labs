#include "Dot.h"
#include <cmath>

using namespace std;

Dot::Dot() : x(0), y(0) {}

Dot::Dot(double x, double y) : x(x), y(y) {}

double Dot::distanceTo(const Dot& point) const {
    return sqrt(std::pow(point.x - x, 2) + pow(point.y - y, 2));
}
