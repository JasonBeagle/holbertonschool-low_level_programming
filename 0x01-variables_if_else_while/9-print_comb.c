#include <stdio.h>

/**
 *main - prints all combinations of single digit numbers
 *in ascending order using putchar
 *Return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
