#include<iostream>

#include "task1.h"
#include "lab.h"

using namespace std;

int main()
{
//    task1();
//    task2();
//    task3();
//    task4();
//    task5();

    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* array = createArray(size);

    inputArray(array, size);
    printArray(array, size);

    delete[] array;
    return 0;
}
