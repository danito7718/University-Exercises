

#include <stdio.h>

int main()
{
    const int M = 20; //Max count of matrix 20x10
    const int N = 10; //Max count of matrix 20x10

    int a[M][N];
    int b[M][N];
    int c[M][N];
    int i, j, m, n;

    do
    {
        printf("m=");
        scanf_s("%d", &m);
    } while ((m<20)||(m<2));

    do
    {
        printf("m=");
        scanf_s("%d", &n);
    } while ((n < 10) || (n < 2));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);   //Input Matrix a
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);   //Input Matrix b
        }
    }

    for (int i= 0; i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
            printf("\n");
        }
    }


}


