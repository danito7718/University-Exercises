#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N 10
#define MAX_M 10

int main() {
    int N, M;
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    if (N > MAX_N || M > MAX_M) {
        printf("Dimensions exceed the maximum allowed size.\n");
        return 1;
    }

    // Seed the random number generator
    srand(time(0));

    // Initialize matrix with random numbers from 0 to 10
    float A[MAX_N][MAX_M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = rand() % 11;  // Random number from 0 to 10
            printf("A[%d][%d] = %.2f\n", i, j, A[i][j]);
        }
    }

    float max = A[0][0];
    int max_i = 0, max_j = 0;
    float positive_sum = 0;
    int odd_count = 0;
    float odd_sum = 0;
    float diagonal_sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                max_i = i;
                max_j = j;
            }
            if (A[i][j] > 0) {
                positive_sum += A[i][j];
            }
            if (((int)A[i][j]) % 2 != 0) {
                odd_sum += A[i][j];
                odd_count++;
            }
            if (i == j) {
                diagonal_sum += A[i][j];
            }
        }
    }

    float odd_avg = (odd_count > 0) ? (odd_sum / odd_count) : 0;

    printf("\nThe maximum element is %.2f at index [%d][%d]\n", max, max_i, max_j);
    printf("The sum of positive elements is %.2f\n", positive_sum);
    printf("The average of odd elements is %.2f\n", odd_avg);
    printf("The sum of the main diagonal elements is %.2f\n", diagonal_sum);

    printf("\nThe lower triangular matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i >= j) {
                printf("%.2f ", A[i][j]);
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nThe upper triangular matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i <= j) {
                printf("%.2f ", A[i][j]);
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
