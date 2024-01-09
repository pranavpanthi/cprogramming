#include <stdio.h>

#define row 5
#define column 2
int main(void) {
    int arr[row][column] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
    int i,j;
    for ( i = 0; i < row; i++){
        for ( j = 0; j < column; j++)
        {
            printf("arr[%d[%d] = %d\n",i,j,arr[i][j]);
        }
    }
    return 0;
    
}