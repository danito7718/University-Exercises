﻿#include <stdio.h>
main()
{
	/*
	10.Да се напише програма, която отпечатва всички нечетни числа от 1 до 17.
	*/
	for (int i = 1; i <= 17; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d", i);
		}
	}
}