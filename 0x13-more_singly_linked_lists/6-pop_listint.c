#include "lists.h"
/**
 * pop_listint - a function that deletes the head of a linked list
 * Basically it's setting node two to be the head
 * @head: address o0f the head to the list
 * Return: 0 if it's empty, head's data otherwise
 */
int pop_listint(listint_t **head)
{
	int ret;
	listint_t *prev;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	ret = (*head)->n;
	prev = *head;
	*head = (*head)->next;
	free(prev);
	return (ret);
}
