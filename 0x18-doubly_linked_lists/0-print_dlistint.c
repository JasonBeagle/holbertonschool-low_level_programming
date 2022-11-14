#include "lists.h"

/**
 * print_dlistint - is a function that prints the elements of a list.
 * @h: pointer to the list.
 *
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
