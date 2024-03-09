#include <stdio.h>

void changeValue(int, int);

void changeValueWithPointer(int*, int*);

void printValue(int, int);

int main(void) {
    int a = 10, b = 20;
    printValue(a, b);
    // changeValue(a, b); // call by value
    // printValue(a, b);

    changeValueWithPointer(&a, &b); // call by reference or call by pointer
    printValue(a, b);
    return 0;
}

void printValue(int a, int b) { // creates a copy of variable a and b
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
}

void changeValue(int a, int b) {
    a += 2;
    b += 2;
}

void changeValueWithPointer(int *a, int *b) { // makes changes in actual values stored in the addresses a and b
    *a += 2;
    *b += 2;
}