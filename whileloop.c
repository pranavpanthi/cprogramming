#include <stdio.h>

int main() {
	int i,f,n;
	i = 1;
	f = 1;
	printf("Please input a number \n");
	scanf("%d", &n);
	while(i<= n) {
		f*= i;
		i++;
	}
	printf("factorial %d! =%d\n",n,f);
}
