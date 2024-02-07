#include "lists.h"
/**
 * get_nodeint_at_index - get the node at a particular index
 * @head: head of the lists
 * @index: index of node to return
 * Return: node at that indx or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *prev;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0, prev = head; prev && i < index; i++)
		prev = prev->next;
	if (!(prev))
		return (NULL);
	return (prev);
}
