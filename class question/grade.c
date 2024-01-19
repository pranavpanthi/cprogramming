#include <stdio.h>

int main(void){
	float a,b,c,d,e,sum,per;
	printf("Enter marks of 5 subjects : ");
	scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
	sum = a + b + c + d + e;
	printf("Total Marks = %f",sum);
	per = (sum/500) * 100;
	printf("The percentage of the grade is %f",per);
	if( per >= 80 && per < 100){
		printf("The grade is A");
	}
	else if( per >= 75 && per < 80){
		printf("The grade is A-");
	}
	else if( per >= 70 && per < 75){
		printf("The grade is B+");
	}
	else if( per >= 65 && per < 70){
		printf("The grade is B");
	}
	else if( per >= 60 && per < 65){
		printf("The grade is B-");
	}	
	else if( per >= 55 && per < 60){
		printf("The grade is C+");
	}
	else if( per >= 50 && per < 55){
		printf("The grade is C");
	}
	else if( per >= 45 && per < 50){
		printf("The grade is C-");
	}
	else{
		printf("The grade is Fail");
	}
}
