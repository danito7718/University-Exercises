#include <stdio.h>
#include <math.h>

#define INT_MIN -2147483647
#define INT_MAX 2147483647

int main() {
    int array[10];
    int maxValue = INT_MIN;
    int minIndex;
    int minValue = INT_MAX;
    int maxIndex;

    for (int i = 0; i < 10; i++) {
        printf("Enter the %d number for the array: ", i);
        scanf_s("%d", &array[i]);

        if (array[i] > maxValue) 
        {
            maxValue = array[i];
            maxIndex = i;
        }
        if (array[i] < minValue) 
        { 
            minValue = array[i];
            minIndex = i;
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("%d, ", array[j]);
    }

    printf("\nMaximal element in the array is: %d, with index %d", maxValue, maxIndex);
    printf("\nMinimal element in the array is: %d, with index %d", minValue, minIndex);

}
