#include "main.h"
/**
 * wildcmp - compare strings if they're identical
 * the second string could contain the wildcard *
 * @s1: first string to compare with
 * @s2: second string
 * Return: 1 if they are identical, 0 if they aren't
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1  + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
			return (0);
}
