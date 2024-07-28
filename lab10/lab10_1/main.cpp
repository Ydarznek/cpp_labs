#include <iostream>
#include "Dot.h"
#include "Triangle.h"
#include "TriangleAgg.h"

using namespace std;

int main() {
    Dot d1(0, 0), d2(3, 0), d3(0, 4);

    Triangle triangleComp(d1, d2, d3);
    cout << "Композиция:" << endl;
    triangleComp.printSides();
    cout << "Периметр: " << triangleComp.perimeter() << endl;
    cout << "Площадь: " << triangleComp.area() << endl;

    TriangleAgg triangleAgg(d1, d2, d3);
    cout << "Агрегация:" << endl;
    triangleAgg.printSides();
    cout << "Периметр: " << triangleAgg.perimeter() << endl;
    cout << "Площадь: " << triangleAgg.area() << endl;

    return 0;
}
