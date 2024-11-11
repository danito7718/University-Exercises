#include <stdio.h>

int main() {
    int N, M, S;
    printf("Enter value for N: ");
    scanf_s("%d", &N);
    printf("Enter value for M: ");
    scanf_s("%d", &M);
    printf("Enter value for S: ");
    scanf_s("%d", &S);

    for (int i = M; i >= N; i--)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            if (i == S)
            {
                break;
            }
            printf("%d ", i);
        }
    }

}
