#include <stdio.h>
/**
 * main - start printing lowercase characters
 *
 * Return: (0) an integer
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ('a' != 'q' || 'a' != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
