#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, char> studentGrades;

    auto addGrade = [&studentGrades](const string& name, char grade) {
        studentGrades[name] = grade;
    };

    auto displayGrades = [&studentGrades]() {
        for (const auto& pair : studentGrades) {
            cout << "Студент: " << pair.first << ", Оценка: " << pair.second << endl;
        }
    };

    auto findGrade = [&studentGrades](const string& name) {
        auto it = studentGrades.find(name);
        if (it != studentGrades.end()) {
            cout << "Студент: " << it->first << ", Оценка: " << it->second << endl;
        } else {
            cout << "Студент " << name << " не найден." << endl;
        }
    };

    string name;
    char grade;

    while (true) {
        cout << "Введите имя студента (или 'exit' чтобы выйти): ";
        getline(cin, name);

        if (name == "exit") {
            break;
        }

        cout << "Введите оценку " << name << ": ";
        cin >> grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        addGrade(name, grade);
    }

    cout << "\nВсе оценки:" << endl;
    displayGrades();

    cout << "\nПоиск по имени. Введит имя студента: ";
    getline(cin, name);
    findGrade(name);

    return 0;
}
