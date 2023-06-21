#include "function_pointers.h"
/**
 * print - prints a name
 * @c: string to be printed
 * Return: no return, void
 */
void print(char *c)
{
	int charcount = 0;

	while (c[charcount] != '\0')
	{
		_putchar(c[charcount]);
		charcount++;
	}
}
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function ointer to the printing function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
