// 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

// 1.Да се изведат всички цели числа от N до 1, всяко на различен ред.
int main()
{
    int n;
    scanf_s("%d", &n);
	for (int i = n; 1 <= i; i--)
	{
		printf("\n %d", i);
	}

}
