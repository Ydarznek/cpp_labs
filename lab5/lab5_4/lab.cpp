#include "lab.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int processArguments(int argc, char* argv[]) {
    if (argc < 4) {
        cerr << "Ошибка: недостаточно аргументов." << endl;
        return -1;
    }

    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0) {
        cerr << "Ошибка: неверный формат. Используйте -a для сложения или -m для умножения." << endl;
        return -1;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    if (strncmp(argv[1], "-a", 2) == 0) {
        return sum(num1, num2);
    } else {
        return multiply(num1, num2);
    }
}

int sum(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
