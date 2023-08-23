#include "search_algos.h"

/**
  * linear_search - searches a integer array
  *   using a linear search
  *
  * @array: pointer to first element of array
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: if no value then null, else -1.
  *          the first index that matches value
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
