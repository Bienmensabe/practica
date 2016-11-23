#include <Windows.h>

int main()
{
	int time = 0;
	float heigth;
	float len;
	float heigthtime; // heigthtime = heigth(time)
	const float	g = 9.81; // g - gravitational constant
	const float maxheigth = 118000; // maxheigth - max heigth of Earth

	printf("The bomb dropped! Input  heigth: ");
	scanf_s("%f", &heigth);

	while ((heigth < 0) || (heigth > maxheigth))
	{
		rewind(stdin);
		printf("Your heigth is invalid, enter it again: ");
		scanf_s("%f", &heigth);
	}

	heigthtime = heigth;

	while (heigthtime > 0)
	{
		len = (g * time * time) / 2;
		heigthtime = heigth - len;

		if (heigthtime < 0)
			heigthtime = 0;

		printf("t = %dc     h = %.1fm \n", time, heigthtime);
		Sleep(1000);
		time++;
	}

	printf("BABAH!BABAH!BABAH!");

	getchar();
	getchar();
	getchar();

	return 0;
}