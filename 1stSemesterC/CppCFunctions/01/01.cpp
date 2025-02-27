#include <stdio.h>
#include <string.h>
#include <math.h>
#define PI 3.141592653589793238462643383279502884197


/*Условие: Да се създаде конзолно приложение, което пресмята лицата на различните фигури :
  кръг, правоъгълник, триъгълник. Пресмятането на лицата на фигурите да се извършва с отделни функции.
  В проекта да се включи и функция, която проверява дали стойностите за страните на триъгълника са валидни.*/
int TriangleArea(int a, int b, int c)
{
    float s = (a + b + c) / 2.0;
    printf("The S of the triangle is: %2.f\n", s);
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return (int)area; 
}

int RectangleArea(int a, int b)
{
    int result = a * b;
    return result;
}

int CircleArea(int a)
{
    return (PI * a * a); 
}

int main()
{
    printf("Enter one of the figures, to find the area: Circle, Triangle, Rectangle: ");
    char figure[100];
    scanf_s("%s", figure, sizeof(figure));
    int result = 0;
    int a, b, c;

    if (strcmp(figure, "Circle") == 0)
    {
        printf("You chose Circle\n");
        printf("Enter the radius of the circle: ");
        scanf_s("%d", &a);
        result = CircleArea(a);
        printf("The area of the circle is: %d\n", result);
    }
    else if (strcmp(figure, "Triangle") == 0)
    {
        printf("You chose Triangle\n");
        printf("Enter the sides a, b, and c of the triangle: \n");
        printf("Enter the a: ");
        scanf_s("%d", &a);
        printf("Enter the b: ");
        scanf_s("%d", &b);
        printf("Enter the c: ");
        scanf_s("%d", &c);
        result = TriangleArea(a, b, c);
        printf("The area of the triangle is: %d\n", result);
    }
    else if (strcmp(figure, "Rectangle") == 0)
    {
        printf("You chose Rectangle\n");
        printf("Enter the sides a and b of the rectangle: \n");
        printf("Enter the a: ");
        scanf_s("%d", &a);
        printf("Enter the b: ");
        scanf_s("%d", &b);
        result = RectangleArea(a, b);
        printf("The area of the rectangle is: %d\n", result);
    }
    else
    {
        printf("Wrong figure.\n");
    }

    return 0;
}
