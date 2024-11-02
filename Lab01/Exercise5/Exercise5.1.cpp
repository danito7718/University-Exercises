

#include <iostream>
#include <math.h>
#include <stdio.h>

//Задача 4: Изчисляване на изрази
//
//Пресметнете стойността на израза :
//
//a)


int main()
{
    double a;
    printf("a:");
    scanf_s("%lf", &a);

    double b;
    printf("b:");
    scanf_s("%lf", &b);


    double y = (sqrt((2*a-b)/(a+b)) - sqrt(pow(a, 2) - pow(b, 2)));
    printf("%.2lf", y);

}
