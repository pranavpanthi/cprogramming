/*
    write a program to swap two numbers using call by reference
*/

#include <stdio.h>

void swap(int *, int *);

int main(){
    int a,b;
    printf("Enter value of a & b : ");
    scanf("%d %d", &a, &b);
    printf("The value of a and b before swap is : %d %d \n", a, b);
    swap(&a, &b);
    printf("The value of a and b after swap is : %d %d ", a, b);
    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x; 
    *x = *y;
    *y = temp;
}