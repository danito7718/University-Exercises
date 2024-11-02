

#include <stdio.h>

int main()
{
	/*4.Въведете последователност от N цели числа. Намерете сумата от всички отрицателни числа измежду въведените.*/
	printf("Enter the number of integers: ");
	int integersCount;
	int nqkakvochislo;
	int sum = 0;
	scanf_s("%d", &integersCount);
	for (int i = 1; i <= integersCount; i++)
	{
		scanf_s("%d", &nqkakvochislo);
		if (nqkakvochislo < 0)
		{
			sum += nqkakvochislo;
		}
	}
	printf("The sum of all negative numbers is: %d\n", sum);

}