#include <stdio.h>

int main() {
	int i,a;
	int b= 0;
	printf("Enter a number: ");
	scanf("%d",&a);
	for (i=1;i<a;i++)
	{
		if (a%i==0)
		{
			b=b+1;
		}
		
	}
	if(b>2) {
				printf("Composite");
			}else{
				printf("Prime");
			}
}
