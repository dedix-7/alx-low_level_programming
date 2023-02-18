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
	for (ch='a';ch<='z';ch++)
		putchar(ch);
	for (ch='A';ch<='Z';ch++)
		putchar(ch);
	putchar('\n');
  return (0);
}
