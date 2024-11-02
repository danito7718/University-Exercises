

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	/*7*. Напишете програма, с която се играе играта 
	„познай магическото число“. Правилата са следните: 
	играчът има 10 опита, за да отгатне магическото число. 
	Ако въведеното число е равно на избраното магическо число, 
	нека програмата да изпише съобщението „Позна!“. В противен 
	случай програмата да дава информация дали въведената стойност 
	е по-голяма или по-малка от магическото число и след това да дава
	възможност на играча да направи нов опит. Този процес да продължи,
	докато играчът отгатне числото или изчерпи всичките 10 възможни 
	опита.*/

	srand(time(NULL));
	int magicNumber = 1 + rand() % 100;
	int guessCount = 0;
	for (int i = 1; i <=10 ; i++)
	{
		guessCount++;
		int randomNumber;
		randomNumber = scanf_s("%d", &randomNumber);
		if (randomNumber > magicNumber)
		{
			printf("The magic number is (<) less than that!");
		}
		else if (randomNumber < magicNumber)
		{
			printf("The magic number is (>) bigger than that!");
		}
		
		if (randomNumber == magicNumber)
		{
			printf("You got it!");
			break;
		}
		
	}
	if (guessCount == 10)
	{
		printf("Unfortunately you didn't guess the magic number. ;(");
	}
	else 
	{
		printf("Congratulatons you guessed the magic number in %d tries!", guessCount);
	}
}