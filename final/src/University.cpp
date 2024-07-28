#include "../include/University.h"

using namespace std;

University::University(const string& name) : name(name) {}

string University::getName() const {
    return name;
}
