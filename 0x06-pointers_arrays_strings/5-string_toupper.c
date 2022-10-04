#include "holberton.h"

/**
*string_toupper - changes lowercase letter to upper
*@s: string to be changed
*
*Return: the end string
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
