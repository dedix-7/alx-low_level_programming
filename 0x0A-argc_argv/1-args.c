#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments passed to program
 * @argv: array of strings to hold arguments
 * Return: 0 on success, else nonzerp
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
