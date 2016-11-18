#include "stdafx.h"
#include "stdio.h"
#include <Windows.h>
#include <time.h>
#define n 9

int main()
{
	int q;
	char  str[n], a;

	srand(time(NULL));
	
		for (int i = 0, k = n - 1; k < i, i < k; i++, k--)
		{
			q = rand() % 2;
			switch (q)
			{
			case 0:
				str[i] = rand() % 26 + 'A';
				break;

			case 1:
				str[i] = rand() % 26 + 'a';
				break;
				
			}

			str[k-1] = rand() % 10 + '0';

			str[n - 1] = '\0';
		}
		printf("%s\n", str);



	getchar();
	return 0;
}