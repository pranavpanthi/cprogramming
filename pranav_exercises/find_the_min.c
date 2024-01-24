#include<stdio.h>

// global variable
int num_arr[5]; // 6 1 4 5 10

void getInput();

int findMin(int[]);

int main(void) {
    
    getInput();

    printf("Lowest number is: %d\n", findMin(num_arr));

    return 0;
}

/*
    This function should get 5 integers from the user and store them in the global variable "num_arr"
*/
void getInput() {
    // complete this function
    printf("Enter five numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num_arr[i]);
    }
    
}

/*
    This function should return the greatest element from the array "nums"
*/
int findMim(int nums[]) {
    // complete the function and return the desired result
    int min = 0;
        for (int i = 0; i < 5; i++)
        {
            if (num_arr[i] < min)
            {
                min = num_arr[i];
            }
            
        }
        
    return min;
}