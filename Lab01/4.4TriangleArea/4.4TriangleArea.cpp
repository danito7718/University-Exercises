// 4.4TriangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846

// 4. Лице на Триъгълник

int main()
{
    //S = a * h / 2;
    double a;
    printf("Side a:");
    scanf_s("%lf", &a);
    

    double h;
    printf("Height:");
    scanf_s("%lf", &h);
    
    printf("Area=%.2lf", ((a * h) / 2));
}
