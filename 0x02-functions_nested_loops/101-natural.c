#include<stdio.h>
#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 * @arguments: nThere are no arguments
 *
 * Return: no return
 */

int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
