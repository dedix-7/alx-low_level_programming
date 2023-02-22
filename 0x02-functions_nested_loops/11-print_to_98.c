#include<stdio.h>
/**
  * Return: no value as it prints
  * print_to_98 - function to print to 98
  * @n: integer to set counter
  */

void print_to_98(int n)
{
	if (n < 98)
	{ 
		for (; n <= 98; n++)
		{
			printf("%d, ",n);
		}
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, "n);
		}
	}
}
