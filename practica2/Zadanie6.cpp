#include <stdio.h>
#include <locale.h>
#include <string.h>
#define SIZE_OF_STR 80

int main() {
	int a;
	char str[SIZE_OF_STR] = "", temp;

	printf("Input string: ");
	fgets(str, SIZE_OF_STR, stdin);

	int j = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			if (j == 0 || str[i + 1] == ' ')
				continue;
		}
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;

		a = strlen(str);

		for (a; a > 0; a--) {
			if (str[a - 1] == ' ')
			{
				str[a - 1] = '\0';
			}
			else
				break;
		}
		j++;
	}

	printf("Result:%s", str);

	getchar();
	getchar();
	getchar();

	return 0;
}