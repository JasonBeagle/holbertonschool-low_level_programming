#include "holberton.h"

/**
*_strcmp - compares two strings
*@s1: string one
*@s2: string two
*
*Return: the difference if s1 is < s2 or s1 > s2
*	0 if they are equal
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
