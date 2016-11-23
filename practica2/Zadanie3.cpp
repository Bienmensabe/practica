#include <stdio.h>
#include <Windows.h>
#include <time.h>


int main()
{
	int height;
	const int maxheigth = 100;

	printf("Input height of triangle: ");
	scanf_s("%d", &height);

	while (height < 0 || height > maxheigth)
	{
		rewind(stdin);
		printf("Your heigth is out of range, enter it again: ");
		scanf_s("%d", &height);
	}

	for (int line = 1; line <= height; line++)
	{

		for (int space = 0; space <= height - line; space++)
			printf(" ");

		for (int j = 1; j <= 2 * line - 1; j++)
			printf("*");

		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}