#include <stdlib.h>
#define SIZE_STR 80

int main()
{
	char str[SIZE_STR] = "";
	int sum = 0;
	int num = 0;

	printf("Input a string: ");
	scanf_s("%[^\n]s", str, SIZE_STR);

	for (int count = 0; *(str + count); count++)
	{
		if (*(str + count) >= '0' &&  *(str + count) <= '9')
		{
			if (num == 0)
			{
				sum += atoi(str + count);
				num = 1;
			}
		}
		else
			num = 0;
	}

	printf("Sum: %d", sum);

	getchar();
	getchar();
	return 0;
}