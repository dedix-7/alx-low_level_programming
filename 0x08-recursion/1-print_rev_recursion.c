#include "main.h"
/**
 * _print_rev_recursion - prints a string of characters n a newline
 * @s: string to be printed
 *
 * Return: no return, hence void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
