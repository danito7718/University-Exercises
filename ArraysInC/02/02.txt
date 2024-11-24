

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sum = 0;
	float arrayA[100];
	for (int i = 0; i < 100; i++)
	{
		scanf_s("%f", &arrayA[i]);
		if ((int)arrayA[i] % 2 == 0)
		{
			sum += arrayA[i];
		}
	}
	printf("The sum of the even numbers is: %.f", sum);

}

