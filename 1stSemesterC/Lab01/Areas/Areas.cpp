
#include <iostream>
#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846

//Задача 4 Лица
//Да се напише програма която да пресмята лицата на фигурите :
//-Обем на кълбо

int main()
{
    double radius;
    double volumeSphere;
    scanf_s("%lf", &radius);
    volumeSphere = (4 * M_PI * pow(radius, 3)) / 3;
    printf("%.2lf\n", volumeSphere);

}
