#include "main.h"

/**
*_memset - fills memory with a byte
*@s: area to be filled
*@b: char to copy
*@n: number of copies
*
*Return: pointer to memory area.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
