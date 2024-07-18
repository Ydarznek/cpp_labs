#include <iostream>
#include "lab.h"

using namespace std;

int main(int argc, char* argv[]) {
    int result = Lab::processArguments(argc, argv);
    if (result != -1) {
        cout << "Результат: " << result << endl;
    }
    return 0;
}