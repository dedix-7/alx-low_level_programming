#include "lists.h"
/**
 * print_listint - print all elements of a linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numnodes = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		numnodes++;
		temp = temp->next;
	}
	return (numnodes);
}
