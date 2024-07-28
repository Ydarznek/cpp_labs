#ifndef LAB10_1_TRIANGLEAGG_H
#define LAB10_1_TRIANGLEAGG_H

#include "Dot.h"

class TriangleAgg {
private:
    const Dot& a;
    const Dot& b;
    const Dot& c;
public:
    TriangleAgg(const Dot& a, const Dot& b, const Dot& c);

    void printSides() const;
    double perimeter() const;
    double area() const;
};

#endif //LAB10_1_TRIANGLEAGG_H
