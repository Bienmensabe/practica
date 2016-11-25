#include <stdio.h>
#define SIZE_STR 40


int main()
{
	char str[SIZE_STR] = "";
	int space = 0; //ignor space
	int words = 0; //amount of words

	printf("Input the string: ");
	scanf_s("%[^\n]s", str, SIZE_STR);

	for (int count = 0; *(str + count); count++)
	{
		if ((*(str + count) != ' ') && (space == 0))
		{
			space = 1;
			words++;
		}
		else if (*(str + count) == ' ')
			space = 0;
	}

	printf("%d", words);

	getchar();
	getchar();
	return 0;
}
