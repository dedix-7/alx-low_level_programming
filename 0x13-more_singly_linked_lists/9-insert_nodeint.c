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
	listint_t *temp, *new, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = *head;
	prev = *head;
	new = malloc(sizeof(listint_t));
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp && i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if ((i != idx) && (!(temp)))
		return (NULL);
	new->next = temp;
	prev->next = new;
	return (new);
}
