#include "main.h"
/**
*main - print 1- 100, multiples of 3 exchange for Fizz,
*	multiples of 5 changes to Buzz.
*
*Return: always 0 (success).
*/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
