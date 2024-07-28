#ifndef LAB14_2_PRINT_H
#define LAB14_2_PRINT_H

#include <iostream>
#include <string>

using namespace std;

template <typename Container>
void Print(const Container& container, const string& delimiter) {
    bool first = true;
    for (const auto& element : container) {
        if (!first) {
            cout << delimiter;
        }
        cout << element;
        first = false;
    }
    cout << '\n';
}


#endif //LAB14_2_PRINT_H
