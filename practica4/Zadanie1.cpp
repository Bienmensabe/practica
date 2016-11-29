#include <string.h>
#include <stdio.h>
#define N 50
#define STR_LEN 80

int main()
{
	int count;
	char str[N][STR_LEN];
	char *p[N];
	char *s;

	printf("Enter the strings:\n");
	for (count = 0; count < N; count++)
	{
		gets_s(str[count]);
		p[count] = str[count];

		if (!*str[count])
			break;
	}

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - i - 1; j++)
		{
			if (strlen(p[j]) > strlen(p[j + 1]))
			{
				s = p[j];
				p[j] = p[j + 1];
				p[j + 1] = s;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%s\n", p[i]);
	}

	getchar();
	return 0;
}