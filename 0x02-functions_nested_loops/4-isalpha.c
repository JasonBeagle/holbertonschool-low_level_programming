#include "main.h"

/**
 *_isalpha - determines if character is alphabetic
 *c - checked character
 *
 * Return: 1 if it is lower or uppercase letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
