#include <stdio.h>

/*3. Да се напише програма която сравнява 
въведени от потребителя две числа и извежда 
по-голямото от двете*/

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    // Reading a and b from the console
    scanf_s("%d %d", &a, &b);  

    printf("The max of %d and %d is: %d\n", a, b, max(a, b));

    return 0;
}
