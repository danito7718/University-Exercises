// 4.6ParallelogramArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846

//6. Лице на Трапец

int main()
{
    //S = a * h;
    double a;
    printf("side a:");
    scanf_s("%lf", &a);

    double h;
    printf("height:");
    scanf_s("%lf", &h);

    printf("Area=%.2lf", a * h);
}
