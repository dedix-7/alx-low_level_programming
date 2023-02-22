#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 14)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = column * row;
				if (product > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if(column != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(product + '0');
				}
			}
			_putchar('\n');
		}
	}
	else if (n < 0 || n > 15)
	{
		break;
	}
}
