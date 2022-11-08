#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list.
 * @head: point to the first node.
 * @n: data to input in node.
 *
 * Return: pointer to the new node,
 *	   NULL upon failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
