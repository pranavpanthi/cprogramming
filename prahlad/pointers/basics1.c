#include <stdio.h>

int b = 5;

void function1(int,int);


int main(void) {
    int a = 2;
    int c = 10;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    function1(a, c);

    printf("\nAfter function1 call...\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c); 

    return 0;
}

void function1(int a, int c) {
    
    printf("\na = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    b = b + 1;
    a = a + 1;
    c = c + 1;

    printf("\nAfter adding in function1 ...\n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
     
    b *= 2;
}