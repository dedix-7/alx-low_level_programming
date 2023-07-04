#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_len *h)
{
	const listint_len *temp = h;
	size_t count = 0;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
