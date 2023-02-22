#include "main.h"

/**
 *  print_last_digit - show last number digit
 *  @n: argument
 *  Return: integer
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n < 0)
	{
		r *= -1;
	}
	_putchar (r + '0');
	return (r);
}
