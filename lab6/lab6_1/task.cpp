#include <iostream>
#include <cstdlib>
#include <fstream>
#include "task.h"

using namespace std;

void task::readAndWrite() {
    double sum = 0;
    const int n = 100;

    double nums[n];

    for (int i = 0; i < n; i++) {
        nums[i] = (rand() % 100);
    }

    ofstream out("test", ios::out | ios::binary);

    if (!out) {
        cout << "Невозможно открыть файл для записи\n";
        return;
    }

    out.write(reinterpret_cast<char*>(nums), sizeof(nums));
    out.close();

    ifstream in("test", ios::in | ios::binary);

    if (!in) {
        cout << "Невозможно открыть файл для чтения\n";
        return;
    }

    in.read(reinterpret_cast<char*>(nums), sizeof(nums));
    in.close();

    int k = sizeof(nums) / sizeof(double);

    for (int i = 0; i < k; i++) {
        sum += nums[i];
        cout << nums[i] << " ";
    }

    cout << "\nsum = " << sum << endl;
}