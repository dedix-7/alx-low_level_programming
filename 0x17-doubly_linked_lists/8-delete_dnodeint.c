#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at a particular index
 * @head: address of the head of the list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	curr = *head;
	while ((i < index) && (curr))
	{
		curr = curr->next;
		i++;
	}
	if (index > i)
		return (-1);
	if (curr == NULL)
		return (-1);
	if (curr->prev == NULL)
	{
		if (curr->next == NULL)
		{
			free(curr);
			*head = NULL;
			return (1);
		}
		curr->next->prev = curr->prev;
		*head = curr->next;
		free(curr);
		return (1);
	}
	if (curr->next == NULL)
	{
		curr->prev->next = curr->next;
		free(curr);
		return (1);
	}
	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
