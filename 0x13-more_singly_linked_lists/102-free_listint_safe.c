#include "lists.h"
/**
 * find_listint_loop - function that finds
 * a loop in a linked list
 * It returns the entry point of the loop
 * @head: head of the list
 * Return: address of the beginning node or NULL if there's not
 */
/**
 * free_listint_safe - frees a linked list.
 * It can free lists with a loop
 * It also sets the head to NULL
 * @h: store the head address of the linked list
 * Return: freed size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *entry, *temp;
	size_t i = 0, check = 0;

	if ((!(h)) || (!(*h)))
		return (0);
	entry = find_listint_loop(head);
	while (*h)
	{
		temp = *h;
		if (*h == entry)
			check = 1;
		i++;
		(*h) = (*h)->next;
		free(temp);
		if ((*h) == entry && check)
			break;
	}
	*h = NULL;
	return (i);
}
