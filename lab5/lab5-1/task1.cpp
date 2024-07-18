#include<iostream>

using namespace std;

void task1() {
    const int n = 4;
    int mas[n];
    int s = 0;
    int negativeSum = 0;
    int positiveSum = 0;

    int oddSum = 0;
    int evenSum = 0;

    int maxElement = std::numeric_limits<int>::min();
    int minElement = std::numeric_limits<int>::max();

    int maxIndex = -1;
    int minIndex = -1;

    for (int i=0; i<n; i++) {
        cout << "mas[" << i << "]" << "=";
        cin >> mas[i];

        s += mas[i];

        if (mas[i] > 0) {
            positiveSum += mas[i];
        } else {
            negativeSum += mas[i];
        }

        if (i%2 > 0) {
            oddSum += mas[i];
        } else {
            evenSum += mas[i];
        }

        if (mas[i] > maxElement) {
            maxElement = mas[i];
            maxIndex = i;
        }

        if (mas[i] < minElement) {
            minElement = mas[i];
            minIndex = i;
        }
    }

    cout << "sum = " << s << endl;
    cout << "positiveSum = " << positiveSum << endl;
    cout << "negativeSum = " << negativeSum << endl;
    cout << "oddSum = " << oddSum << endl;
    cout << "evenSum = " << evenSum << endl;

    cout << "Max Element = " << maxElement << " at index " << maxIndex << endl;
    cout << "Min Element = " << minElement << " at index " << minIndex << endl;

    int res = 1;

    if (abs(maxIndex - minIndex) == 1) {
        res = 0;
    } else if (maxIndex > minIndex) {
        for (int i = minIndex + 1; i < maxIndex; i++) {
            res *= mas[i];
        }
    } else if (minIndex > maxIndex) {
        for (int i = maxIndex + 1; i < minIndex; i++) {
            res *= mas[i];
        }
    } else {
        res = 0;
    }

    cout << "mult result between max and min elements = " << res << endl;
}

void task2() {
    const int n = 10;

    int arr[n] = {1, 25, 6, 32, 43, 5, 96, 23, 4, 55};

    int min = 0;
    int buf = 0;

    for (int i = 0; i < n; i++) {
        min = i;

        for (int j = i + 1; j < n; j++) {
            min = (arr[j] < arr[min]) ? j : min;
        }

        if (i != min) {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }

    cout << "sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool from_min(const int a, const int b)
{
    return a>b;
}
bool from_max(const int a,const int b)
{
    return a<b;
}

void bubble_sort(int Arr[],const int N, bool (*compare)(int a,int b))
{
    for (int i=1;i<N;i++)
    {
        for (int j=0;j<N-1;j++)
        {
            if ((*compare)(Arr[j],Arr[j+1])) swap(Arr[j],Arr[j+1]);
        }
    }
}

void show_array(const int Arr[],const int N)
{
    for (int i = 0; i < N; i++)
        cout << Arr[i] <<" ";
    cout << "\n";
}


void task3() {
    const int n = 10;

    int dir = 0;

    int arr[n] = {9,8,7,6,1,2,3,5,4,9};

    cout << "1 - по возрастанию\n";
    cout << "2 - по убыванию\n";

    cin >> dir;

    cout << "исходные данные: ";

    show_array(arr, n);

    switch (dir)
    {
        case 1: bubble_sort(arr,n,from_min); break;
        case 2: bubble_sort(arr,n,from_max); break;
        default: cout<<"\rНеизвестная операция ";
    }


    cout << "финальные данные: ";
    show_array(arr, n);
}

void task4() {
    int size = 0;
    cout << "Введите длину массива: ";

    cin >> size;

    int* myArray = new int[size];

    cout << "Введите " << size << " значения(ий) для заполнения массива:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Введите значение для элемента " << i + 1 << ": ";
        cin >> myArray[i];
    }

    cout << "Вы ввели следующие значения:\n";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    delete[] myArray;
}

void task5() {
    srand(time(NULL));

    int a, b, c;
    int k = 0;

    const int n = 10;
    int mas[n];

    for(int i=0; i<n; i++) {
        cin >> c;
        mas[i] = c;
    }

    cout << "\nAll: ";
    for (int i=0; i<n; i++)
    {
        cout << mas[i] << " ";
    }

    cout << endl;
}