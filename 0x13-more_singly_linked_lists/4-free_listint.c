#include "lists.h"

/**
 * free_listint - frees a linked list from memory.
 * @head: pointer to linked list.
 *
 * Return: void, the great beyond, nothingness
 */

void free_listint(listint_t *head)
{
	listint_t *setmefree;

	while (head != NULL)
	{
		setmefree = head;
		head = head->next;
		free(setmefree);
	}
}
