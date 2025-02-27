
#include <stdio.h>

int main()
{
	int side1;
	int side2;
	int side3;

	printf("Enter a side1:");
	scanf_s("%d", &side1);
	printf("\n");
	printf("Enter a side2:");
	scanf_s("%d", &side2);
	printf("\n");
	printf("Enter a side3:");
	scanf_s("%d", &side3);
	printf("\n");
    if (side1 == side2 == side3)
	{
		printf("The triangle is equilateral");
	}
	else if (side1 == side2 || side2 == side3 || side3 == side1)
	{
		printf("The triangle is isosceles");
	}
	else
	{
		printf("The Triangle is Versatile");
	}
}
