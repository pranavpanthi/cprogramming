#include <stdio.h>

#define row 3
#define column 3

int main(void) {
    int arr[row][column];
    int i,j;
    for ( i = 0; i < row; i++){
        for ( j = 0; j < column; j++)
        {
            printf("arr[%d[%d] =",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%d\t",arr[i][j]);
            if (j==2)
            {
                printf("\n");
            }
            
        }
        
    }
    
    return 0;
    
}