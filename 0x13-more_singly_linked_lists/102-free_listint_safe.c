#include "lists.h"
/**
 * find_listint_loop - function that finds
 * a loop in a linked list
 * It returns the entry point of the loop
 * @head: head of the list
 * Return: address of the beginning node or NULL if there's not
 */
/*listint_t *find_listint_loop(listint_t *head)
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
	}*/
/**
 * free_listint_safe - frees a linked list.
 * It can free lists with a loop
 * It also sets the head to NULL
 * @h: store the head address of the linked list
 * Return: freed size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *prev, *head, *temp;
	size_t i = 0, check = 0;

	if ((!(h)) || (!(*h)))
		return (0);
	head = *h;
	prev = find_listint_loop(head);
	while (head)
	{
		if (head->next == prev)
			check = 1;
		temp = head;
		head = head->next;
		free(temp);
		i++;
		if ((head->next == prev) && check)
			break;
	}
	*h = NULL;
	return (0);
}
