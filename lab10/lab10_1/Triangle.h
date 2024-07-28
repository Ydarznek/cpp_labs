#ifndef LAB10_1_TRIANGLE_H
#define LAB10_1_TRIANGLE_H

#include "Dot.h"

class Triangle {
private:
    Dot a, b, c;
public:
    Triangle(const Dot& a, const Dot& b, const Dot& c);

    void printSides() const;
    double perimeter() const;
    double area() const;
};

#endif //LAB10_1_TRIANGLE_H
