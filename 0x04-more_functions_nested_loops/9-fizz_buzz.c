#include <stdio.h>
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
		if ((num % 3) == 0 && (num % 5) != 0)
			printf(" Fizz");
		else if ((num % 5) == 0 && (num % 3) != 0)
			printf(" Buzz");

		else if ((num % 3) == 0 && (num % 5) == 0)
			printf(" FizzBuzz");
		else if (num == 1)
			printf("%d", num);
		else
			printf(" %d", num);
	}

	printf("\n");

	return (0);
}
