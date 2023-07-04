#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: current head of the list
 * @n: int elemnt of the list.
 * Return: address of new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new;
	listint_t *newadddr = &new;

	new.next = *head;
	new.n = n;
	*head = newadddr;

	return (newadddr);
}
