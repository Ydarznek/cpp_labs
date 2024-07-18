#include "Lab.h"
#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int* Lab::max_vect(int size, const int* a, const int* b) {
    int* result = new int[size];
    for (int i = 0; i < size; ++i) {
        result[i] = max(a[i], b[i]);
    }
    return result;
}

void Lab::writeArraysToFile(const int* original, int size, const char* filename) {
    ofstream outFile(filename);

    if (!outFile) {
        cerr << "Невозможно открыть файл для записи" << endl;
        return;
    }

    outFile << "Исходный массив: ";
    writeArrayToFile(outFile, original, size);

    int* sorted = new int[size];
    copy(original, original + size, sorted);
    sort(sorted, sorted + size);

    outFile << "Отсортированный массив: ";
    writeArrayToFile(outFile, sorted, size);

    delete[] sorted;
    outFile.close();
}

void Lab::sortArray(int* array, int size) {
    sort(array, array + size);
}

void Lab::writeArrayToFile(ofstream& outFile, const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        outFile << array[i] << " ";
    }
    outFile << endl;
}
