#include <Windows.h>
#include <time.h>
#define SIZE_OF_STR 10

int main()
{
	int str[SIZE_OF_STR];
	int sum = 0;
	int num = 0;
	int indmin = 0, indplus = 0;

	srand(time(NULL));

	for (int count = 0; count < SIZE_OF_STR; count++)
	{
		str[count] = rand() % 11 - 5;
		printf("%d ", str[count]);

		if ((str[count] < 0) && num == 0)
		{
			indmin = count;
			num = 1;
		}
		else if (*(str + count) >= 0)
			indplus = count;
	}

	printf("\n");

	for (; indmin <= indplus; indmin++)
		sum += str[indmin];

	printf("Sum between the first negative and the last positive number: %d", sum);

	getchar();
	getchar();
	return 0;
}