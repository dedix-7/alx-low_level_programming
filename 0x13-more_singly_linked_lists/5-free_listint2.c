#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head:head of the list
 * Return: void, it's always successful
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *prev = *head;

	if (head == NULL)
		return;
	while (temp)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
	}
	*head = NULL;
}
