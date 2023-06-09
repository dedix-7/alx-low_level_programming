#include <stdio.h>
#include <stdlib.h>
/**
 * main - print two numbers given to main
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 on sucess, 1 on failure
 */
int main(int argc, char *argv[])
{
	int product, number, numbertwo;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number = atoi(argv[1]);
		numbertwo = atoi(argv[2]);
		product = number * numbertwo;
		printf("%d\n", product);
		return (0);
	}
}
