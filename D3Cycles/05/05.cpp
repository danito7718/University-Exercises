
#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	int a;
	printf("Enter number a: ");
	scanf_s("%d", &a);
	int b;
	printf("Enter number b: ");
	scanf_s("%d", &b);

	int result = gcd(a, b);
	printf("The GCD of %d and %d is %d\n", a, b, result);

}

