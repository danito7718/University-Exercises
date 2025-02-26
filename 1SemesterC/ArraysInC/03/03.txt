

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sum = 0;
	float arrayA[50];
	for (int i = 0; i < 50; i++)
	{
		scanf_s("%f", &arrayA[i]);
		if ((int)arrayA[i] % 2 != 0)
		{
			sum *= arrayA[i];
		}
	}
	printf("The product of all uneven numbers is: %.f", sum);

}

