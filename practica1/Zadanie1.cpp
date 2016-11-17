#include "stdafx.h"
#include "stdio.h"

int main()
{

	char sex;
	float weight, heigth, imt;

	printf("Enter your sex(m/f): ");
	scanf_s("%c", &sex);

	while (sex != 'm' && sex != 'f')
	{
		rewind(stdin);
		printf("Your sex is invalid, enter your sex(m/f) again: ");
		scanf_s("%c", &sex);
	}

	printf("Enter your weight(kg): ");
	scanf_s("%f", &weight);

	while ((weight <= 0) || (weight >= 300))
	{
		rewind(stdin);
		printf("Your weight is invalid, enter your weight(kg) again: ");
		scanf_s("%f", &weight);
	}

	printf("Enter your heigth(m): ");
	scanf_s("%f", &heigth);

	while ((heigth) <= 0 || (heigth >= 3))
	{
		rewind(stdin);
		printf("Your heigth is invalid, enter your heigth(m) again: ");
		scanf_s("%f", &heigth);
	}

	imt = weight / (heigth * heigth);


	if (sex == 'm')
	{
		if (imt < 20)
		{
			printf("You need to gain weight");
		}
		else if (imt < 25)
		{
			printf("Your weight is OK!");
		}
		else if (imt < 30)
		{
			printf("You need to lose some weight");
		}
		else
		{
			printf("You need to lose much more weight");
		}

	}
	else
	{
		if (imt < 19)
		{
			printf("You need to gain weight");
		}
		else if (imt < 24)
		{
			printf("Your weight is OK!");
		}
		else if (imt < 30)
		{
			printf("You need to lose some weight");
		}
		else
		{
			printf("You need to lose much more weight");
		}

	}

	getchar();
	getchar();
	return 0;
}