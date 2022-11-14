#include "lists.h"

/**
 * free_dlistint - function frees list.
 * @head: pointer to the head node.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentnode, *nextnode;

	currentnode = head;

	while (currentnode != NULL)
	{
		nextnode = currentnode->next;
		free(currentnode);
		currentnode = nextnode;
	}
}
