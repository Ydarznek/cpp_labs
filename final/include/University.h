#ifndef FINAL_UNIVERSITY_H
#define FINAL_UNIVERSITY_H

#include <string>

using namespace std;

class University {
    string name;
public:
    University(const string& name);

    string getName() const;
};

#endif //FINAL_UNIVERSITY_H
