#include "Time.h"

int main() {
    const Time t1(10, 59, 59);
    const Time t2(1, 10, 70);
    Time t3;

    t3 = t1.add(t2);

    t1.display();
    t2.display();
    t3.display();

    return 0;
}
