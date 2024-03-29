#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head:head of the list
 * Return: void, it's always successful
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head, *prev = head;

	if (!(head))
		return;
	while (temp)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
	}
}
