#include <stdio.h>

int main (void) {
    int i, j, rows = 5;
    for ( i = 1; i <=rows; ++i)
    {
        for ( j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}