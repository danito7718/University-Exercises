#include <stdio.h>

int main()
{
    //6.Да се напише програма която извежда редицата на Фибоначи
    int n;
    printf("Write a number for the Fibonacci Sequence:");
    scanf_s("%d", &n);
    int sumOfTwo;
    int num1 = 0;
    int num2 = 1;
    int i = 1;
    do
    {
        printf("\n %d", num1);
        sumOfTwo = num1 + num2;
        num1 = num2;
        num2 = sumOfTwo;
        i++;
    } while (i <= n);

    return 0;
}
