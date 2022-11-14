#include "lists.h"

/**
 * dlistint_len - a functions that returns the number of elements in a list.
 * @h: a pointer to the head of the list.
 *
 * Return: number of elements in a linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
