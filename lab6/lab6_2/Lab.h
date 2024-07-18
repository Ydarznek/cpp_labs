#ifndef LAB6_2_LAB_H
#define LAB6_2_LAB_H

#include <fstream>

class Lab {
public:
    static int* max_vect(int size, const int* a, const int* b);
    static void writeArraysToFile(const int* original, int size, const char* filename);

private:
    static void sortArray(int* array, int size);
    static void writeArrayToFile(std::ofstream& outFile, const int* array, int size);
};


#endif //LAB6_2_LAB_H
