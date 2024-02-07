#include "lists.h"
/**
 * pop_listint - a function that deletes the head of a linked list
 * @head: address o0f the head to the list
 * Return: 0 if it's empty, head's data otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *prev;
	int ret;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	ret = (*head)->n;
	free(*head);
	return (ret);
}
