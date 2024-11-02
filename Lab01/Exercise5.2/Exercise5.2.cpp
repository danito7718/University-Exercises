// Exercise5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
//
//Напишете програмни редове, с които да пресмятате следните изрази :
int main()
{
    double x;
    printf("a:");
    scanf_s("%lf", &x);

    double y;
    printf("b:");
    scanf_s("%lf", &y);


    double answer = sqrt((2*x)/(y+9)) + sqrt((x-y)/(2*x));
    printf("%.2lf", answer);

}

