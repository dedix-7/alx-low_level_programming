#include "function_pointers.h"
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
