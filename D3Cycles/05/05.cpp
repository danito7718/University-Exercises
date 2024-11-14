
#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
	/*
	5.Най-голям общ делител (НОД)
    Да се въведат цели числа a и b и да се намери НОД(a, b).
    Определение за НОД: най-голям общ делител на две естествени 
	числа a и b е най-голямото число, което дели едновременно и a, и b без остатък.

	*/
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

