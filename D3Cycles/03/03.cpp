
#include <stdio.h>
#include <math.h>


int main()
{
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

