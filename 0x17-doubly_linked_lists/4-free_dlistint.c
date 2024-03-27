#include "lists.h"
/**
 * free_dlistint - free a doubly liked list
 * @head: head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	curr = head;
	if (curr == NULL)
		return;
	while (curr->next)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
}
