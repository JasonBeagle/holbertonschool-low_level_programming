#include "main.h"

/**
 *print_alphabet_x10 - prints 10x the alphabet in lowercase
 *Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int num;
	char letter;

	num = 0;

	while (num <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		num++;
	}
}
