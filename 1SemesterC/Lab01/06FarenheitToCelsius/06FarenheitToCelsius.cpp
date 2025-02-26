// 06FarenheitToCelsius.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>


/*Задача 6 конзолен конвертор - от градуси °C към градуси °F
Напишете програма, която чете градуси по скалата на Целзий (°C) и ги преобразува
до градуси по скалата на Фаренхайт (°F). Потърсете в Интернет подходяща формула, с
която да извършите изчисленията. Закръглете резултата до 2 символа след десетичния
знак.*/
int main()
{
    double celsius;
    printf("Celsius:");
    scanf_s("%lf", &celsius);

    printf("Farenheit: %.1lf\n", (celsius * (9.0 / 5.0)) + 32);

        //(0°C × 9/5) + 32 = 32°F

}
