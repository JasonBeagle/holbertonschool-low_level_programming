#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list.
 * @head: pointer to the linked list.
 * @index: index of the node starting at 0.
 *
 * Return: retrieved node or NULL if node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	unsigned int count = 0;
	listint_t *comeback;

	while (current != NULL)
	{
		if (count == index)
		{
			comeback = current;
			return (comeback);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
