// Exercise5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

/*Напишете програмни редове, с които да пресмятате следните изрази */

int main()
{
    double a;
    printf("a:");
    scanf_s("%lf", &a);

    double b;
    printf("b:");
    scanf_s("%lf", &b);


    double answer = a/((pow(a,2)) + pow(b,2)) + b/(2*a);
    printf("%.2lf", answer);

}
