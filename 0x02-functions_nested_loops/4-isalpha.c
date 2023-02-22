#include "main.h"
/**
 * _isalpha - checks if its character is in teh alphabet
 *
 * @c: variable tah reprsents the letter
 * Return: 0 success, 1 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
