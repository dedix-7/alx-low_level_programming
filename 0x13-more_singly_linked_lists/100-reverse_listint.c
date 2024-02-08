#include "lists.h"
/**
 * reverse_listint - function that revreses a linked lists
 * @head: address of the head of the liked list
 * Return: first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if ((head == NULL) || (*head == NULL))
		return (NULL);
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	return (prev);
}
