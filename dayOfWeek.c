#include <stdio.h>

int main (void) {
	int dayOfWeek;
	printf("Enter the day of the week (1-7) : ");
	scanf("%d", &dayOfWeek);
	switch (dayOfWeek) {
		case 1:
			printf("%d day of the week is Sunday.");
			break;
		case 2:
			printf("%d day of the week is Monday.");
			break;
		case 3:
			printf("%d day of the week is Tuesday.");
			break;
		case 4:
			printf("%d day of the week is Wednesday.");
			break;
		case 5:
			printf("%d day of the week is Thursday.");
			break;
		case 6:
			printf("%d day of the week is Friday.");
			break;
		case 7:
			printf("%d day of the week is Saturday.");
			break;
		default:
			printf("Incorrect input!");
			break;		
	}
	return 0;
}

