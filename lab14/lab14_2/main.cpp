#include <iostream>
#include <vector>
#include <list>
#include <set>
#include "Print.h"

int main() {
    vector<int> intData = {1, 2, 3, 4, 5};
    list<string> strData = {"раз", "два", "три"};
    set<double> dblData = {1.1, 2.2, 3.3};

    Print(intData, ", ");
    Print(strData, " - ");
    Print(dblData, " | ");

    return 0;
}
