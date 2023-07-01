#include "lists.h"
/**
 * _strlen - gets the lengtrh of a stribng
 * @str: string whose length is to be found
 * Return: length iof string or 0 if it's empty
 */
int _strlen(const char *str)
{
	int index = 0, length = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[index] != '\0')
	{
		length += 1;
		index += 1;
	}
	return (length);
}
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
	result->len = _strlen(str);
	if (result->str == NULL)
	{
 		free(result);
		return (NULL);
	}
	return (result);
}
/**
 * findnode - finds a node with a particular next pointer
 * @head: head of the list
 * @nextp: next pointer to be found
 * Return: address of that node, or NULL if it fails
 */
list_t *findnode(list_t **head)
{
	list_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		if (temp->next == NULL)
			return temp;
		temp = temp->next;
	}
	return (temp);
}
/**
 * insertafternode - insert a node after a given node
 * @nodeafter: node to indert afyer
 * @newnode: the new node to be inserted
 * Return: no return
 */
void insertafternode(list_t *nodeafter, list_t *newnode)
{
	newnode->next = nodeafter->next;
	nodeafter->next = newnode;
}
/**
 * add_node_end - function that resets the head of a list
 * @head: head of the list
 * @str: string to be duplicated in the end
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addrhead, *newnode;

	addrhead = createnode(str);
	if (addrhead == NULL)
	{
		return (NULL);
	}
	newnode = findnode(head);
	insertafternode(newnode, addrhead);
	return (addrhead);
}
