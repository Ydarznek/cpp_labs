#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidSNILS(const string& snils) {
    string cleanedSnils;
    for (char c : snils) {
        if (c == ' ' || c == '-') {
            continue;
        } else if (!isdigit(c)) {
            return false;
        }
        cleanedSnils += c;
    }

    if (cleanedSnils.length() != 11) {
        return false;
    }

    for (int i = 0; i < 9 - 2; ++i) {
        if (cleanedSnils[i] == cleanedSnils[i + 1] && cleanedSnils[i + 1] == cleanedSnils[i + 2]) {
            return false;
        }
    }

    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (cleanedSnils[i] - '0') * (9 - i);
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

    int actualControlNumber = stoi(cleanedSnils.substr(9, 2));

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
