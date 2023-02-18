#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - entry point for the program execution
 *
 * Return : of the main function  will be 0 so it's a success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
