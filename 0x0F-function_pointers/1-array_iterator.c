#include "function_pointers.h"

/**
* array_iterator - executes function on each array element.
* @array: pointer to integer array.
* @size: size of array.
* @action: pointer to function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ind = 0;

	if (array && size && action)
		while (ind < size)
		{
			action(array[ind]);
			ind++;
		}
}
