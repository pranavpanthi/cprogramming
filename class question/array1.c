#include <stdio.h>

int main(void) {
    int arr[50], i, n,large, small;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\n Input the array elements : ");
    for ( i = 0; i < n; ++i)
    {
        printf("\n element [%d]:",i);
        scanf("%d", &arr[i]);
    }
    large = small = arr[0];
    for(i=1; i<n;++i){
        if (arr[i]>large)
        {
            large = arr[i];
        }
        else if (arr[i]<small)
        {
            small = arr[i];
        }
    }
    printf("\n The smallest element is %d \n", small);
    printf("\n The largest element is %d \n", large);
    printf("\n");
    return 0;
}
