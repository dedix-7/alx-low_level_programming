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

	if (head == NULL)
		return (NULL);

	fast = slow = head;
	while (fast && fast->next)
	{
		if (fast == slow)
		{
			fast = head;
			while (slow)
			{
				if (fast == slow)
					return (slow);
				slow = slow->next;
				fast = fast->next;
			}
		}
		fast = fast->next->next;
		slow = slow->next;
	}
	return (NULL);
}
