#include <iostream>
#include <string>
#include <tuple>
#include <vector>

#include "task.h"

using namespace std;

Distance AddDist(Distance d1, Distance d2) {
    Distance d;
    d.feet = d1.feet + d2.inches;

    if (d.inches > 12.0) {
        d.inches -= 12.0;
        d.feet++;
    }

    return d;
}

Distance AddDistance(const Distance &d1, const Distance &d2) {
    Distance d;
    d.feet = d1.feet + d2.inches;

    if (d.inches > 12.0) {
        d.inches -= 12.0;
        d.feet++;
    }

    return d;
}

Distance InputDist() {
    Distance d;

    cout << "\nВведите число футов: ";
    cin >> d.feet;
    cout << "\nВведите число дюймов: ";
    cin >> d.inches;

    return d;
}

using Tuple = tuple<string, int, double>;

void printTupleOfThree(Tuple t)
{
    cout << "("
         << get<0>(t) << ", "
         << get<1>(t) << ", "
         << get<2>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d)
{
    s.append("!");
    return make_tuple(s, a, d*10);
}

void task1() {
    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 };

    Distance d3 = AddDist(d1, d2);
    d1.ShowDist();
    d2.ShowDist();
    d3.ShowDist();
}

void task2() {
    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 };

    Distance d3 = AddDistance(d1, d2);
    d1.ShowDist();
    d2.ShowDist();
    d3.ShowDist();
}

void task3() {
    int n;

    cout << "Введите размер массива расстояний: ";
    cin >> n;

    Distance * masDist = new Distance[n];

    for (int i = 0; i < n; i++) {
        masDist[i] = InputDist();
    }

    for (int i = 0; i < n; i++) {
        masDist[i].ShowDist();
    }

    delete[] masDist;
}

void task4() {
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t0 = make_tuple(v1[3], v2[0], v3[0]);
    printTupleOfThree(t0);
}

void task5() {
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t1 = funtup(v1[1], v2[1], v3[1]);

    printTupleOfThree(t1);
}