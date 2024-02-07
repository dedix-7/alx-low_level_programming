#include "lists.h"
/**
 * sum_listint - returns the sum of elements of a linked list
 * @head: head of the list
 * Return: sum of the list or zero on faiure
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
