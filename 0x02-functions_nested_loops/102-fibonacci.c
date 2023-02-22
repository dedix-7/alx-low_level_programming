#include<stdio.h>
/**
 * main - function to print 50 fibbonnacci number
 *
 * Return - int of 0 for success
 *
 */

int main(void)
{
	int counter1, variable1, variable2, counter2;

	counter1 = 0; variable1 = 0, variable2 = 1; counter2 = 0;

	for (counter1 = 0; counter1 <=50; counter1++)
	{
		if (variable1 == 0)
			printf("%d, ",variable1);
		else if (variable1 == 1)
			printf("%d, ",variable1);

		counter2 += variable1;

		printf ("%d ,", counter2);
	}
	
	return (0);
}

