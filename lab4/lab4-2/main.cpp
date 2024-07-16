#include <iostream>
#include "Input.h"

using namespace std;

int main() {
    int a, b;

    if (Input(a, b) == false) {
        cerr << "Неверный ввод!" << endl;
        return 1;
    }

    int s = a + b;
    cout << "Сумма: " << s << endl;

    return 0;
}