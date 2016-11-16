#include "stdafx.h"
#include "stdio.h"

int main()
{ 
	char a, b;
	int h, m, s;

	printf("Input time(hh:mm:ss): ");
	scanf_s("%d%*c%d%*c%d", &h, &m, &s);

	while (s < 0 || s > 60) {
		
		rewind(stdin);
		printf("Wrong format, input time(hh:mm:ss) again: ");
		scanf_s("%d%*c%d%*c%d", &h, &m, &s);
	}

	while (m < 0 || m > 60) {

		rewind(stdin);
		printf("Wrong format, input time(hh:mm:ss) again: ");
		scanf_s("%d%*c%d%*c%d", &h, &m, &s);
	}

	while (h < 0 || h > 24) {

		rewind(stdin);
		printf("Wrong format, input time(hh:mm:ss) again: ");
		scanf_s("%d%*c%d%*c%d", &h, &m, &s);
	}

	if (h >= 4 && h < 12) {
		printf("Good morning!");
	}
	else {
		if (h >= 12 && h < 18) {
			printf("Good afternoon!");
		}
		else {
				printf("Good evening!");
		}
	}

	getchar();
	getchar();
	getchar();


	return 0;
}