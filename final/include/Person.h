#ifndef FINAL_PERSON_H
#define FINAL_PERSON_H

#include <string>

using namespace std;

class Person {
public:
    virtual ~Person() {}
    virtual string getInfo() const = 0;
};

#endif //FINAL_PERSON_H
