#include <iostream>
#include <vector>
#include <algorithm>
#include "Point.h"

using namespace std;

int main() {
    vector<Point> v;
    int n;

    cout << "Введите количество точек: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        double x, y;
        cout << "Введите координаты точки " << i + 1 << " (x y): ";
        cin >> x >> y;
        v.push_back(Point(x, y));
    }

    sort(v.begin(), v.end());

    cout << "Отсортированные точки:\n";
    for (const auto& point : v)
        cout << point << '\n';

    return 0;
}