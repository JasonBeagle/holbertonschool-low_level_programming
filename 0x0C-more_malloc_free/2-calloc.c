#include <stdlib.h>
#include "main.h"

/**
**_memset - a function that fills memory with a constant byte.
* @s: a pointer to array containing the array for memory allocation.
* @b: the constant byte to be placed.
* @n: the number of bytes.
*
*Return: a pointer to the memory allocated containing the constant byte.
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
**_calloc - allocates/initializes memory for an array.
* @nmemb: # of elements in the array.
* @size: size of those elements.
*
*Return: a pointer to the newly creates memory, or returns null if malloc would fail or 
*	in the case nmemb or size recieve no input.
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* initiates a pointer, j, of the type char */
	char *j;

		/* if function recieves nothing from, nmemb or size, return NULL*/
		if (nmemb == 0 || size == 0)
			return (NULL);
		
		/* allocates memory to, j, with size being nmemb * size */
		j = malloc(nmemb * size);

		/* if j is null, return null */
		if (j == NULL)
		{
			return (NULL);
		}

	/* set memory to 0 */
	_memset(j, 0, nmemb * size);
	return (j); }

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: the contstant byte
 * @n: a number of bytes
 * Return: a pointer to the memory area s
 */
