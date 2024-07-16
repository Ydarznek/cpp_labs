#include "Myroot.h"
#include <cmath>

using namespace std;

int MyRoot(double a, double b, double c, double &x1, double &x2) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double sqrtDiscriminant = sqrt(discriminant);

        x1 = (-b + sqrtDiscriminant) / (2 * a);
        x2 = (-b - sqrtDiscriminant) / (2 * a);
        return 1;
    } else if (discriminant == 0) {
        x1 = x2 = -b / (2 * a);
        return 0;
    } else {
        return -1;
    }
}
