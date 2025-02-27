// 08.Circus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

/*Задача 8 Цирк
Лили е ученичка в 3 клас има списък с учебници за пазаруване. Цените (реални числа с
двойна точност) на учебниците са по математика, български език, английски език и физика
се въвеждат от клавиатурата. Родителите на Лили и дават сума (въвежда се от клавиатурата)
за покупка. В града пристига цирк и Лили иска да отиде. Напишете програма, с която Лили
да пресметне дали ще и стигнат парите да отиде на цирк и да си купи учебници. Резултата
от изчислението да се закръгля до втория знак.*/

int main()
{
	double bl, el, phy, budget, math, circusTicket;
	printf("Bulgarian Language book price:");
	scanf_s("%lf", &bl);

	printf("English Language book price:");
	scanf_s("%lf", &el);

	printf("Physics book price:");
	scanf_s("%lf", &phy);

	printf("Mathbook price:");
	scanf_s("%lf", &math);

	printf("Circus Ticket price:");
	scanf_s("%lf", &circusTicket);

	printf("Budget:");
	scanf_s("%lf", &budget);
	double wholeSum = bl + phy + math + el + circusTicket;
	if (budget >= wholeSum)
	{
		printf("Lilly can go.She has %.2f lv left", budget - wholeSum);
	}
	else
	{
		printf("Lilly can't go.She needs %.2f lv more", wholeSum - budget);
	}

}

