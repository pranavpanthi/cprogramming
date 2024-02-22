#include<stdio.h>

int main(void) {
    int nums[10];
    printf("Enter 10 positive integers: \n");
    for (int i = 0; i < 10; ++i) {
        printf("The integer [%d] is : ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("Even array = ");
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] % 2 == 0)
        {
            printf("%d \t", nums[i]);
        }
    }
    printf("\n Odd array = ");
    for (int i = 0; i < 10; i++)
    
        if (nums[i] % 2 == 1)
        {
            printf("%d \t", nums[i]);
        }
    }
    
    // write the logic to store the even numbers and odd numbers in two separate arrays and print them
    // for example:
    // if nums = 1,2,3,4,5,6,7,8,9,10
    // then we have to print:
    // even array = 2, 4, 6, 8, 10
    // odd array = 1, 3, 5, 7, 9

    // write your solution below:

    return 0;
}