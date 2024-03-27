#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at a particular index from zero
 * @head: head of the lst
 * @index: index of node to find
 * Return: the node or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *curr;

	curr = head;
	while ((i < index) && (curr))
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}
