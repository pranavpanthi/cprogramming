#include <stdio.h>

// all functions need to be defined before the main function
// syntax : return_type function_name(parameter 1, parameter 2,.....)
float addition(float, float); // function declaration 
float substract(float, float);
float division(float, float);
float multiply(float, float);
	
int main(void) {
	float a;
	float b;
	printf("Enter a number : ");
	scanf("%f", &a);
	printf("Enter second number : ");
	scanf("%f", &b);
	printf("addition = %f \n", addition(a , b));
	printf("substract = %f \n", substract(a , b));
	printf("division = %f   \n", division(a , b));
	printf("multiply = %f    \n", multiply(a , b));
	return 0;
}

// function definition
float addition(float a, float b) {
	return a + b;
}

float substract(float a, float b) {
	return a - b;
}

float division(float a, float b) {
	return a / b;
}

float multiply(float a, float b) {
	return a * b;
}

