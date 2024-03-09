#include <stdio.h>

int main(void) {
<<<<<<< HEAD
    int a = 10;
    int *pc, **p ;
    pc = &a;
    p = &pc;
    printf("The value of a is : %d\n", a);
    printf("The value is %d\n", *pc);
    printf("The value is : %d\n",**p);
=======
    int a = 10; // a is an integer variable
    int *a_ptr = &a; // a_ptr is a pointer variable that stores the address of another integer variable
    int **aa_ptr = &a_ptr; // aa_ptr is a pointer variable that stores the address of another integer pointer variable 

    printf("The value of variable a is %d\n", a);
    printf("The value of a_ptr is %p\n", a_ptr);
    printf("The value stored in the address of a_ptr is %d\n", *a_ptr);
    printf("The value of aa_ptr is %p\n", aa_ptr);
    printf("The value store in the address of aa_ptr is %p\n", *aa_ptr);
    printf("The value store in the address of address of aa_ptr is %d\n", **aa_ptr);

>>>>>>> 82e566d22bb51acc2aa242f7c7aa64eff4f541fc
    return 0;
}