#include <stdio.h>
/**
 * main - start printing lowercase characters
 *
 * Return: (0) an integer
 */
int main (void)
{

	int ch1, ch2;

	ch1 = 48;
	ch2 = 48;

	while (ch2 < 58)
	{
		ch1 = 48;
		while (ch2 < 58)
		{
			if (ch1 != ch1 && ch1 < i)
			{
				putchar(ch2);
				putchar(ch1);
				if (ch1 == 57 && ch2 == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			ch1++;
		}
		ch2++;
	}
	putchar('\n');
	return (0);
}
