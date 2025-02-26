#include <stdio.h>

//2. Да се напише програма която извършва следните действията :
//
//-събиране на две числа;
//
//-изваждане на две числа;
//
//-умножение на две числа;
//
//-деление на две числа;
//
//-модулно деление на две числа;

int main() {
	int number1;
	int number2;
	printf("Number 1:");
	scanf_s("%d", &number1);
	printf("Number 2:");
	scanf_s("%d", &number2);

	printf("%d + %d = %d\n", number1, number2, number1 + number2);
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	printf("%d * %d = %d\n", number1, number2, number1 * number2);
	printf("%d / %d = %d\n", number1, number2, number1 / number2);  // Handle division by zero in a real program.
	printf("%d %% %d = %d\n", number1, number2, number1 % number2);  // Note the '%%' to print the '%' character.

}