#include "Input.h"
#include <iostream>
#include <limits>

using namespace std;

bool Input(int &a, int &b) {
    cout << "Введите два целых числа: ";
    cin >> a >> b;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }

    return true;
}
