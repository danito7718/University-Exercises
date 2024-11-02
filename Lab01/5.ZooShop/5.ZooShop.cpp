// 5.ZooShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

//Задача 5 Зоомагазин
//Напишете програма, която пресмята нужните разходи за закупуването на храна за кучета и
//котки.Храната се пазарува от зоомагазин, като една опаковка храна за кучета е на цена 2.50
//лв, а опаковка храна за котки струва 4 лв



int main()
{
	int dogsCount;
	int catsCount;
	double catFoodPrice = 4.0;
	double dogFoodPrice = 2.5;
	printf("NumberOfDogs:");
	scanf_s("%d", &dogsCount);
	
	printf("NumberOfCats:");
	scanf_s("%d", &catsCount);

	double wholeSum = catFoodPrice * catsCount + dogsCount*dogFoodPrice;
	printf("WholeSum is: %.2lf", wholeSum);
	
	
}

