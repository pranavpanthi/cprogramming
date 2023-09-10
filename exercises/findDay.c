#include <stdio.h>

int main(void) {
    int dayOfWeek;
    printf("Enter the day of week (1-7): ");
    scanf("%d", &dayOfWeek);
    switch (dayOfWeek)
    {
    case 1:
        printf("%d day of week is Sunday.");
        break;
    case 2: // complete the rest
        break;
    default:
        printf("Incorrect input!");
        break;
    }
    return 0;
}