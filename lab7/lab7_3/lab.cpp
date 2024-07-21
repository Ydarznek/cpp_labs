#include <cmath>
#include <iostream>

#include "lab.h"

using namespace std;

tuple<double, double, bool> solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double sqrtDisc = sqrt(discriminant);

        double root1 = (-b + sqrtDisc) / (2 * a);
        double root2 = (-b - sqrtDisc) / (2 * a);
        return make_tuple(root1, root2, true);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        return make_tuple(root, root, true);
    } else {
        return make_tuple(0.0, 0.0, false);
    }
}