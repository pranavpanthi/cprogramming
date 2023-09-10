#include<stdio.h>

// define all functions
float add(float, float);

// syntax:
// return_type function_name(parameter 1, parameter 2, .....)
// here, no need to define variable for parameter, just define the data type only
// this is one way of doing in C
// all functions need to be defined before the main function
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main(void) {
    printf("add(10, 20) = %f", add(10, 20));
    return 0;
}

// complete the body of all functions
float add(float a, float b) {
    return a + b;
}

// complete rest functions

// todo: check if second parameter is 0 while dividing, if second parameter is 0, then you need to print error message and stop the execution