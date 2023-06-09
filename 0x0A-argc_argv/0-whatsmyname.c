#include<stdio.h>
/**
 * main - return the name of the function
 * @argc: the number of command arguments
 * @argv: arrayholding the command strings
 * Return: 0 on success, 1 otherwise
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
