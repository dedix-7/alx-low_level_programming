#include <stdio.h>
/**
 * main - start printing lowercase characters
 *
 * Return: (0) an integer
 */
int main(void)
{

	int ch1, ch2, ch3;

	ch1 = 48;
	ch2 = 48;
	ch3 = 48;

	while (ch2 < 58)
	{
		ch1 = 48;
		while (ch1 < 58)
		{
			ch3 = 58;
			while (ch3 < 58)
			{
				if (ch2 != ch1 && ch2 != ch3 && ch1 != ch3 && ch2 < ch1 && ch1 < ch3)
			{
				putchar(ch2);
				putchar(ch1);
				putchar(ch3);
				if (ch1 == 56 && ch2 == 55 && ch3 == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			ch3++;
			}
		ch1++;
		}
		ch2++;
	}
	putchar('\n');
	return (0);
}
