// x_y_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <stdio.h>
#include <math.h>

/* Задача: Променливата у зависи от променливата х, зависимостта е следната:*/

int main()
{
	double x, y;
	printf("x:");
	scanf_s("%lf", &x);
	
	if (x >= 1)
	{
		y = log10(x) + 1.82;
	}
	else if (x < 1)
	{
		y = pow(x, 2) + 7 * x + 8.82;
	}
	printf("%.2f", y);
}
