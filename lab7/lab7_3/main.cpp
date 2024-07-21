#include <iostream>
#include <tuple>
#include <cmath>

#include "lab.h"

using namespace std;

int main() {
    double a, b, c;
    cout << "Введите коэффициенты квадратного уравнения (a, b, c): ";
    cin >> a >> b >> c;

    auto [root1, root2, hasRealRoots] = solveQuadratic(a, b, c);

    if (hasRealRoots) {
        if (root1 == root2) {
            cout << "Уравнение имеет один корень: " << root1 << endl;
        } else {
            cout << "Уравнение имеет два корня: " << root1 << " и " << root2 << endl;
        }
    } else {
        cout << "Уравнение не имеет корней." << endl;
    }

    return 0;
}
