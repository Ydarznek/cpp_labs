#include <iostream>

using namespace std;

int sumSeries(int n) {
    if (n == 1) {
        return 5;
    } else {
        return 5 * n + sumSeries(n - 1);
    }
}

int main() {
    int n;
    cout << "Введите значение n (n > 0): ";
    cin >> n;

    if (n > 0) {
        int sum = sumSeries(n);
        cout << "Сумма ряда S = 5 + 10 + 15 + ... + 5 * " << n << " равна: " << sum << endl;
    } else {
        cout << "Значение n должно быть больше 0." << endl;
    }

    return 0;
}
