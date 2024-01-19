#include <stdio.h>

void function2();

void function1() {
    printf("function 1\n");
}

int main(void) {
    function1();
    function2();
    return 0;
}

void function2() {
    printf("function 2\n");
    function1();
}