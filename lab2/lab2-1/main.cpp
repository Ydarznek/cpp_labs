#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int findPrimePosition(int num) {
    int count = 0;
    int candidate = 2;
    while (true) {
        if (isPrime(candidate)) {
            count++;
            if (candidate == num) {
                return count;
            }
        }
        candidate++;
    }
}

bool isSuperPrime(int num) {
    if (!isPrime(num)) {
        return false;
    }
    int position = findPrimePosition(num);
    return isPrime(position);
}

int main() {
    int number;
    cout << "Введите число для проверки: ";
    cin >> number;

    if (isSuperPrime(number)) {
        cout << number << " является суперпростым числом.\n";
    } else {
        cout << number << " не является суперпростым числом.\n";
    }

    return 0;
}
