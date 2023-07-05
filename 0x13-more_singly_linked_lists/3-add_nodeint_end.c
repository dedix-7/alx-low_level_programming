#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of the list
 * @head: address of the head
 * @n: int data of the list
 * Return: address of the new node or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *prev, *temp = *head;

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	while (temp)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = new;
	return (new);
}
