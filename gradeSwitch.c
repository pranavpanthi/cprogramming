#include <stdio.h>

int main(void){
	float a,b,c,d,e,sum,per;
	int x;
	printf("Enter marks of 5 subjects : ");
	scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
	sum = a + b + c + d + e;
	printf("Total Marks = %f \n",sum);
	per = (sum/500) * 100;
	x = per;
	printf("The percentage of the grade is %d \n",x);
	switch(x/5){
		case 20:
		case 19:
		case 18:
		case 17:
		case 16:
			printf("The grade is A \n");
			break;
		case 15:
			printf("The grade is A- \n");
			break;
		case 14:
			printf("The grade is B+\n");
			break;
		case 13:
			printf("The grade is B\n");
			break;
		case 12:
			printf("The grade is B-\n");
			break;
		case 11:
			printf("The grade is C+\n");
			break;
		case 10:
			printf("The grade is C\n");
			break;
		case 9:
			printf("The grade is C-\n");
			break;
		case 8:
			printf("The grade is D\n");
			break;
		default:
			printf("Fail\n");
		}
}
