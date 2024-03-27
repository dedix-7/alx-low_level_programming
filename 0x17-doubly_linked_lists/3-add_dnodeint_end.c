#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of list
 * @head: address of the head of the list
 * @n: integer data
 * Return: NULL on failure and address of new address on success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t) * 1);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (head == NULL)
	{
		head = &new;
		return (new);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	new->prev = curr;
	return (new);
}
