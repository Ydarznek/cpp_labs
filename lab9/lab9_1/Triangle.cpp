#include <cmath>
#include <stdexcept>

#include "Triangle.h"

using namespace std;

Triangle::Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {
    validateSides();
}

void Triangle::validateSides() const {
    if (a <= 0 || b <= 0 || c <= 0) {
        throw invalid_argument("Стороны должны быть больше нуля");
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        throw invalid_argument("Неверные длины сторон");
    }
}

double Triangle::area() const {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
