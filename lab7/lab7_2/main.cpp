#include <iostream>

#include "lab.h"

using namespace std;

int main() {
    double a,b,c;
    cout << "Введите коэффициенты a, b, c \n";

    cin >> a >> b >> c;

    solveQuadratic(a,b,c);

    return 0;
}
