#include <stdio.h>

int main() {
    int A = (0b1010 ^ 0b1100) ^ 0b1100;
    int B = (0b10101 & 0b100) & 0b101;
    int C = (0b1001 | 0b1001) | 0b0101;
    int D = (0b0011 | 0b1100) & 0b0110;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
}
