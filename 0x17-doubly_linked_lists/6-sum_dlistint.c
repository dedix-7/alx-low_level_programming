#include "lists.h"
/**
 * sum_dlistint - sum of all data in the list
 * @head: head of the list
 * Return: sum or zero for empty lists
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr;

	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
