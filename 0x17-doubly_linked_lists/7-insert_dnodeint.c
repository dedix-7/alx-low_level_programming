#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at an index in a dlinkedlist
 * @h: address of the head of the list
 * @idx: index to delete node at
 * @n: data of the new node to add
 * Return: new address or NULL ion failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;
	unsigned int i = 0;

	if ((idx == 0))
		return (add_dnodeint(h, (const int) n));
	if (h == NULL)
		return (add_dnodeint(h, (const int) n));
	if (*h == NULL)
		return (add_dnodeint(h, (const int) n));
	new = malloc(sizeof(dlistint_t));
	if (!(new))
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	curr = *h;
	while ((i < idx) && (curr))
	{
		curr = curr->next;
		i++;
	}
	if ((curr == NULL) && (i == idx))
	{
		free(new);
		return (add_dnodeint_end(h, (const int) n));
	}
	new->next = curr;
	new->prev = curr->prev;
	curr->prev = new;
	new->prev->next = new;
	return (new);
}
