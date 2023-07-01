#include "lists.h"
/**
 * createnode - createsc a new node of list_t
 * @str: string to be passed to new node
 * Return: address of new node
 */
list_t *createnode(const char *str)
{
	list_t *result;

	result = malloc(sizeof(list_t));
	if (result == NULL)
	{
		return (NULL);
	}
	result->str = strdup(str);
	if (result->str == NULL)
	{
		free(result);
		return (NULL);
	}
	result->next = NULL;
	return (result);
}
/**
 * add_node - function that resets the head of a list
 * @head: head of the list
 * @str: string to be duplicated in the head
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addrhead;

	addrhead = createnode(str);
	if (addrhead == NULL)
	{
		return (NULL);
	}
	addrhead->next = *head;
	*head = addrhead;
	return (addrhead);
}
