

#include "stdafx.h"


int main()
{
	int time = 0;
	float heigth, len;
constant: float	g = 9.81, maxheigth = 118000; // g - gravitational constant

	printf("The bomb dropped! Input  heigth: ");
	scanf_s("%f", &heigth);

	while (heigth < 0 || heigth > maxheigth)
	{
		rewind(stdin);
		printf("Your heigth is invalid, enter it again: ");
		scanf_s("%f", &heigth);
	}

	while (heigth > 0) {
		len = (g * time * time) / 2;
		heigth = heigth - len;

		if (heigth < 0)
			heigth = 0;

		printf("t = %dc     h = %.1fm \n", time, heigth);
		time++;

	}

	printf("BABAH!BABAH!BABAH!");

	getchar();
	getchar();
	getchar();


	return 0;
}

