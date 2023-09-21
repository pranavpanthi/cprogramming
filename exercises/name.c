#include <stdio.h>

int main (void) {
    int i;
    char name[6];
    printf("Enter your name : ");
    for (i = 0; i < 6; i++) {
        scanf("%c", &name[i]);
    }
    printf("%s \n", name);
    printf("%c \n", name[0]);
    return 0;
}