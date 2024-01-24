#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pc,**p, c;
    c = 5;
    pc = &c;
    p = &pc;
    printf("The value is : %d\n", *pc);
    printf("The value is : %d\n", **p);
    int v[3] = {10,100,200};
    int *ptr;
    ptr = &v[0];
    for (int i = 0; i < 3; i++)
    {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);
        ptr++;
    }
    int a,*pp, sum = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &a);
    pp = (int*) malloc(a* sizeof(int));
    //if memory cannot be allocated
    if (pp == NULL)
    {
        printf("Error! memory not allocated");
        exit(0);
    }
    printf("Enter elements : ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", pp + 1);
        sum += *(pp + 1);
    }
    printf("Sum = %d", sum);
    //deallocating the memory
    free(pp);
    return 0;
    
    
    for (int i = 0; i < a; i++)
    {
        /* code */
    }
    
}