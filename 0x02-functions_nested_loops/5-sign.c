#include "main.h"

/**
 *print_sign - print sign of number
 *
 *@n: number to be determined
 *
 *Return: 1 if positive
 *	0 if zero
 *	-1 if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
