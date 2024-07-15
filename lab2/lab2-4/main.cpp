#include <iostream>
#include <cmath>

using namespace std;

int calculateScore(double x, double y) {
    double distance = sqrt(x * x + y * y);

    if (distance <= 1.0) {
        return 10;
    }

    else if (distance <= 2.0) {
        return 5;
    }

    else if (distance <= 3.0) {
        return 1;
    }

    else return 0;
}

string determineLevel(int totalScore) {
    if (totalScore >= 50) {
        return "Снайпер";
    }

    else if (totalScore >= 30) {
        return "Просто стрелок";
    }

    else {
        return "Новичок";
    }
}

int main() {
    const int maxShots = 6;

    int targetScore = 50;
    int totalScore = 0;
    int shots = 0;

    cout << "Введите координаты выстрела (x и y). Максимальное количество выстрелов: " << maxShots << "\n";

    while (shots < maxShots && totalScore < targetScore) {
        double x, y;
        cout << "Введите координаты выстрела " << shots + 1 << ": ";
        cin >> x >> y;

        int score = calculateScore(x, y);
        totalScore += score;
        shots++;

        cout << "Очки за выстрел: " << score << ", Общие очки: " << totalScore << "\n";
    }

    string level = determineLevel(totalScore);
    cout << "Количество выстрелов: " << shots << "\n";
    cout << "Количество очков: " << totalScore << "\n";
    cout << "Ваш уровень стрелка: " << level << "\n";

    return 0;
}
