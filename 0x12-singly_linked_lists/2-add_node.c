#include "lists.h"
/**
 * add_node - function that resets the head of a list
 * @head: head of the list
 * @str: string to be duplicated in the head
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addrhead, newhead;

	newhead.str = const char *str;
	newhead.next = &(**head);
	addrhead = &newhead;
	head = &addrhead;

	return (addrhead);
}
