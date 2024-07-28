#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {
    try {
        double a, b, c;
        cout << "Введите стороны треугольника: ";
        cin >> a >> b >> c;
        Triangle t(a, b, c);
        cout << "Площадь треугольника: " << t.area() << endl;
    } catch (const std::invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
