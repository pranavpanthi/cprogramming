#include <stdio.h>

int avg(int a[], int n);

int main(void) {
    int a[10], i, n;
    printf("Enter how many elements number you want to store : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter integers number to store in an array a[%d]", i);
        scanf("%d", &a[i]);
    }
    
    printf("The average of a[n] is : %d ",avg(a,n));
}

int avg(int a[], int n) { 
    int i, sum=0;   
    for ( int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    } 
    int avg = sum/n;
    return avg;
}