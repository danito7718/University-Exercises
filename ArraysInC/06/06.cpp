#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter the size of the array (N ≤ 100): ");
    scanf("%d", &N);

    if (N > 100) {
        printf("N should be less than or equal to 100.\n");
        return 1;
    }

    int arrayA[100];
    int arrayB[100];

    for (int i = 0; i < N; i++) {
        printf("Enter arrayA[%d] value: ", i);
        scanf("%d", &arrayA[i]);
    }

    for (int i = 0; i < N; i++) {
        arrayB[i] = arrayA[i] * i;
    }

    printf("\nOriginal array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arrayA[i]);
    }

    printf("\n\nModified array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arrayB[i]);
    }

    return 0;
}
