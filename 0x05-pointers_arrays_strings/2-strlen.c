#include <stdio.h>
#include "main.h"

/**
*_strlen - returns length of a string.
*@str string to be evaluated.
*
*Return: the length of the string.
*/

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
