
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float floatMax = INT_MIN;
	float floatMin = INT_MAX;
	float array[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Array[%d]: ", i);
		scanf_s("%f", &array[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (*(array + i) > floatMax)
		{
			floatMax = *(array + i);
		}
		else if (*(array + i) < floatMin)
		{
			floatMin = *(array + i);
		}
	}
	printf("The elements of array are: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2f, ", *(array + i));
	}
	printf("\n");
	printf("The biggest element is %.2f\n", floatMax);
	printf("The smallest element is %.2f", floatMin);

}

