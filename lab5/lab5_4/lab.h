#ifndef LAB5_4_LAB_H
#define LAB5_4_LAB_H

#include <cstring>

class Lab {
    public:
        static int processArguments(int argc, char* argv[]);
    private:
        static int sum(int a, int b);
        static int multiply(int a, int b);
};


#endif //LAB5_4_LAB_H
