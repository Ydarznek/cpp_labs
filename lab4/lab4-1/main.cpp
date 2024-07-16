#include <iostream>
#include "Myroot.h"

using namespace std;

int main() {
    double a, b, c;
    cout << "Введите значения a, b и c квадратного уравнения (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    double x1, x2;
    int result = MyRoot(a, b, c, x1, x2);

    if (result == 1) {
        cout << "Корни: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (result == 0) {
        cout << "Корень: x1 = x2 = " << x1 << endl;
    } else {
        cout << "Корней нет." << endl;
    }

    return 0;
}

//1,-3,2
//1,-2,1
//1,2,5