// 07.VegetableShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

/*Задача 7 Зеленчуков магазин
Земеделски производител продава реколтата от градината на зеленчуковата борса продава
зеленчуци за N лева за килограм и плодове за M лева за килограм . Напишете програма която
пресмята приходите от реколтата на производителя в долари( проверете в интернет курса на
долара).*/

int main()
{
    double vegPrice, fruitPrice;
    int vegKg, fruitKg;
    const double levToDollar = 1.85;
    printf("Price of vegetables (lv/kg): ");
    scanf_s("%lf", &vegPrice);

    printf("Price of fruits (lv/kg):");
    scanf_s("%lf", &fruitPrice);

    printf("Kilograms vegetables: ");
    scanf_s("%d", &vegKg);

    printf("Kilograms fruits: ");
    scanf_s("%d", &fruitKg);

    double totalIncomeLeva = (vegPrice * vegKg) + (fruitPrice * fruitKg);

    double totalIncomeDollars = totalIncomeLeva / levToDollar;

    printf("wholesum in leva: %.2lf lv\n", totalIncomeLeva);
    printf("Wholesum in dollars: %.2lf USD\n", totalIncomeDollars);
    return 0;
}
