#include "holberton.h"

/**
*_strncat - concatenates two strings together by bytes.
*@dest: string to be appended
*@src: string source
*@n: bytes of string to be concatenated
*
*
*Return: pointer to the final string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
