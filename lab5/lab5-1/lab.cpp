#include "Lab.h"
#include <iostream>

Lab::Lab(int size) : size(size), array(new int[size]) {}

Lab::~Lab() {
    delete[] array;
}

void Lab::inputArray() {
    std::cout << "Введите " << size << " значения(ий) для заполнения массива:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Введите значение для элемента " << i + 1 << ": ";
        std::cin >> array[i];
    }
}

void Lab::printArray() const {
    std::cout << "Вы ввели следующие значения:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Элемент " << i + 1 << ": " << array[i] << "\n";
    }
}
