// 03v.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	/*3.Да се изведат числата от 1 до 100 по следният начин:

А) 1,2,3,4,5,6,7………100;

Б)100,99,98,97,96,…..1;

В)* 1,100,2,99,3,98…..49,52,50,51;*/
	int j = 100;
	for (int i = 1; i <= 100; i++)
	{
		printf("\n%d", i);
		printf("\n%d", j);
		j--;
	}
}
