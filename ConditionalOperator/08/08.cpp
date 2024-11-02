
#include <stdio.h>

int main()
{
	int number;
	scanf_s("%d", &number);

	if (number <= 10 && number >= -10)
	{
		if (number > 0)
		{
			printf("The number is positive!");
		}
		else if (number == 0)
		{
			printf("The number is 0");
		}
		else 
		{
			printf("The number is negative!");
		}
	}
	else 
	{
		printf("The number is out of range!");
	}
}
