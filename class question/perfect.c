#include <stdio.h>

int isPerfect(int x);

int main () {
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    isPerfect(a);    
}

int isPerfect(int x) {
    int b = 0;
    for (int i=1;i<x;i++) 
    {
        if(x%i==0) 
        {
            b=b+i;
        }
    }
    if (x==b) 
    {
        printf("It is perfect");
    }
    else 
    {
        printf("It is imperfect");
    }
        
}