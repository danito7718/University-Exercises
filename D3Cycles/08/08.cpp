#include <stdio.h>

#define INT_MAX 2147483647 

int main() {
    int intMin = INT_MAX; 
    int count;
    printf("Enter how many numbers you would like to calculate: ");
    scanf_s("%d", &count);
    int n;
    for (int i = 0; i < count; i++) {
        printf("Enter a number: ");
        scanf_s("%d", &n);
        if (intMin > n) 
        {
            intMin = n;
        }
    }
    printf("The smallest number is: %d\n", intMin); 

}
