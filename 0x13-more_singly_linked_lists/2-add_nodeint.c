#include "lists.h"
/**
 * newnode - creates a new node
 * @value: value to put in new node
 * Return: pointer to new node
 */
listint_t *newnode(int value)
{
	listint_t *create = malloc(sizeof(listint_t));

	if (!create)
		return (NULL);
	create->n = value;
	return (create);
}
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: current head of the list
 * @n: int elemnt of the list.
 * Return: address of new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = newnode(n);
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	return (new);
}
