#include <stdio.h>
#include "main.h"

/**
*_strcpy - copies string at @src, including null byte, to a point
*	determined by @dest.
*@dest: where to copy string..
*@src: string to copy
*
*Return: pointer to destinatin string.
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
