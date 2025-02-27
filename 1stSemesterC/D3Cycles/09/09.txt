#include <stdio.h>

int main()
{
	/*
	9.Да се напише програма, която отпечатва всички числа завършващи на 3 в интервала
	[a, b]. a и b са цели числа, по-големи от нула и a<b.
	*/
	int a, b;
	printf("Enter the value of a: ");
	scanf_s("%d", &a);
	printf("Enter the value of b: ");
	scanf_s("%d", &b);

	for (int i = a; i <= b; i++) 
	{
		if (i % 10 == 3)
		{
			printf("%d\n", i);
		}
	}
}