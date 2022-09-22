#include "main.h"
/**
 *_isdigit - determines if a character is a numer 0-9
 *@c: the character to be evaluated.
 *
 * Return: 1 if character is digit between 0 and 9, else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
