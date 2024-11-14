#include <stdio.h>
#include <stdlib.h>

int main() 
{
    /*Да се създаде конзолно приложение за 
    въвеждане на елементи на двумерен масив и 
    намиране сумата на елементите във всеки ред*/
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf_s("%d", &rows);
    printf("Enter the number of columns: ");
    scanf_s("%d", &cols);

    // Dynamic memory allocation for the 2D array
    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(cols * sizeof(int));
    }

    // Input elements for the 2D array
    printf("Enter elements for the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }

    // Calculate and print the sum of elements in each row
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += array[i][j];
        }
        printf("Sum of elements in row %d: %d\n", i, rowSum);
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
