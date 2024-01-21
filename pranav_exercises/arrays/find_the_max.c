#include<stdio.h>

// global variable
int num_arr[5];

void getInput();

int findMax(int[]);

int main(void) {
    
    getInput();

    printf("Largest number is: %d\n", findMax(num_arr));

    return 0;
}

/*
    This function should get 5 integers from the user and store them in the global variable "num_arr"
*/
void getInput() {
    // complete this function

}

/*
    This function should return the greatest element from the array "nums"
*/
int findMax(int nums[]) {
    // complete the function and return the desired result
    return -1;
}