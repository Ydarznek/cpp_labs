#include "lab.h"
#include <iostream>

using namespace std;

int* createArray(int size) {
    return new int[size];
}

void inputArray(int* array, int size) {
    cout << "Введите " << size << " значения(ий) для заполнения массива:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Введите значение для элемента " << i + 1 << ": ";
        cin >> array[i];
    }
}

void printArray(const int* array, int size) {
    cout << "Вы ввели следующие значения:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Элемент " << i + 1 << ": " << array[i] << "\n";
    }
}