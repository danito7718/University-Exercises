#include <stdio.h>

int main() {
    unsigned int number;

    printf("Enter a decimal number: ");
    scanf_s("%d", &number);

    printf("Hexadecimal: %X\n", number);
    printf("Octal: %o\n", number);

    char hex_str[10] = { 0 }; // Initialize the array to zero
    printf("Enter a hexadecimal number: ");
    scanf_s("%9s", hex_str, (unsigned int)sizeof(hex_str));
    int hex_number;
    sscanf_s(hex_str, "%x", &hex_number);
    printf("Decimal (from hex): %d\n", hex_number);

    char oct_str[10] = { 0 }; // Initialize the array to zero
    printf("Enter an octal number: ");
    scanf_s("%9s", oct_str, (unsigned int)sizeof(oct_str));
    int oct_number;
    sscanf_s(oct_str, "%o", &oct_number);
    printf("Decimal (from octal): %d\n", oct_number);
}
