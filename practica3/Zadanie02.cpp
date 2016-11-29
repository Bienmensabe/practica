#include <stdio.h>
#define SIZE_STR 40


int main()
{
	char str[SIZE_STR] = "";
	int words = 0; //amount of words
	int letters = 0; //amount of letters

	printf("Input the string: ");
	scanf_s("%[^\n]s", str, SIZE_STR);

	for (int count = 0; *(str + count); count++)
	{
		if (*(str + count) != ' ')
		{
			printf("%c", *(str + count));
			letters++;

			if ((*(str + count + 1) == ' ') || (*(str + count + 1) == '\0'))
			{
				printf("   amount of letters: %d\n", letters);
				words++;
				letters = 0;
			}
		}
	}

	printf("Amount of words: %d", words);

	getchar();
	getchar();
	return 0;
}
