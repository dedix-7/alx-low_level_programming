#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: string whose ;length is to be found
 * @Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (1);
	}
	length += _strlen_recursion(s + 1);
	return length;
}
