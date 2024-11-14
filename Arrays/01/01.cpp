#include <stdio.h>

int main()
{

	/*1.Да се създаде конзолно приложение, с което се въвеждат
	10 цели числа и се извеждат в прав и обратен ред.*/
	printf("Enter 10 integers: \n");
	int myArray[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Number %d: ", i + 1);
		scanf_s("%d", &myArray[i]);
	}
	printf("Front to backwards: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", myArray[i]);
	}
	printf("\n");
	printf("Backwards to front: ");
	for (int i = 9; i >= 0 ; i--)
	{
		printf("%d, ", myArray[i]);
	}
}