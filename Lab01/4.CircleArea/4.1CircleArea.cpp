
#include <iostream>
#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846

//1.Окръжност
//C = 2 PI r - дължина на окръжност
//Лице на кръг S = PI r*r
int main()
{
    //S = PI pow(r, 2)
    double r;
    scanf_s("%lf", &r);
    printf("Area=%.2lf", (pow(r, 2) * M_PI));
}
