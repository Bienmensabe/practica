#include <stdio.h>
#include <stdafx.h>

int main() {
	int feet, inches;
	double santm;

	printf("Input height (feet, inches): ");
	scanf_s("%d%*c%d", &feet, &inches);

	while (feet > 8 || inches > 11) {
		rewind(stdin);
		printf("WRONG!, input height (feet, inches) again: ");
		scanf_s("%d%*c%d", &feet, &inches);
	}

	santm = (feet * 12 + inches) * 2.54;

	printf("%d'%d'' = %4.1fsm", feet, inches, santm);

	getchar();
	getchar();

	return 0;
}