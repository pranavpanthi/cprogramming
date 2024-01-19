#include <stdio.h>

int main (void) {
	int number1;
	int number2;
	int sum;
	printf("Enter first number : ");
	scanf("%d", &number1);
	printf("Enter Second number : ");
	scanf("%d", &number2);
	sum = number1 + number2;
	printf("The sum of first and second number is : %d\n\n", sum);
	return 0;
}
