#include <stdio.h>

#define row 2
#define column 2

int sum(int x[row][column], int y[row][column], int z[row][column]);

int main() 
{
    int x[row][column], y[row][column], z[row][column];
    printf("Enter the number of elements for the first matrix : ");
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j< column; j++)
        {
            printf("%d %d : ", i + 1, j + 1);
            scanf("%d", &x[i][j]);
        }
    }
    printf("Enter the number of elements for the second matrix : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d %d : ", i + 1, j + 1);
            scanf("%d", &y[i][j]);
        }
    }

    z[row][column]=sum(x,y,z);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" %d\t",z[i][j]);
        }
        printf("\n");
    }
}

int sum(int x[row][column], int y[row][column], int z[row][column]) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
        
    }
   return z[row][column]; 
}