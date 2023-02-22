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

	variable1 = 1;
	variable2 = 2;
	counter2 = 0;

	while (counter2 <= 4000000)
	{
	counter2 = variable1 + variable2;
	if (counter2 % 2 == 0)
		counter1 += counter2;
	variable1 = variable2;
	variable2 = counter2;
	}
	printf("%ld\n",counter2);
	return (0);
}

