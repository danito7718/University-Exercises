#include <stdio.h>
#include <string.h>
#include <math.h>

int hexDigitToDecimal(char digit)
{
	if (digit >= '0' && digit <= '9')
	{
		return digit - '0';
	}
	else if (digit >= 'A' && digit <= 'F')
	{
		return digit - 'A' + 10;
	}
	else 
	{
		return -1;
	}
}

int hexToDecimal(char hex[])
{
	int length = strlen(hex);
	int decimal = 0;

	for (int i = 0; i < length; i++)
	{
		int digitValue = hexDigitToDecimal(hex[length - 1 - i]);
		if (digitValue == -1) 
		{
			return -1;
		}
		decimal += digitValue * pow(16, i);
	}
	return decimal;
}


int main ()
{
	char hex1[] = "GAE";
	char hex2[] = "ACCB";
	char hex3[] = "56ACB";

	int result1 = hexToDecimal(hex1);
	if (result1 != -1) {
		printf("Decimal of %s: %d\n", hex1, result1);
	}
	else {
		printf("Conversion failed for %s\n", hex1);
	}

	int result2 = hexToDecimal(hex2);
	if (result2 != -1) {
		printf("Decimal of %s: %d\n", hex2, result2);
	}
	else {
		printf("Conversion failed for %s\n", hex2);
	}

	int result3 = hexToDecimal(hex3);
	if (result3 != -1) {
		printf("Decimal of %s: %d\n", hex3, result3);
	}
	else {
		printf("Conversion failed for %s\n", hex3);
	}

	return 0;

}
