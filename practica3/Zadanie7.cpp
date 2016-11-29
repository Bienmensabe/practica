#include <stdio.h>
#define STR_LEN 120
#define SYMBOLS 127

int main() {
	char str[STR_LEN] = "";
	int count[SYMBOLS] = { 0 };
	int maxCount = 1, iMaxCount = 0;

	printf("Input string: ");
	scanf_s("%[^\n]s", str, STR_LEN);

	for (int i = 0; str[i] != '\0'; ++i) {
		count[str[i]]++;
	}

	while (maxCount > 0) {
		maxCount = 0;
		for (int i = 0; i < SYMBOLS; ++i) {
			if (count[i] > maxCount) {
				maxCount = count[i];
				iMaxCount = i;
			}
		}

		if (maxCount > 0)
			printf("%c | %d \n", iMaxCount, maxCount);

		count[iMaxCount] = 0;
	}

	getchar();
	getchar();
	return 0;
}