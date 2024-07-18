#include <iostream>
#include "Lab.h"
#include "task.h"

using namespace std;

int main() {
//    task t;
//    t.readAndWrite();

    Lab lab;
    string filename = "poem.txt";

    lab.writePoemToFile(filename);

    return 0;
}