#include <Windows.h>
#include <time.h>
#define SIZE_OF_STR 10

int main()
{
	int str[SIZE_OF_STR];
	int sum = 0;
	int indmin = 0, indmax = 0;

	srand(time(NULL));

	for (int count = 0; count < SIZE_OF_STR; count++)
	{
		str[count] = rand() % 11 - 5;
		printf("%d ", str[count]);

		if (str[count] < str[indmin])
			indmin = count;

		else if ((str[count] > str[indmax]))
			indmax = count;
	}

	printf("\n");

	if (indmin < indmax)
	{
		for (; indmin <= indmax; indmin++)
			sum += str[indmin];
	}
	else
	{
		for (; indmax <= indmin; indmax++)
			sum += str[indmax];
	}

	printf("Sum between the min and the max number: %d", sum);

	getchar();
	getchar();
	return 0;
}