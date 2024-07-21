#include <iostream>
#include "lab.h"

using namespace std;

int main(int argc, char* argv[]) {
    int result = processArguments(argc, argv);
    if (result != -1) {
        cout << "Результат: " << result << endl;
    }
    return 0;
}