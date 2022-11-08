#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to linked list.
 *
 * Return: data of the deleted node,
 *	or NULL if empty.
 */

int pop_listint(listint_t **head)
{
	int retval;
	listint_t *next_node;

	if (*head == NULL)
	{
		return (0);
	}
	next_node = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = next_node;
	return (retval);
}
