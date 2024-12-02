#include <stdio.h>

int main() {
    int array[10];

    // Въвеждане на стойностите на елементите
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = ", i);
        scanf_s("%d", &array[i]);
    }

    // Извеждане на стойностите чрез индекс и оператор []
    printf("\nValues using index []:\n");
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Извеждане на стойностите чрез индекс и адресен оператор *
    printf("\nValues using address operator *:\n");
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, *(array + i));
    }

    // Извеждане на стойностите чрез указател
    printf("\nValues using pointer:\n");
    int* pArray = array;
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, *(pArray + i));
    }

    return 0;
}
