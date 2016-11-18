#include "stdafx.h"
#include <stdio.h>
#define n 256
int main()
{
	char str[] = "", a;
	int mass[n] = { 0 };
	int tmp = 32; // 0 - 31: control characters

	printf("Input string: ");
	fgets(str, n, stdin);

	for (int i = 0; str[i] != '\0'; i++){
		char temp = str[i];
		mass[temp]++;

	}

	for (tmp = 32; tmp < n; tmp++) {
		a = tmp;
		if (mass[tmp] != 0)
		printf("%c | %d \n", a, mass[tmp]);
	}
	

	getchar();
	getchar();
	return 0;
}