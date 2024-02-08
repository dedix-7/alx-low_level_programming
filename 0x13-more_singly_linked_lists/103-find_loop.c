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
		fast = fast->next->next;
		slow = slow->next;
	}
	return (NULL);
}
