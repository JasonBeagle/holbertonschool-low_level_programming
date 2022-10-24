#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array to search.
* @size: size of array.
* @cmp: point to function.
* Return: index on first non 0 return,
*	-1 if no mtch found,
*	size if negative.
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array && cmp)
	{
		for (ind = 0; ind < size; ind++)
		{
			if (cmp(array[ind]) != 0)
				return (ind);
		}
	}
	return (-1);
}
