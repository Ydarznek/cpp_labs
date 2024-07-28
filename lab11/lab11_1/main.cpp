#include <iostream>
#include "Time.h"

using namespace std;

int main() {
    int a1, b1, c1;
    int a2, b2, c2;

    cout << "Время 1: ";
    cin >> a1 >> b1 >> c1;

    cout << "Время 2: ";
    cin >> a2 >> b2 >> c2;

    Time t1(a1,b1, c1);
    t1.display();

    Time t2(a2, b2, c2);
    t2.display();

    //• сложение объектов Time,
    //• вычитание объектов Time,
    //• сложение объекта Time и переменной вещественного типа,
    //• сложение переменной вещественного типа и объект Time,
    //• сравнение двух объектов Time.

    Time t3 = t1 + t2;
    t3.display();

    Time t4 = t1 - t2;
    t4.display();

    Time t5 = t1 + 123456.9;
    t5.display();

    Time t6 = 123456.9 + t1;
    t6.display();

    if (t1 == t2) {
        cout << "Одинаковые" << endl;
    } else {
        cout << "Не одинаковые" << endl;
    }

    return 0;
}
