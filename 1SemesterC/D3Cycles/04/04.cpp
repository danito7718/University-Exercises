
#include <stdio.h>
#include <math.h>


int main()
{
	/*
	4. Число в диапазона [1 … 56]
    Да се въведе цяло число в диапазона [1 … 56]. 
	Ако въведеното число е невалидно, да се въведе отново.
	В случая, за невалидно число ще считаме всяко такова, 
	което не е в зададения диапазон.

	*/
	int n;
	while (true)
	{
		
		printf("Please enter a number between 1 and 56: ");
		scanf_s("%d", &n);
		if (n > 56 || n < 1)
		{
			printf("The number is invalid, please enter a number between 1 and 56: ");
			scanf_s("%d", &n);
		}
		else if (n <=56 && n >=1)
		{
			break;
		}
	}

}

