#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL,
 *	essentially deleting the list entirely.
 * @head: pointer to list to free.
 *
 * Return: void, the great unknown.
 */

void free_listint2(listint_t **head)
{
	listint_t *setmefree;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	setmefree = *head;
	while (setmefree != NULL)
	{
		next = setmefree->next;
		free(setmefree);
		setmefree = next;
	}
	*head = NULL;
}
