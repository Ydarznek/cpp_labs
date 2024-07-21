#ifndef LAB6_2_LAB_H
#define LAB6_2_LAB_H

#include <fstream>

using namespace std;

int* max_vect(int size, const int* a, const int* b);
void writeArraysToFile(const int* original, int size, const char* filename);
void writeArrayToFile(ofstream& outFile, const int* array, int size);

#endif //LAB6_2_LAB_H
