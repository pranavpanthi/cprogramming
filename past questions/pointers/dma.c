/*
    1. ask a user to enter the value of n
    2. create an integer array of size n
    3. Take n integers from the user
    4. Print the largest and smallest integer
*/

#include <stdio.h>
#include <stdlib.h>

int getSmallest(int *, int); // 1st parameter = address of 1st element of array
int getLargest(int *, int); // 2nd parameter = length of array
void printArray(int *, int);

int main() {
    int n;
    int *data;
    printf("Input the number of element : ");
    scanf("%d", &n);

    // create array of n elements
    // printf("Size of n = %d\n", sizeof(n));
    data = (int *)calloc(2, sizeof(int));
    // printf("Size of data = %d", sizeof(data));
    // 
    for (int  i = 0; i < n; i++)
    {
        printf("\n element[%d]", i + 1);
        scanf("%d", data + i);
    }
    printArray(data, n);

    printf("Smallest value = %d \n", getSmallest(data, n));
    printf("Largest value = %d", getLargest(data, n));
    return 0;
}

int getSmallest(int *data, int n) {
    int small = *data;
    for (int i = 1; i < n; i++)
    {
        if (small > *(data + i))
        {
            small = *(data + i);
        }
        
    }
    return small;
}

int getLargest(int *data, int n){
    int large = *data;
    for (int i = 1; i < n; i++)
    {
        if (large < *(data + i))
        {
            large = *(data + i);
        }
        
    }
    return large;
}

void printArray(int *data, int n) {
    printf("Array = [");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", *(data + i));
    }
    printf("]\n");
}