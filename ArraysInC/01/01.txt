

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int array[20];
	for (int i = 0; i < 20; i++)
	{
		array[i] = rand();
	} */
	int index = 0;
	float array[50];
	for (int i = 0; i < 50; i++)
	{
		array[i] = rand();
		printf("array[%d]=%.f \n", i,array[i]);
	}

}

