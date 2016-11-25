#include <stdio.h>
#define SIZE_STR 40

int main()
{
	char str[SIZE_STR] = "";
	int letters = 0; //amount of letters
	int max = 0; // max amount of letters
	int ind = 0; //index of the longest word

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
					ind = count - max + 1;
				}
				letters = 0;
			}
		}
	}
	printf("The longest word: ");

	for (int i = 0; i < ind; i++) {
		printf("%c", str[ind + i]);
	}

	printf("\nAmount of letters: %d", max);

	getchar();
	getchar();
	return 0;
}
