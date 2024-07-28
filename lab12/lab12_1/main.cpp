#include <iostream>
#include <vector>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    vector<Human*> humans;

    vector<int> scores1 = {5, 3, 4, 4, 5, 3, 3, 3, 3};
    vector<int> scores2 = {4, 4, 4, 4, 4, 4, 4, 4, 4};

    humans.push_back(new Student("Иванов", "Иван", "Иванович", scores1));
    humans.push_back(new Student("Петров", "Петр", "Петрович", scores2));

    humans.push_back(new Teacher("Сергеев", "Сергей", "Сергеевич", 40));
    humans.push_back(new Teacher("Сидоров", "Алексей", "Алексеевич", 35));

    for (const auto& human : humans) {
        cout << human->get_info() << endl;
    }

    for (auto& human : humans) {
        delete human;
    }

    return 0;
}
