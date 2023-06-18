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
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
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
	int allocsize;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	allocsize = _strlen(s1) + _strlen(s2);
	newpointer = malloc(allocsize + 1);
	if (newpointer == NULL)
	{
		return (NULL);
	}
	newpointer = _strcpy(newpointer, s1);
	newpointer = _strcpy(newpointer, s2);
	return (newpointer);
}
