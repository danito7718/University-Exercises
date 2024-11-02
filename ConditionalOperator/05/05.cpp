

#include <stdio.h>

/*5. Да се напише програма която проверява въведено 
от потребителя число:

- ако числото е четно да се изведе неговата
стойност повдигната на 2 степен;

- ако числото е нечетно да се изведе неговата
стойност умножена по 10;*/

int main()
{

    int number;
    printf("Type a number:");
    scanf_s("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even!");
        printf("\n");
        printf("number * number = ");
        printf("%d", number * number);
    }
    else 
    {
        printf("The number is odd!");
        printf("\n");
        printf("number * 10 = ");
        printf("%d", number * 10);
    }
}
