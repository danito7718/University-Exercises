#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for isdigit

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void hexToBinary(char hex[]) {
    int decimal = 0;
    for (int i = 0; hex[i] != '\0'; i++) {
        decimal *= 16;
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += hex[i] - '0';
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += hex[i] - 'A' + 10;
        }
        else {
            printf("Invalid hex digit: %c\n", hex[i]);
            return;
        }
    }
    decimalToBinary(decimal);
}

int main() {
    char input[100];
    printf("Enter a number (decimal or hexadecimal): ");
    scanf_s("%s", input);

    int is_hex = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if ((input[i] >= 'A' && input[i] <= 'F')) {
            is_hex = 1;
            break;
        }
    }

    if (is_hex) {
        printf("%s in binary is: ", input);
        hexToBinary(input);
    }
    else {
        int decimal_number = 0;
        for (int i = 0; input[i] != '\0'; i++) {
            if (isdigit(input[i])) {
                decimal_number = decimal_number * 10 + (input[i] - '0');
            }
            else {
                printf("Invalid decimal digit: %c\n", input[i]);
                return -1;
            }
        }
        printf("%d in binary is: ", decimal_number);
        decimalToBinary(decimal_number);
    }

    return 0;
}
