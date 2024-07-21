#include "lab.h"
#include <algorithm>
#include <iostream>

using namespace std;

int searchAndTranspose(int* array, int size, int key) {
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

void printArray(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
