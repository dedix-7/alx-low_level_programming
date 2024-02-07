#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: address of the head of the list
 * @idx: index to insert at
 * @n: data of the node
 * Return: node address, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = *head;
	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (temp && (i < (idx - 1)))
	{
		temp = temp->next;
		i++;
	}
	if (!(temp))
		return (NULL);
	new->next = temp->next;
	temp->next = new;
	return (new);
}
