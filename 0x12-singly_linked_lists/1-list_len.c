#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list.
 * It is assumed the tail points to NULL
 * @h: head pointer passed
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temporary = h;

	while (temporary != NULL)
	{
		count += 1;
		temporary = temporary->next;
	}
	return (count);
}
