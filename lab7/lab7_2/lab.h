#ifndef LAB7_2_LAB_H
#define LAB7_2_LAB_H

struct Roots {
    double root1;
    double root2;
    bool hasRealRoots;
};

Roots solveQuadratic(double a, double b, double c);

#endif //LAB7_2_LAB_H
