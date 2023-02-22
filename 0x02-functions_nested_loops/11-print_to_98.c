#include<stdio.h>
/**
  * Description: to print numbers till it gets to 98
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
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
