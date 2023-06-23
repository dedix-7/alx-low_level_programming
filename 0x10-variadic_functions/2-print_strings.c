#include "variadic_functions.h"
/**
 * print_strings - prints given strings then a new line
 * @separator: string between numbers
 * @n: number of passed integers
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *str;
	va_list args;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}	
		if (separator != NULL && count < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
