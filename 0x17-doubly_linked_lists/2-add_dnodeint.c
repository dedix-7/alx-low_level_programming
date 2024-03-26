#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning
 * @head: address of the head of the list
 * @n: integer data
 * Return: NULL on failure and address of new address on success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	curr->prev = new;
	new->next = curr;
	*head = new;
	return (new);
}
