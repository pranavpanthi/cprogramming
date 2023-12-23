#include <stdio.h>

int swap(int  a, int b);

int main() {
    int  a = 20;
    int b = 30;
    printf("before swapping value a= %d, b=%d \n",a,b);
    swap(a,b);
}

int swap(int a, int b) {
    int temp;
    a = b;
    b = temp;
    printf("After swap value a = %d, b = %d \n",a,b);
}