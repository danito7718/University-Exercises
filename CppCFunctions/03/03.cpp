#include <stdio.h>
#include <math.h>

    double factorial(int n) 
    {
        double result = 1.0;
        for (int i = 1; i <= n; i++) 
        {
            result *= i;
        }
        return result;
    }

    int main() 
    {
        /*Условие: Да се състави конзолно приложение за намиране на е(на хикста) в ред на Фурие.Натрупването на междинната сума да се прекрати,
        когато поредния член стане по - малък от 10(на минус 8).Формулата за пресмятане е : е(на хикста) = 1 + х / 1 + х(на втора) / 2!+ х(на трета) / 3!+ х(на четвърта)... + х(на Ента) / n!
        Да се сравни получената стойност със стойността, получена през използване на функция exp().
        Упътване : Да се използва функция за намиране стойността на n!. */
        double x;
        printf("Enter the value of x for e^x: ");
        scanf_s("%lf", &x);

        double term = 1.0; 
        double sum = 1.0;  
        int n = 1;         

        
        while (term >= 1e-8) 
        {
            term = pow(x, n) / factorial(n);
            sum += term;
            n++;
        }

        double exactValue = exp(x);

       
        printf("Calculated value of e^x: %.10f\n", sum);
        printf("Value of e^x using exp(): %.10f\n", exactValue);
        printf("Difference: %.10f\n", fabs(sum - exactValue));

        return 0;
    }

