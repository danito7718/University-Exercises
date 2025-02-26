#include <stdio.h>
#define INT_MIN -2147483648
int main()
{
	/*Да се създаде конзолно приложение, с което се намира
	стойността и позицията на максималния елемент в едномерен масив
	от 10 целочислени елемента.*/
	int array[10];
	int maxIndex;
	int max = INT_MIN;
	for (int i = 0; i < 10; i++)
	{
		printf("Array Number %d: ", i + 1);
		scanf_s("%d", &array[i]);
		if (array[i]>max)
		{
			max = array[i];
			maxIndex = i;
		}
	}

	printf("The maximum integer is %d, with index of %d", max, maxIndex);
}