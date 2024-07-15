#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double cubicRootPow(double a) {
    return pow(a, 1.0 / 3.0);
}

double cubicRootIterative(double a) {
    const double epsilon = 1e-6;
    double x = a;

    while (true) {
        double next = (2.0 * x + a / (x * x)) / 3.0;
        if (fabs(next - x) < epsilon) {
            break;
        }
        x = next;
    }

    return x;
}

int main() {
    double number;
    cout << "Введите число для вычисления кубического корня: ";
    cin >> number;

    double resultPow = cubicRootPow(number);
    double resultIterative = cubicRootIterative(number);

    cout << fixed << setprecision(6);
    cout << "Кубический корень (используя pow): " << resultPow << endl;
    cout << "Кубический корень (используя итерационную формулу): " << resultIterative << endl;

    return 0;
}
