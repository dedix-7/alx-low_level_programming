#include "lists.h"
/**
 * dlistint_len - get the number of elements in a doubly lnked lists
 * @h: head of the list
 * Return: number of elemnts, size_t type
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
