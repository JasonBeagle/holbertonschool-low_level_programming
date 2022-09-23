#include "main.h"
/**
 *print_numbers - will print numbers 0-9 followed by new line
 *
 *Return: always 0 (success)
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + 0);
	_putchar('\n');
return (0);
}
