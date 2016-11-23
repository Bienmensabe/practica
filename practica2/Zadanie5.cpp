#include <stdio.h>
#include <Windows.h>
#include <time.h>
#define SIZE_OF_STR 9 // size of password
#define COUNT_PASS 10 // amount of passwords

int pass()
{
	int randswitch;
	int	i;
	int	counta, countA, count0;
	int	iter = 0; // iterations counter
	char  str[SIZE_OF_STR];

	while (true) {

		counta = 0;
		countA = 0;
		count0 = 0;
		i = 0;

		for (; i < SIZE_OF_STR - 1; i++)
		{
			randswitch = rand() % 3;

			switch (randswitch)
			{
			case 0:
				str[i] = rand() % 26 + 'A';
				countA++;
				break;

			case 1:
				str[i] = rand() % 26 + 'a';
				counta++;
				break;

			case 2:
				str[i] = rand() % 10 + '0';
				count0++;
				break;
			}
			str[SIZE_OF_STR - 1] = '\0';
		}
		iter++;
		if ((countA != 0) && (counta != 0) && (count0 != 0))
		{
			printf("%s\namount of iterations: %d\n\n", str, iter);
			break;
		}

	}
}

int main()
{
	srand(time(NULL));

	for (int j = 1; j <= COUNT_PASS; j++)
	{
		printf("%d. ", j);
		pass();
	}

	getchar();

	return 0;
}