

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cycleSize = 10;
	float arrayA[10];

	for (int i = 0; i < cycleSize; i++)
	{
		printf("Enter arrayA[%d] value: ", i);
		scanf_s("%f", &arrayA[i]);
	}

	for (int j = 0; j < cycleSize; j++)
	{
		printf("%.1f, ", arrayA[j]);
	}
	printf("\n");

	for (int l = 0; l < cycleSize; l++)
	{
		arrayA[l] = arrayA[l] / 2.0f;
		printf("%.1f, ", arrayA[l]);
	}


}

