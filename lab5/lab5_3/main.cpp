#include <iostream>
#include "lab.h"

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    printArray(arr, size);

    int key = 5;
    int index = searchAndTranspose(arr, size, key);

    if (index != -1) {
        cout << "Элемент " << key << " найден на позиции " << index << std::endl;
        cout << "Массив после транспозиции: ";
        printArray(arr, size);
    } else {
        cout << "Элемент " << key << " не найден" << endl;
    }

    return 0;
}
