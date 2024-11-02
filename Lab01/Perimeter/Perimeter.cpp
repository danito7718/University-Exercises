
#include <iostream>
#include <stdio.h>
#include <math.h>

//Задача 3 Периметър
//Да се напише програма, която намира периметъра и лицето на правоъгълник със страни 2, 3
//и 3, 7.
//‐ Да се модифицира програмния код и стойностите за страните да се въвеждат от
//потребителя
int main()
{
	printf("Enter side A:");
	double sideA;
	scanf_s("%lf", &sideA);
	printf("Enter side B:");
	double sideB;
	scanf_s("%lf", &sideB);
	
	
	double perimeter = (2 * sideA) + (2 * sideB);
	double area = sideA * sideB;
	printf("Area:%.2lf\n", area);
	printf("Perimeter:%.2lf\n", perimeter);

}
