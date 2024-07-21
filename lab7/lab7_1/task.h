#ifndef LAB7_1_TASK_H
#define LAB7_1_TASK_H

#include <iostream>

using namespace std;

struct Distance {
    int feet;
    double inches;

    void ShowDist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }
};

void task1();
void task2();
void task3();
void task4();
void task5();

#endif
