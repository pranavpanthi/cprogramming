#include <stdio.h>

int main (void) {
	int dayOfWeek;
	printf("Enter the day of the week (1-7) : ");
	scanf("%d", &dayOfWeek);
	switch (dayOfWeek) {
		case 1:
			printf("%d day of the week is Sunday.\n", dayOfWeek);
			break;
		case 2:
			printf("%d day of the week is Monday.\n", dayOfWeek);
			break;
		case 3:
			printf("%d day of the week is Tuesday.\n", dayOfWeek);
			break;
		case 4:
			printf("%d day of the week is Wednesday.\n", dayOfWeek);
			break;
		case 5:
			printf("%d day of the week is Thursday.\n", dayOfWeek);
			break;
		case 6:
			printf("%d day of the week is Friday.\n", dayOfWeek);
			break;
		case 7:
			printf("%d day of the week is Saturday.\n", dayOfWeek);
			break;
		default:
			printf("Incorrect input!\n");
			break;		
	}
	return 0;
}

