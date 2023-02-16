#include <unistd.h>
/**
 * main - EnStart of execution
 *
 * Return: A value of 1 (Success)
 */
int main(void)
{
	char names[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, names, 59);
	return (1);
}
