#include<stdio.h>
/**
 * main - print arguments it recives
 * @argc: count of arguments
 * @argv: array of strings to hold arguments
 * Return: 0 on sucess, nonzero elsewise
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
