#include <stdio.h>

/**
 *main - single digit numbers under to followed by line
 *Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 11; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
