#ifndef LAB10_1_DOT_H
#define LAB10_1_DOT_H

class Dot {
private:
    double x;
    double y;
public:
    Dot();
    Dot(double x, double y);
    double distanceTo(const Dot& point) const;
};

#endif //LAB10_1_DOT_H
