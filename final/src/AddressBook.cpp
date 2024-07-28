#include <fstream>
#include <iostream>
#include <string>

#include "../include/AddressBook.h"

using namespace std;

void AddressBook::addPerson(shared_ptr<Person> person) {
    people.push_back(person);
}

void AddressBook::saveToFile(const string& filename) const {
    ofstream file(filename, ios::app);

    if (!file.is_open()) {
        cerr << "Не получилось открыть файл: " << filename << endl;
        return;
    }

    for (const auto& person : people) {
        file << person->getInfo() << endl;
    }
}

void AddressBook::loadFromFile(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Не получилось открыть файл: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        cout << "Получено: " << line << endl;
    }
}

void AddressBook::print() const {
    for (const auto& person : people) {
        cout << person->getInfo() << endl;
    }
}
