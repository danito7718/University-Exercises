#include <stdio.h>
#include <math.h>

int main() {
    int binary_number;
    printf("Enter a binary number containing only 1s and 0s: ");
    scanf_s("%d", &binary_number);

    int decimal = 0;
    int base = 1;
    int copy = binary_number;

    while (copy) {
        int last_digit = copy % 10;
        if (last_digit != 0 && last_digit != 1) {
            printf("The number contains digits different than 0 and 1.\n");
            return -1;
        }
        decimal += last_digit * base;
        base *= 2;
        copy /= 10;
    }

    printf("Decimal number: %d\n", decimal);

    return 0;
}
