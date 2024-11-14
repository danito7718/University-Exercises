
#include <stdio.h>
#include <math.h>


int main()
{
	/*3. Да се напише програма, която отпечатва числата от 1 до 2^n
	(две на степен n). Например, ако n = 10, то резултатът ще е 
	1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024.*/
    int n;
	printf("Please enter a number: ");
	scanf_s("%d", &n);
	int number;
	for (int i = 1; i <= n; i++)
	{
		number = pow(2, i);
		printf("%d, ", number);
	}

}

