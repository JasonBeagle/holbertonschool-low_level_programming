#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: bytes allocated.
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	/* pointer var used for address of memory allocated*/
	int *j;
	/*the allocation of memory*/
	j = malloc(b);
	/* malloc failure check*/
	if (j == NULL)
	{
		exit(98);
	}
	/*successful malloc returns the address for allocated memory*/
	return (j);
}
