#ifndef FINAL_ADDRESSBOOK_H
#define FINAL_ADDRESSBOOK_H

#include <vector>
#include <memory>

#include "Person.h"

using namespace std;

class AddressBook {
   vector<shared_ptr<Person>> people;
public:
    void addPerson(shared_ptr<Person> person);
    void saveToFile(const string& filename) const;
    void loadFromFile(const string& filename);
    void print() const;
};

#endif //FINAL_ADDRESSBOOK_H
