#include <stdio.h>

int main() {
    int n, current = 1;
    printf("Enter a number: ");
    scanf_s("%d", &n);

    for (int i = 1; current <= n; i++) {
        for (int j = 1; j <= i && current <= n; j++) {
            printf("%d ", current);
            current++;
        }
        printf("\n");
    }

}
