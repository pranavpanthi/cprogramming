#include <stdio.h>

int main(void){
	float marks;
	printf("The percentage of the grade is ");
	scanf("%f", &marks);
	if( marks >= 90 && marks < 100){
		printf("The grade is A");
	}
	else if( marks >= 80 && marks < 90){
		printf("The grade is A-");
	}
	else if( marks >= 70 && marks < 80){
		printf("The grade is B");
	}
	else if( marks >= 60 && marks < 70){
		printf("The grade is B-");
	}
	else if( marks >= 50 && marks < 60){
		printf("The grade is C");
	}
	else{
		printf("The grade is Fail");
	}
}
