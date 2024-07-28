#ifndef LAB12_1_HUMAN_H
#define LAB12_1_HUMAN_H

#include <string>
#include <sstream>

using namespace std;

class Human {
public:
    Human(string last_name, string name, string second_name)
            : last_name(last_name), name(name), second_name(second_name) {}

    virtual ~Human() {}

    virtual string get_full_name() const {
        ostringstream full_name;

        full_name << last_name << " " << name << " " << second_name;
        return full_name.str();
    }

    virtual string get_info() const = 0;

protected:
    string name;
    string last_name;
    string second_name;
};

#endif //LAB12_1_HUMAN_H
