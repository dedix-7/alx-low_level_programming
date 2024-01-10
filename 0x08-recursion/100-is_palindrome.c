#include "main.h"
/**
 * _strlen - get the length of a string
 * @str: string to check
 * Return: number of chars in the string
 */
int _strlen(char *str)
{
  	int length = 0;

	if (*str == '\0')
	{
		return (0);
	}
	length++;
	length += _strlen_recursion(str + 1);
	return (length);
}
/**
 * check_palindrome - checks if a string is a palindorme or not
 * @str: string to check
 * @left: starting index
 * @right: rightmost index
 * Return: 1 if it is, 0 if it isn't
 */
int check_palindrome(char *str, int left, int right)
{
	if (left >= right)
		return (1);
	else if (str[left] == str[right])
		return (check_palindrome(str, left + 1, right - 1));
	else
		return (0);
}
/**
 * is_palindrome - wrapper for the check_palindrome function
 * It simply takes the string by itslef
 * @str: string to check
 * Return: 1 if it is, 0 if it isn't
 */
int is_palindrome(char *str)
{
	int length;

	if (!(str))
		return (1);
	length = _strlen(str);
	if ((length == 0) || (length == 1))
		return (1);
	return (check_palindrome(str,0, length - 1));
}
