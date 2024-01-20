#include<stdio.h>

int sumOfArrays(int[]);

int main(void) {
    int numbers[5];
    // to do: take 5 integers from user
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("Total sum = %d\n", sumOfArrays(numbers));
    return 0;
}

int sumOfArrays(int nums[]) {
    // should return the sum of integers in the array nums
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum =sum+nums[i];
    }
    return sum;
}