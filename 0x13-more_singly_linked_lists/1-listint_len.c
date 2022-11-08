#include "lists.h"

/**
 * listint_len - returns the number of elements in a list.
 * @h: linked list to measure.
 *
 * Return: number of nodes within the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
