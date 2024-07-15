#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

double calculateArea(Point vertices[], int n) {
    double area = 0.0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += vertices[i].x * vertices[j].y;
        area -= vertices[i].y * vertices[j].x;
    }
    area = fabs(area) / 2.0;
    return area;
}

int main() {
    const int n = 5;
    Point vertices[n];

    cout << "Введите координаты вершин пятиугольника:\n";
    for (int i = 0; i < n; i++) {
        cout << "Вершина " << i + 1 << ": ";
        cin >> vertices[i].x >> vertices[i].y;
    }

    double area = calculateArea(vertices, n);
    cout << "Площадь пятиугольника: " << area << endl;

    return 0;
}

// 0,0
// 2,0
// 3,1
// 1,3
// -1,1