﻿
#include <iostream>

//Задача 2 от лева към евро
//Да се напише програма която конвертира въведена от потребителя стойност в лв.и
//отпечатва резултата в евро.

int main()
{
    double leva;
    scanf_s("%lf", &leva);
    printf("euro=%lf", leva * 1.96);
}