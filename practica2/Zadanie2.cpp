#include "stdafx.h"
#include "stdio.h"
#include <Windows.h>
#include <time.h>


int main()
{
	int randomnumber, usernumber, usernumber1 = 100, usernumber2 = 1;

	srand(time(NULL));

	randomnumber = 1 + rand() % 100;

	printf("Guess number (0 - 100): ");
	scanf_s("%d", &usernumber);

	if (usernumber < 1 || usernumber > 100){
		rewind(stdin);
		printf("Your number is out of range, enter it again: ");
		scanf_s("%d", &usernumber);
	}

	while (usernumber != randomnumber) {

		if (usernumber < 1 || usernumber > 100) {
			rewind(stdin);
			printf("Your number is out of range, enter it again: ");
			scanf_s("%d", &usernumber);
		}

		if (usernumber > randomnumber) {
			usernumber1 = usernumber;
			rewind(stdin);
			printf("Less (%d - %d): ", usernumber2, usernumber1);
			scanf_s("%d", &usernumber);
		} 
		else {
			usernumber2 = usernumber;
			rewind(stdin);
			printf("More (%d - %d): ", usernumber2, usernumber1);
			scanf_s("%d", &usernumber);
		}
		
	}

	printf("You're winner!!! Number = %d", randomnumber);

	
	getchar();
	getchar();


	return 0;
}