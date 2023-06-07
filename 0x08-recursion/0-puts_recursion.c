#include "main.h"
/**
 * _puts_recursion - prints a string of characters to the stdoutput and a newline
 * @s: string to be printed
 *
 * Return: no return, hence void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_puts_recursion(s + 1);
}
