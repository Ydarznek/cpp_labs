#ifndef LAB14_1_ARRAYPROCESSOR_H
#define LAB14_1_ARRAYPROCESSOR_H

#include <numeric>
#include <iostream>
#include <type_traits>

using namespace std;

template <typename T>
class ArrayProcessor {
public:
    static double calculate_average(T* array, int size);
};

template <>
class ArrayProcessor<char> {
public:
    static double calculate_average(char* array, int size);
};

template <typename T>
double ArrayProcessor<T>::calculate_average(T* array, int size) {
    if (size == 0) return 0;
    double sum = accumulate(array, array + size, static_cast<double>(0));
    return sum / size;
}

double ArrayProcessor<char>::calculate_average(char* array, int size) {
    if (size == 0) return 0;
    double sum = accumulate(array, array + size, static_cast<int>(0));
    return sum / size;
}

#endif //LAB14_1_ARRAYPROCESSOR_H
