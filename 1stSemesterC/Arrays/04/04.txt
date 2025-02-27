#include <stdio.h>
#include <stdlib.h>

int main() 
{
    /*4.Да се създаде конзолно приложение за сумиране на две матрици.
    Стойностите на елементите на входните матрици да се въвеждат от клавиатурата.*/
    // Define the sizes of the matrices
    int rows1, cols1, rows2, cols2;

    // Size of the first matrix
    printf("Enter the rows of the first matrix: ");
    scanf_s("%d", &rows1);
    printf("Enter the cols of the first matrix: ");
    scanf_s("%d", &cols1);

    // Size of the second matrix
    printf("Enter the rows of the second matrix: ");
    scanf_s("%d", &rows2);
    printf("Enter the cols of the second matrix: ");
    scanf_s("%d", &cols2);

    // Check if the matrices can be summed (must have the same dimensions)
    if (rows1 != rows2 || cols1 != cols2) {
        printf("The matrices cannot be summed as their dimensions do not match.\n");
        return 1;
    }

    // Dynamic memory allocation for matrices
    int** array1 = (int**)malloc(rows1 * sizeof(int*));
    int** array2 = (int**)malloc(rows1 * sizeof(int*));
    int** sumArray = (int**)malloc(rows1 * sizeof(int*));

    for (int i = 0; i < rows1; i++) {
        array1[i] = (int*)malloc(cols1 * sizeof(int));
        array2[i] = (int*)malloc(cols1 * sizeof(int));
        sumArray[i] = (int*)malloc(cols1 * sizeof(int));
    }

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("array1[%d][%d]: ", i, j);
            scanf_s("%d", &array1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("array2[%d][%d]: ", i, j);
            scanf_s("%d", &array2[i][j]);
        }
    }

    // Sum the matrices
    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sumArray[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", sumArray[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows1; i++) {
        free(array1[i]);
        free(array2[i]);
        free(sumArray[i]);
    }
    free(array1);
    free(array2);
    free(sumArray);

    return 0;
}
