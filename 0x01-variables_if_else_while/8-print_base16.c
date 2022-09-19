#include <stdio.h>

/**
 *main - prints base 16 with lowercase letters
 *Return: always 0 (success)
 */

int main(void)
{
	int num;
	char let;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);

	putchar('\n');

return (0);
}
