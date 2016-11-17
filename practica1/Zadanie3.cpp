#include "stdafx.h"
#include "stdio.h"

int main()
{
	float val, val1;
	char base;

	printf("Input value in degrees/radians(45.00D/45.00R): ");
	scanf_s("%f%c", &val, &base);

	while (base != 'D' && base != 'R') {

		rewind(stdin);
		printf("Wrong format, input value in degrees/radians(45.00D/45.00R) again: ");
		scanf_s("%f%c", &val, &base);
	}

	while (val < 0) {

		rewind(stdin);
		printf("Wrong format, input value in degrees/radians(45.00D/45.00R) again: ");
		scanf_s("%f%c", &val, &base);
	}

	if (base == 'D') {

		val1 = (val * 3.14) / 180;
		printf("%5.2f%c  = %5.2fR", val, base, val1);

	}
	else {
		val1 = (val * 180) / 3.14;
		printf("%5.2f%c  = %5.2fR", val, base, val1);
	}

	getchar();
	getchar();
	

	return 0;
}