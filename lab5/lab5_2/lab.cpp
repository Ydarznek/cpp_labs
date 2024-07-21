#include "lab.h"
#include <algorithm>

using namespace std;

int* max_vect(int size, const int* a, const int* b) {
    int* result = new int[size];

    for (int i = 0; i < size; ++i) {
        result[i] = max(a[i], b[i]);
    }

    return result;
}
