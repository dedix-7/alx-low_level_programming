#include "main.h"

/**
 * main - start execution
 * print_alpabet for making the plahbet in lowercase
 *
 * Return: an integre of 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <='z'; x++)
		_putchar(x);
	_putchar('\n');
}
