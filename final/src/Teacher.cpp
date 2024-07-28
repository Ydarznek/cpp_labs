#include "../include/Teacher.h"
#include "../include/University.h"

using namespace std;

Teacher::Teacher(const string& name, const string& phone, const string& subject, shared_ptr<University> university)
        : name(name), phone(phone), subject(subject), university(university) {}

string Teacher::getInfo() const {
    return "Преподаватель: " + name + ", Телефон: " + phone + ", Предмет: " + subject + ", ВУЗ: " + university->getName();
}
