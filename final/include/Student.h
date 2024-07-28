#ifndef FINAL_STUDENT_H
#define FINAL_STUDENT_H

#include <string>
#include <memory>

#include "Person.h"

using namespace std;

class University;

class Student : public Person {
    string name;
    string phone;
    string group;

    shared_ptr<University> university;
public:
    Student(const string& name, const string& phone, const string& group, shared_ptr<University> university);

    string getInfo() const override;
};

#endif //FINAL_STUDENT_H
