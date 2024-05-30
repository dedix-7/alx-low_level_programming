#include "lists.h"
/**
 * insert_dnodeint_at_index - indert the node at a particular index
 * @h: address of the ead
 * @idx: index to add
 * @n: integer data
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr, *prev;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, (const) n));
	new = malloc(sizeof(dlistint_t));
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	curr = *h;
	while ((i < idx) && (curr))
