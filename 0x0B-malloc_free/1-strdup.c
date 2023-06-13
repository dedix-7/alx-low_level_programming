#include "main.h"
/**
 * _strdup - return a pointer to a new address withduplicate
 * @str: given string
 * Return: pointer of the new string
 */
char *_strdup(char *str)
{
	char *newstring;
	int sizestring, fillercount;

	sizestring = _strlen(str);
	newstring = malloc(sizestring);
	if (str == NULL || newstring == NULL)
	{
		return (NULL);
	}
	for (fillercount = 0; fillercount <= sizestring; fillercount++)
	{
		newstring[fillercount] = str[fillercount];
	}
	return (newstring);
}
/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
