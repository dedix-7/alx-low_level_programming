#include "main.h"
/**
 * print_binary - function that prints the binary representation of unisgned numbers
 * @n: the unisgned long int number
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
