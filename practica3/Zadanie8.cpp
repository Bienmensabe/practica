#include <stdio.h>
#include <stdlib.h>
#define SIZE_STR 40

int main()
{
	char str[SIZE_STR] = "";
	int words = 0; //amount of words
	int letters = 0; //amount of letters
	int c = 0; //last symbol of string
	int chislo = 0;

	printf("Input a string: ");
	scanf_s("%[^\n]s", str, SIZE_STR);

	for (c = 0; str[c] != '\0'; c++);

	while (!(str[c - 1] >= '0' && str[c - 1] <= '9'))
	{
		printf("Input a string again: ");
		rewind(stdin);
		scanf_s("%[^\n]s", str, SIZE_STR);
		for (c = 0; str[c] != '\0'; c++);
	}

	while (str[--c] != ' ')
		chislo = atoi(&str[c]);

	for (int count = 0; *(str + count); count++)
	{
		if (*(str + count) != ' ')
		{
			letters++;
			if ((*(str + count + 1) == ' ') || (*(str + count + 1) == '\0'))
			{
				words++;
				if (words == chislo)
				{
					for (; letters > 0; letters--)
						printf("%c", *(str + count + 1 - letters));
				}
				letters = 0;
			}
		}
	}

	if (chislo > words)
		printf("Your number (%d) is bigger than amount of words (%d)", chislo, words);

	getchar();
	getchar();
	return 0;
}