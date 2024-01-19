#include "main.h"
/**
 * _strlen - get the length of a string
 * @str: string to get length of
 * Return: length od string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * _strcpynob - copy withut appending null byte#
 * @src: string to copy
 * @dest: where to copy the string
 * Return: destination address
 */
char *_strcpynob(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; src[i] && i < len; ++i)
		dest[i] = src[i];
	return (dest);
}
/**
 * string_nconcat - concatenate tw strings at a new address in memory
 * @s1: first string to concantenate
 * @s2: secodn string
 * concatentaes up to n bytes of secodns tring
 * @n: butes of str2 to cocantenate
 * Return: new address concantenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size;
	char *new;

	if (!(s1))
		s1 = "";
	if (!(s2))
		s2 = "";
	size = _strlen(s1) + _strlen(s2) + 1;
	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	_strcpynob(new, s1);
	j = _strlen(s1);
	for (i = 0; (i < n) && (s2[i]); i++)
		new[j + i] = s2[i];
	if (s2[i])
		j++;
	new[j + i] = '\0';
	return (new);
}
