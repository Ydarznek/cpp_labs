#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(double side) {
    return (sqrt(3) / 4) * side * side;
}

bool isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double calculateArea(double a, double b, double c) {
    if (!isValidTriangle(a, b, c)) {
        std::cerr << "Треугольник с такими сторонами не может существовать.\n";
        return -1;
    }

    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int choice;
    cout << "Выберите тип треугольника (1 - равносторонний, 2 - разносторонний): ";
    cin >> choice;

    if (choice == 1) {
        double side;
        cout << "Введите сторону равностороннего треугольника: ";
        cin >> side;
        double area = calculateArea(side);
        cout << "Площадь равностороннего треугольника: " << area << endl;
    } else if (choice == 2) {
        double a, b, c;
        cout << "Введите стороны разностороннего треугольника (a, b, c): ";
        cin >> a >> b >> c;
        double area = calculateArea(a, b, c);
        if (area != -1) {
            cout << "Площадь разностороннего треугольника: " << area << endl;
        }
    } else {
        cout << "Неверный выбор. Пожалуйста, запустите программу снова." << endl;
    }

    return 0;
}

// 3,4,5
