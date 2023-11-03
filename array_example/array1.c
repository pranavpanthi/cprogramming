#include <stdio.h>

int main(void) {
    int arr[5], i;
    printf("Program to take 5 integers from a user and then print them\n\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("The numbers are: ");
    for (i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    return 0;
}
