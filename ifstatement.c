#include<stdio.h>

int main(void){
	int a;
	printf("The value of a is ");
	scanf("%d", &a);
	if(a>10){
		if(a>15){
			printf("a is greater than 15");
		}else {
			printf("a is greater than 10 and less than 15");
		}
		}
	else{
		if(a == 10){
			printf("a is equals to 10");
		}
		else{
			printf("a is less to 10");
		}
	}
}
