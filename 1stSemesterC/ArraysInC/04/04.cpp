

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sum = 0;
	float arrayA[100];
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		scanf_s("%f", &arrayA[i]);
		if ((int)arrayA[i] < 0)
		{
			sum += arrayA[i];
			count++;
		}
	}
	printf("The average of all negative numbers is: %.f", sum/count);

}

