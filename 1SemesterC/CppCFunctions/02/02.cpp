#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_POINTS 200

/*   Условие: Да се дефинира функция, която намира разстояние между две точки,
     координатите на който се предават като параметри. Да се създаде конзолно приложение,
     което намира разстояние между обща дължина на начупена линия. Упътване: Координатите
     на точките да се дефинират като два отделни масива - първият да съдържа х- координатите,
     а втория - у-координатите.*/
double calculateDistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void readCoordinates(int x[], int y[], int count) 
{
    for (int i = 0; i < count; i++) 
    {
        printf("Enter X coordinate for point %d: ", i + 1);
        scanf_s("%d", &x[i]);
        printf("Enter Y coordinate for point %d: ", i + 1);
        scanf_s("%d", &y[i]);
    }
}

int main() 
{
    int n;
    printf("Enter the number of points: ");
    scanf_s("%d", &n);

    if (n < 2 || n > MAX_POINTS) 
    {
        printf("Please enter a number between 2 and %d.\n", MAX_POINTS);
        return 1;
    }

    int x[MAX_POINTS], y[MAX_POINTS];

    readCoordinates(x, y, n);

    float totalDistance = 0.0;
    for (int i = 0; i < n - 1; i++)
    {
        totalDistance += calculateDistance(x[i], y[i], x[i + 1], y[i + 1]);
    }

    printf("The total distance of the broken line is: %.2f\n", totalDistance);

    return 0;
}
