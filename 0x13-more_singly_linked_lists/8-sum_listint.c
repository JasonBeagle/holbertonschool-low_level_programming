#include "lists.h"

/**
 * sum_listint - sums the data (n) of a linked list.
 * @head: pointer to the linked list.
 *
 * Return: sum of data or 0 if NULL.
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
