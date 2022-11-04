#include "lists.h"

/**
 * list_len - returns length of elements in linked list.
 * @h: pointer to the list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
