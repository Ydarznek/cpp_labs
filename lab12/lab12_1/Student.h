#ifndef LAB12_1_STUDENT_H
#define LAB12_1_STUDENT_H

#include "Human.h"
#include <vector>
#include <numeric>

using namespace std;

class Student : public Human {
public:
    Student(string last_name, string name, string second_name, vector<int> scores)
            : Human(last_name, name, second_name), scores(scores) {}

    float get_average_score() const {
        if (scores.empty()) {
            return 0.0f;
        }

        float sum_scores = accumulate(scores.begin(), scores.end(), 0);
        return sum_scores / scores.size();
    }

    string get_info() const override {
        ostringstream info;

        info << "Студент: " << get_full_name() << ", Средний балл: " << get_average_score();
        return info.str();
    }

private:
    std::vector<int> scores;
};

#endif //LAB12_1_STUDENT_H
