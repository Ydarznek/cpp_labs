#ifndef FINAL_TEACHER_H
#define FINAL_TEACHER_H

#include <string>
#include <memory>

#include "Person.h"

using namespace std;

class University;

class Teacher : public Person {
    string name;
    string phone;
    string subject;
    shared_ptr<University> university;
public:
    Teacher(const string& name, const string& phone, const string& subject, shared_ptr<University> university);

    std::string getInfo() const override;
};

#endif //FINAL_TEACHER_H
