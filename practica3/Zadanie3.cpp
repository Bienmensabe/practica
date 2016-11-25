#include <stdio.h>
#define SIZE_STR 40


int main()
{
	char str[SIZE_STR] = "";
	int letters = 0; //amount of letters
	int max = 0;
	int index = 0;

	printf("Input the string: ");
	scanf_s("%[^\n]s", str, SIZE_STR);

	for (int count = 0; *(str + count); count++)
	{
		if (*(str + count) != ' ')
		{
			letters++;

			if ((*(str + count + 1) == ' ') || (*(str + count + 1) == '\0'))
			{
				if (max <= letters)
				{
					max = letters;
					index = count - max + 1;
				}

				letters = 0;
			}
		}
	}
	printf("The longest word: ");

	for (int i = 0; i < index; i++) {
		printf("%c", str[index + i]);
	}

	printf("\nAmount of letters: %d", max);

	getchar();
	getchar();
	return 0;
}