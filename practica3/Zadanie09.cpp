#include <stdio.h>
#define STR_LEN 80

int main() {
	char str[STR_LEN] = "";
	char ind;
	int max = 0;
	char res;

	printf("Input string: ");
	scanf_s("%[^\n]s", str, STR_LEN);

	for (int i = 0; *(str + i);)
	{
		ind = *(str + i);
		for (int count = 0; ind == *(str + i); i++)
		{
			count++;

			if (count > max) {
				max = count;
				res = ind;
			}
		}
	}

	for (int i = 0; i < max; i++)
		printf("%c", res);

	printf(" %d", max);

	getchar(); getchar();
	return 0;
}