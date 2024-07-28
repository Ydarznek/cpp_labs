#include <iostream>
#include <cctype>
#include <algorithm>

#include "../include/AddressBookInterface.h"
#include "../include/Student.h"
#include "../include/Teacher.h"
#include "../include/University.h"

using namespace std;

void AddressBookInterface::run() {
    int choice;
    while (true) {
        cout << "1. Добавить студента\n";
        cout << "2. Добавить преподавателя\n";
        cout << "3. Сохранить в файл\n";
        cout << "4. Загрузить из файла\n";
        cout << "5. Показать все записи\n";
        cout << "6. Выход" << endl;

        cin >> choice;

        if (choice == 6) break;

        handleChoice(choice);
    }
}

bool AddressBookInterface::isValidName(const string& name) const {
    return name.length() >= 2;
}

bool AddressBookInterface::isValidPhone(const string& phone) const {
    return phone.length() >= 6 && all_of(phone.begin(), phone.end(), [](char c){ return isdigit(c); });
}

shared_ptr<University> AddressBookInterface::getUniversity() {
    string uni_name;

    cout << "Название ВУЗа: ";
    cin >> uni_name;

    return make_shared<University>(uni_name);
}

bool AddressBookInterface::getPersonDetails(string& name, string& phone, string& info, const string& infoPrompt) {
    cout << "Имя: ";
    cin >> name;

    if (!isValidName(name)) {
        cout << "Невалидное имя. Минимальная длина 2 символа" << endl;
        return false;
    }

    cout << "Телефон: ";
    cin >> phone;

    if (!isValidPhone(phone)) {
        cout << "Невалидный номер. Минимальная длина 6 символов, только цифры" << endl;
        return false;
    }

    cout << infoPrompt << ": ";
    cin >> info;

    return true;
}

void AddressBookInterface::handleChoice(int choice) {
    string name, phone, info, uni_name;

    shared_ptr<University> university = make_shared<University>("Неизвестно");

    switch (choice) {
        case 1:
            if (getPersonDetails(name, phone, info, "Группа")) {
                university = getUniversity();

                addressBook.addPerson(make_shared<Student>(name, phone, info, university));
            }
            break;
        case 2:
            if (getPersonDetails(name, phone, info, "Предмет")) {
                university = getUniversity();
                addressBook.addPerson(make_shared<Teacher>(name, phone, info, university));
            }

            break;
        case 3:
            addressBook.saveToFile("addressbook.txt");
            break;
        case 4:
            addressBook.loadFromFile("addressbook.txt");
            break;
        case 5:
            addressBook.print();
            break;
        default:
            cout << "Ошибка" << endl;
            break;
    }
}
