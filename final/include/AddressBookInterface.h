#ifndef FINAL_ADDRESSBOOKINTERFACE_H
#define FINAL_ADDRESSBOOKINTERFACE_H

#include "AddressBook.h"

using namespace std;

class University;

class AddressBookInterface {
    AddressBook addressBook;
public:
    void run();
private:
    void handleChoice(int choice);
    bool isValidName(const string& name) const;
    bool isValidPhone(const string& phone) const;
    shared_ptr<University> getUniversity();
    bool getPersonDetails(string& name, string& phone, string& info, const string& infoPrompt);
};

#endif //FINAL_ADDRESSBOOKINTERFACE_H
