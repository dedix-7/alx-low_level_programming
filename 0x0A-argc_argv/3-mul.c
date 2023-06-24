#include<stdio.h>
#include<stdlib.h>
/**
 * main - printproduct of two numbers
 * @argc: argument count
 * @argv: string array
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
