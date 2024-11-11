#include <stdio.h>

int main() {
    int n = 7;
	for (int i = 1; i <= 7; i++)
	{
		int count = 1;
		for (int j = 0; j < n; j++)
		{
			printf("%d ", count);
			count++;
		}
		printf("\n");
		n--;
	}
}
