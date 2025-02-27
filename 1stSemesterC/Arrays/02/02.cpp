#include <stdio.h>

int main()
{
	/*2.Да се създаде конзолно приложение, с което се намира сумата
	и средно аритметично на елементите на едномерен масив
	от 10 реалничисла с двойна стойност.*/
	float sum = 0;
	printf("Enter 10 integers: \n");
	float myArray[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Number %d: ", i + 1);
		scanf_s("%f", &myArray[i]);
		sum += myArray[i];

	}
	
	printf("The sum of the array is: %.2f and the average is: %.2f", sum, sum / 10);


}