#include <stdio.h>
// link section

#define PI 3.14
//defination section
void area(int r);

int main() {
	int radius;
	printf("Enter radius of circle : ");
	scanf ("%d", &radius);
	area(radius);
}
// main() function section

void area(int r) {
	float result;
	result = PI*r*r;
	printf("Area of circle : %f", result);
}
