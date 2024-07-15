#include <iostream>
#include <string>

using namespace std;

std::string decimalToBinary(int num) {
    if (num == 0) {
        return "0";
    } else if (num == 1) {
        return "1";
    } else {
        return decimalToBinary(num / 2) + to_string(num % 2);
    }
}

int main() {
    int num;
    cout << "Введите положительное целое число: ";
    cin >> num;

    if (num >= 0) {
        string binary = decimalToBinary(num);
        cout << "Двоичное представление числа " << num << " равно: " << binary << endl;
    } else {
        cout << "Число должно быть положительным." << endl;
    }

    return 0;
}
