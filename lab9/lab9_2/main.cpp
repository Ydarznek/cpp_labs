#include <iostream>
#include "Time.h"

using namespace std;

int main() {
    try {
        int h, m, s;
        cout << "Введите часы, минуты и секунды: ";
        cin >> h >> m >> s;

        Time t1(h, m, s);
        t1.display();

        Time t2(2, 30, 45);
        Time t3 = t1.add(t2);
        t3.display();
    } catch (const invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}