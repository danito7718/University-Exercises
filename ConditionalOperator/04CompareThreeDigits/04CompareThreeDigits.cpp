#include <stdio.h>

/*4. Да се напише програма която сравнява въведени от потребителя
три числа и извежда по-голямото от трите.*/

int max(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c) ? b : c;
}

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf_s("%d %d %d", &a, &b, &c);  
    printf("The max of %d, %d, and %d is: %d\n", a, b, c, max(a, b, c));

}
