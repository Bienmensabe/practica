#include <stdio.h>
#include <string.h>
#define STR_LEN 80

int main() {
	char str[STR_LEN] = "";
	char *p[STR_LEN];
	char seps[] = " .,\t\n\/";
	int i = 0;

	printf("Input string: ");
	scanf_s("%[^\n]s", str, STR_LEN);

	p[i] = strtok(str, seps);

	while (p[i] != NULL)
	{
		i++;
		p[i] = strtok(NULL, seps);
	}

	for (; --i >= 0;)
		printf("%s ", p[i]);

	getchar(); getchar();
	return 0;
}
