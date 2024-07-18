#ifndef LAB5_1_LAB_H
#define LAB5_1_LAB_H

class Lab {
public:
    Lab(int size);
    ~Lab();

    void inputArray();
    void printArray() const;

private:
    int size;
    int* array;
};

#endif //LAB5_1_LAB_H
