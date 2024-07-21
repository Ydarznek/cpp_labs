#include <cmath>
#include <iostream>

#include "lab.h"

using namespace std;

Roots solveQuadratic(double a, double b, double c) {
    Roots roots;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double sqrtDisc = sqrt(discriminant);

        roots.root1 = (-b + sqrtDisc) / (2 * a);
        roots.root2 = (-b - sqrtDisc) / (2 * a);
        roots.hasRealRoots = true;
    } else if (discriminant == 0) {
        roots.root1 = roots.root2 = -b / (2 * a);
        roots.hasRealRoots = true;
    } else {
        roots.root1 = roots.root2 = 0.0;
        roots.hasRealRoots = false;
    }

    cout << "Коэффициенты квадратного уравнения: a = " << a << ", b = " << b << ", c = " << c << endl;

    if (roots.hasRealRoots) {
        if (roots.root1 == roots.root2) {
            cout << "Уравнение имеет один корень: " << roots.root1 << endl;
        } else {
            cout << "Уравнение имеет два корня: " << roots.root1 << " и " << roots.root2 << endl;
        }
    } else {
        cout << "Уравнение не имеет корней." << endl;
    }

    return roots;
}