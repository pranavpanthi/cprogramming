#include <stdio.h>

int main(void) {
    int a = 10;
    int *pc, **p ;
    pc = &a;
    p = &pc;
    printf("The value of a is : %d\n", a);
    printf("The value is %d\n", *pc);
    printf("The value is : %d\n",**p);
    return 0;
}