#include<stdio.h>

/*
    a program to search for an element and return it's index from an array of integers
    example:
    arr = 1, 2, 3, 5, 10, 12
    element to search = 12
    output: 
        element found at index 5
    
    element to search = 6
    output:
        element not found
*/

int search(int[], int);

int main(void) {
    int arr[10], elementToSearch, i, index;
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }

    index = search(arr, elementToSearch);
    if (index == -1) {
        printf("Element not found!\n");
    } else {
        printf("Element found at index %d\n", index);
    }

    return 0;
}

/*
    this function should return the index of the elementToSearch from the array arr
    if the element is not found it should return -1

    example: arr = 1, 2, 3, 4, 5
             elementToSearch = 5
             return 4

             elementToSearch = 10
             return -1
*/
int search(int arr[], int elementToSearch) {
    // complete this function
    return -1;
}