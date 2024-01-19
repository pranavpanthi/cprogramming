#include <stdio.h>

int main(){
	int b = 0;
	for (int i = 2;i <= 100;i++) 
	{
		for (int j=1;j<=i;j++) 
		{
			if (i%j==0) 
			{
				b=b+1;
			}
		}
	}
	if(b==2)
	{
		printf("%d is Prime \n",);
	}else {
			printf("%d is Composite \n",);
			b=0;
		}
}
