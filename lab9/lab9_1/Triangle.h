#ifndef LAB9_1_TRIANGLE_H
#define LAB9_1_TRIANGLE_H

class Triangle {
public:
    Triangle(double side1, double side2, double side3);
    double area() const;

private:
    double a, b, c;
    void validateSides() const;
};

#endif //LAB9_1_TRIANGLE_H
