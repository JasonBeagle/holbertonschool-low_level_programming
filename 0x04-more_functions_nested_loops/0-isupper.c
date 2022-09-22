#include "main.h"
/**
 *_isupper - determines if a letter is upper case of not.
 *@c: character to be evaluated
 *Return: 1 if character is uppercase, 0 if lowercase.
 */
int _isupper(int c)
{
		for (c >= 'A' && c <= 'Z')
			return (1);
		return (0);
}
