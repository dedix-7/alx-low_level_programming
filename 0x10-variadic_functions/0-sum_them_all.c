#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: number of paraeters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int counter, value, sum = 0;
	
	if (n == 0)
	{
		return (0);
	}
	va_list args;
	va_start(args, num);
	for (counter = 0; counter < num; counter++)
	{
		value = int va_arg(args, int);
		sum += value;
	}
	return (sum);
}
