

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cycleSize = 100;
	float arrayA[100];
	float k;
	printf("Enter the k value: ");
	
	scanf_s("%f", &k);
	printf("\n");
	

	for (int i = 0; i < cycleSize; i++)
	{
		printf("Enter arrayA[%d] value: ", i);
		scanf_s("%f", &arrayA[i]);
	}
	
	for (int j = 0; j < cycleSize; j++)
	{
		printf("%.f, ", arrayA[j]);
	}
	

	for (int l = 0; l < cycleSize; l++)
	{
		arrayA[l] *= k;
	}
	printf("\n");
	for (int m = 0; m < cycleSize; m++)
	{
		printf("%.f, ", arrayA[m]);
	}
	

}

