#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position within
 *	a linked list.
 * @head: pointer to the first node of the list.
 * @idx: index where the node will be added.
 * @n: data to insert.
 *
 * Return: pointer to the new node,
 *	or NULL otherwise.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
