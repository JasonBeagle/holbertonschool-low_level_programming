#include <stdio.h>
#include "main.h"

/**
*print_array - prints elements of an array.
*@a: array of elements.
*@n: number to be printed.
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
