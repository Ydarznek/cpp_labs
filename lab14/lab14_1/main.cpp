#include "ArrayProcessor.h"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    long longArray[] = {1000000000L, 2000000000L, 3000000000L, 4000000000L, 5000000000L};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'A', 'B', 'C', 'D', 'E'};

    cout << "Среднее значение intArray: " << ArrayProcessor<int>::calculate_average(intArray, 5) << endl;
    cout << "Среднее значение longArray: " << ArrayProcessor<long>::calculate_average(longArray, 5) << endl;
    cout << "Среднее значение doubleArray: " << ArrayProcessor<double>::calculate_average(doubleArray, 5) << endl;
    cout << "Среднее значение charArray: " << ArrayProcessor<char>::calculate_average(charArray, 5) << endl;

    return 0;
}