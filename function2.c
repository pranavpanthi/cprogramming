#include <stdio.h>

int prime(int x); // function protyping

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    prime(a);
}

int prime(int x) {
    int c=0;
    for (int i=2;i<=x;i++) {
        if(x%i==0) {
            c=c+1;
        }
    }
    if(c==1) {
        printf("Prime");
    }
    else{
        printf("composite");
    }
}