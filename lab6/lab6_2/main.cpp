#include <iostream>
#include "Lab.h"

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 2};
    int b[] = {7, 6, 5, 4, 3, 2, 1, 3};

    int kc = sizeof(a) / sizeof(a[0]);
    int* c;

    c = Lab::max_vect(kc, a, b);

    Lab::writeArraysToFile(c, kc, "arrays.txt");

    delete[] c;

    return 0;
}
