#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * main - add numbers passed to commandline
 * @argc: count of arguments
 * @argv: strings passed to main
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, const char *argv[])
{
	int counter, stringcount, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (counter = 1; counter < argc; counter++)
		{
			for (stringcount = 0; argv[counter][stringcount] != '\0'; stringcount++)
			{
				if (!isdigit(argv[counter][stringcount]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[counter]);
		}
	}
			printf("%d\n", sum);
			return (0);
}
