#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a partocular index
 * @head: address of the head
 * @index: index to dleet at
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if ((head == NULL) || (*head == NULL))
		return (-1);
	temp = *head;
	prev = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while ((temp) && (i < (index - 1)))
	{
		i++;
		temp = temp->next;
	}
	if (!(temp))
		return (-1);
	prev = temp->next;
	temp->next = temp->next->next;
	free(prev);
	return (1);
}
