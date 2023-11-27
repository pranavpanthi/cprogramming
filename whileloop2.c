#include <stdio.h>

int main() {
    int i = 2000, n = 100;
    while (i >= n)
    {
    	if (i%10==0 && i%15==0)
    	{
    		printf("%d\n", i);
		}
		i--;
    }
}
