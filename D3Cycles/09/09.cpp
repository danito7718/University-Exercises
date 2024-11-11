#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf_s("%d", &a);
	printf("Enter the value of b: ");
	scanf_s("%d", &b);

	for (int i = a; i <= b; i++) {
		if (i % 10 == 3)
		{
			printf("%d\n", i);
		}
	}
}