#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
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
/**
 * str_concat - a function that returns a pointer to a new address
 * with two concatentaed strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new address
 */
char *str_concat(char *s1, char *s2)
{
	char *newpointer;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	newpointer = malloc((_strlen(_strcat(s1, s2);) + 1);
	newpointer = _strncat(s1, s2);
	return (newpointer);
}
