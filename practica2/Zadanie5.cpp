#include "stdafx.h"
#include "stdio.h"
#include <Windows.h>
#include <time.h>
#define n 9
#define m 11

int main()
{

	int q;
	char  str[n];

	srand(time(NULL));

	
	for (int j = 1; j < m; j++) {
		for (int i = 0; i < n; i++)
		{
			q = rand() % 3;
			switch (q)
			{
			case 0:

				str[i] = rand() % 26 + 'A';
				break;

			case 1:

				str[i] = rand() % 26 + 'a';
				break;

			case 2:

				str[i] = rand() % 10 + '0';
				break;
			}

			str[n - 1] = '\0';	
		}
		printf("%d. %s\n", j, str);
	}

	
	getchar();
	return 0;
}