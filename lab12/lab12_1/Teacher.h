#ifndef LAB12_1_TEACHER_H
#define LAB12_1_TEACHER_H

#include "Human.h"
using namespace std;

class Teacher : public Human {
public:
    Teacher(string last_name, string name, string second_name, unsigned int work_time)
            : Human(last_name, name, second_name), work_time(work_time) {}

    unsigned int get_work_time() const {
        return work_time;
    }

    string get_info() const override {
        std::ostringstream info;

        info << "Преподаватель: " << get_full_name() << ", Рабочее время: " << get_work_time() << " час(ов)";
        return info.str();
    }

private:
    unsigned int work_time;
};

#endif //LAB12_1_TEACHER_H
