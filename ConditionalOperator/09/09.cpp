
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#define PI 3.14
/*9. Да се напише програма която пресмята лицето на определена
фигура според въведения избор на потребителя.*/
int main()
{
	printf("Choose a number of the figure you want your area calculated: \n 1.circumference \n 2.circle \n 3.rectangle \n 4.square \n 5.triangle \n 6.trapezoid \n 7.parallelogram");
	printf("\n");
	printf("Figure number:");
	int number;
	scanf_s("%d", &number);
	float side1;
	float side2;
	float radius;
	float height;
	switch (number)
	{
	case 1:
		printf("Please enter a radius:");
		scanf_s("%f", &radius);
		printf("The area of the circumference is: ");
		printf("%.2f", radius * PI * 2);
		break;
	case 2:
		printf("Please enter a radius: ");
		scanf_s("%f", &radius);
		printf("The area of the circle is: ");
		printf("%.2f", radius * radius * PI);
		break;
	case 3:
		printf("Please enter two sides.");
		printf("\n");
		printf("Please enter the first side:");
		scanf_s("%f", &side1);
		printf("\n");
		printf("Please enter the second side:");
		scanf_s("%f", &side2);
		printf("\n");

		printf("The area of the rectangle is: ");
		printf("%.2f", side1 * side2);
		break;
	case 4:
		printf("Please enter a side: ");
		scanf_s("%f", &side1);
		printf("The area of the square is: ");
		printf("%.2f", side1 * side1);
		break;
	case 5:
		

		printf("Please enter a side and height.");
		printf("\n");
		printf("Please enter the side:");
		scanf_s("%f", &side1);
		printf("Please enter the height:");
		scanf_s("%f", &height);

		printf("The area of the triangle is.");
		printf("%.2f", (side1 * height * side1) / 2);
		break;
	case 6:
		printf("Please enter two sides and a height.");
		printf("\n");
		printf("Please enter the first side:");
		scanf_s("%f", &side1);
		printf("\n");
		printf("Please enter the second side:");
		scanf_s("%f", &side2);
		printf("\n");
		printf("Please enter the height:");
		scanf_s("%f", &height);
		printf("\n");

		printf("The area of the trapezoid is: ");
		printf("%.2f", (side1 + side2) * height * 2);
		break;
	case 7:

		printf("Please enter a side and a height.");
		printf("\n");
		printf("Please enter the side:");
		scanf_s("%f", &side1);
		printf("\n");
		printf("Please enter the height:");
		scanf_s("%f", &height);
		printf("\n");

		printf("The area of the parallelogram is: ");
		printf("%.2f", (side1 * (height * side1)));
		break;
	default:
		printf("No such figure!");
		break;
	}
}

