// 4.4TrapezoidArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846

//5.Лице на Трапец

int main()
{
    //S = ((a + b) * h) / 2
    double a;
    printf("side a:");
    scanf_s("%lf", &a);

    double b;
    printf("side b:");
    scanf_s("%lf", &b);

    double h;
    printf("height:");
    scanf_s("%lf", &h);

    printf("Area=%.2lf", (((a + b)*h) / 2));
}

