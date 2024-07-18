#include "Lab.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void Lab::writePoemToFile(const string& filename) {
    ofstream outFile(filename);

    if (!outFile) {
        cout << "Невозможно открыть файл для записи" << endl;
        return;
    }

    cout << "Введите стихотворение (введите пустую строку для завершения):" << endl;

    string line;
    while (true) {
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        outFile << line << endl;
    }

    outFile.close();
    cout << "Стихотворение записано в файл: " << filename << endl;
}
