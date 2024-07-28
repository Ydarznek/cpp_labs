#include "TriangleAgg.h"
#include <iostream>
#include <cmath>

using namespace std;

TriangleAgg::TriangleAgg(const Dot& a, const Dot& b, const Dot& c) : a(a), b(b), c(c) {}

void TriangleAgg::printSides() const {
    cout << "Сторона AB: " << a.distanceTo(b) << endl;
    cout << "Сторона BC: " << b.distanceTo(c) << endl;
    cout << "Сторона CA: " << c.distanceTo(a) << endl;
}

double TriangleAgg::perimeter() const {
    return a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a);
}

double TriangleAgg::area() const {
    double ab = a.distanceTo(b);
    double bc = b.distanceTo(c);
    double ca = c.distanceTo(a);

    double s = perimeter() / 2;

    return sqrt(s * (s - ab) * (s - bc) * (s - ca));
}
