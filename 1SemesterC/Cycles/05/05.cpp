#include <stdio.h>

int main() 
{
    //5.Въведете последователност от N цели числа. Намерете произведението от всички въведени числа. Въвеждането приключва при получаване на 0;
    int number;
    int sum = 1;

    printf("Enter integers (input ends when you enter 0):\n");

    while (1) 
    {
        scanf_s("%d", &number);

        if (number == 0) {
            break; 
        }
        sum *= number;  
    }

    printf("The product of all entered numbers is: %d\n", sum);
}
