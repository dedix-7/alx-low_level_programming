#include "lists.h"
/**
 * find_listint_loop - function that finds
 * a loop in a linked list
 * It returns the entry point of the loop
 * @head: head of the list
 * Return: address of the beginning node or NULL if there's not
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if ((head == NULL) || (head->next == NULL))
		return (NULL);
	fast = slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			fast = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
/**
 * print_listint_safe - prints a liked lists, even ones with a loop
 * @head: hread of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *slow, *entry;
	size_t i = 0, check = 1;

	if (!(head))
		return (0);
	slow = (listint_t *)head;
	entry = find_listint_loop(slow);
	while ((slow != entry || check) && slow)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		i++;
		if (slow == entry)
			check = 0;
		slow = slow->next;
	}
	if (entry)
		printf("-> [%p] %d\n", (void *)entry, entry->n);
	return (i);
}
