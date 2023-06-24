#include<stdio.h>
/**
 * main - print argumnts it recieves
 * @argc: arguent count
 * @argv: array of strings
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int printcount;

	for (printcount = 0; printcount < argc; printcount++)
	{
		printf("%s\n", argv[printcount]);
		printcount++;
	}
	return (0);
}
