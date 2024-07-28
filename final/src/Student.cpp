#include "../include/Student.h"
#include "../include/University.h"

using namespace std;

Student::Student(const string& name, const string& phone, const string& group, shared_ptr<University> university)
        : name(name), phone(phone), group(group), university(university) {}

string Student::getInfo() const {
    return "Студент: " + name + ", Телефон: " + phone + ", Группа: " + group + ", ВУЗ: " + university->getName();
}
