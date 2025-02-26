// 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
//2.Да се изведат всички цели числа от 5 до 100, които се делят на 5.
int main()
{
	for (int i = 5; i <= 100; i+=5)
	{
		if (i % 5 == 0)
		{
			printf("\n %d", i);
		}

	}

}
