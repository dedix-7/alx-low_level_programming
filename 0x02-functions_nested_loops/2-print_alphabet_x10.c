#include "main.h"
/**
 * print_alphabet - reoeat execution
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	int i;

	for (i = 0;i < 10;i++)
	{
		for (x ='a';x <= 'z';x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
