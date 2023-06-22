#include "variadic_functions.h"
11;rgb:0000/0000/0000/**
 * print_numbers - prints given numbers followed by a new line
 * @separator: string between numbers
 * @n: number of passed integers
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count, value;
	va_list args;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (separator != NULL && count <= (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
