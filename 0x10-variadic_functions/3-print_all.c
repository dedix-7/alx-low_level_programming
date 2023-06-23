#include "variadic_functions.h"
/**
 * sprint - print strings for task
 * @c: string
 */
void sprint(char *c)
{
	while (*c != '\0')
	{
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
	}
}
/**
 * print_all - prints all 4 specifiers
 * @format: argument types
 * Return: no return
 */
void print_all(const char *const format, ...)
{
	int i = 0, d;
	float f;
	char p;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
		  p = va_arg(args, int);
			_putchar(p);
			continue;
		case 'i':
			d = va_arg(args, int);
			printf("%d", d);
			continue;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			continue;
		case 's':
			s = va_arg(args, char *);
			sprint(s);
			continue;
		default:
			continue;
		}
		i++;
	}
	va_end(args);
}
