#include <stdio.h>
#define LENSTR 40


int main()
{
	char str[LENSTR] = "";
	int top = 0, temp, temp1;

	printf("Input the string: ");
	fgets(str, LENSTR, stdin);

	for (int i = 0; i < LENSTR; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			temp = str[i];
			str[i] = str[top];
			str[top] = temp;

			top++;
		}
	}

	printf("%s", str);

	getchar();

	return 0;
}