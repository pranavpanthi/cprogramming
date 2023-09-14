#include <stdio.h>

	float addition(float, float);
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

