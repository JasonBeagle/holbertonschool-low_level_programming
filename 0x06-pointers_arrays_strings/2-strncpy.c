#include "holberton.h"

/**
*_strncpy - copies a string
*@dest: where to copy
*@src: string to copy
*@n: number of bytes to copy
*
*Return: pointer to the resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
