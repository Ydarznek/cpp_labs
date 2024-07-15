#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidSNILS(const string& snils) {
    if (snils.length() != 11) {
        return false;
    }

    for (char c : snils) {
        if (!isdigit(c)) {
            return false;
        }
    }

    for (int i = 0; i < 9 - 2; ++i) {
        if (snils[i] == snils[i + 1] && snils[i + 1] == snils[i + 2]) {
            return false;
        }
    }

    int sum = 0;

    for (int i = 0; i < 9; ++i) {
        sum += (snils[i] - '0') * (9 - i);
    }

    int controlNumber = 0;

    if (sum < 100) {
        controlNumber = sum;
    } else if (sum == 100 || sum == 101) {
        controlNumber = 0;
    } else {
        int remainder = sum % 101;

        if (remainder < 100) {
            controlNumber = remainder;
        } else if (remainder == 100) {
            controlNumber = 0;
        }
    }

    int actualControlNumber = stoi(snils.substr(9, 2));

    return controlNumber == actualControlNumber;
}

int main() {
    string snils;

    cout << "Введите номер СНИЛС: ";
    cin >> snils;

    if (isValidSNILS(snils)) {
        cout << "Номер СНИЛС валиден.\n";
    } else {
        cout << "Номер СНИЛС невалиден.\n";
    }

    return 0;
}
