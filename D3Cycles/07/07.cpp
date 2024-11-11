#include <stdio.h>

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 10 == 7) 
		{
			printf("%d ", i);
		}
	}
}