

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int min = INT_MAX;
	int max = INT_MIN;
	int sum = 0;
	int arrayA[5];
	int count = 0;
	int index;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter the value of the number of ArrayA[%d]:", i);
		scanf_s("%d", &arrayA[i]);

		if (min > arrayA[i])
		{
			min = arrayA[i];
		}
		else if (max < arrayA[i])
		{
			index = i;
			max = arrayA[i];
		}

	}
	printf("The smallest number is %d\n", min);
	printf("The biggest number's index is: ArrayA[%d]", index);


}

