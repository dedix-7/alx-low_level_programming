#include "main.h"

/**
 *  print_last_digit - show last number digit
 *  @n: argument
 *  Return: integer
 */

int print_last_digit(int n)
{
	int l = l % 10;

	if (n < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (l);
}
