#include "lists.h"
/**
 * print_dlistint - prints out a doubly linked lists
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	num = 0;

	if (h == NULL)
		return (num);
	while (h)
	{
		num++;
		printf("%d", h->n);
		h = h->next;
	}
	return (num);
}
