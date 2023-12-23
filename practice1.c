#include <stdio.h>


int main() {
    int  a = 20;
    int b = 30;
    printf("before swapping value a= %d, b=%d \n",a,b);
    int temp;
    temp = a;
    a=b;
    b = temp;
    printf("After swapping value a = %d, b = %d \n",a,b);
}


