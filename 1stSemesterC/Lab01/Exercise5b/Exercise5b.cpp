// Exercise5b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

//Задача 4: Изчисляване на изрази
//
//Пресметнете стойността на израза :
//
//b)

int main()
{
    double b = 7;
    double answer = (sqrt(b) - sqrt(5))*(sqrt(b)+sqrt(5));
    printf("%.2lf", answer);

}
