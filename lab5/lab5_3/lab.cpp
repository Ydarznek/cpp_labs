#include "Lab.h"
#include <algorithm>
#include <iostream>

using namespace std;

int Lab::searchAndTranspose(int* array, int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == key) {
            if (i > 0) {
                swap(array[i], array[i - 1]);
            }
            return i;
        }
    }
    return -1;
}

void Lab::printArray(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
