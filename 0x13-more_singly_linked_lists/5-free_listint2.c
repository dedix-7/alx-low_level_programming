#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head:address of the head of the list
 * Return: void, it's always successful
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (head == NULL)
		return;
	prev = *head;
	while (*head)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
}
