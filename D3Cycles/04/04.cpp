
#include <stdio.h>
#include <math.h>


int main()
{
	int n;
	while (true)
	{
		
		printf("Please enter a number between 1 and 56: ");
		scanf_s("%d", &n);
		if (n > 56 || n < 1)
		{
			printf("The number is invalid, please enter a number between 1 and 56: ");
			scanf_s("%d", &n);
		}
		else if (n <=56 && n >=1)
		{
			break;
		}
	}

}

