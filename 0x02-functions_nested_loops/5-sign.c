#include "main.h"
/**
 * print_sign - checks if its character is in teh alphabet
 *
 * @n: variable tah reprsents the letter
 * Return: 0 success, 1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
