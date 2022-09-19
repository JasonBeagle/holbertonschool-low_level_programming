#include <stdio.h>

/**
 *main - single digit numbers under to followed by line
 *Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
