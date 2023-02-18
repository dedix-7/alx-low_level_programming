#include <stdio.h>
/**
 * main - begins the program execution to print the alphabet in lowercase
 *
 * Return:(0) (Success) It will return an integer.
 *
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
return (0);
}
