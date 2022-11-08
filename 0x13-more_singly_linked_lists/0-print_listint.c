#include "lists.h"

/**
 * print_listint - prints all the elements contain in a linked list.
 * @h: pointer to the list.
 *
 * Return: the number of nodes printed.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
