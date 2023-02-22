#include<stdio.h>
/**
 * main - function to print 50 fibbonnacci number
 *
 * Return: int of 0 for success
 *
 */

int main(void)
{
	long int counter1, variable1, counter2, variable2;

	variable1 = 0;
	variable2 = 1;

	printf("%ld ,%ld ,", variable1, variable2);

	for (counter1 = 0; counter1 <= 48; counter1++)
	{
	counter2 = variable1 + variable2;
	printf("%ld, ", counter2);
	variable1 = variable2;
	variable2 = counter2;
	}
	return (0);
}

