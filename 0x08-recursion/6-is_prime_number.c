#include "main.h"
/**
 * checkprime - function that checks if a number is prime
 * @n: number to be checked
 * @i: iterator
 * Return: 0 or 1 for prime
 */
int checkprime(int n, int i)
{
	int check;

	if (n <= 1)
	{
		check = 0;
		return (check);
	}
	else if (n == i)
	{
		check = 1;
		return (check);
	}
	else if ((n % i) == 0)
	{
		check = 0;
		return (check);
	}
	check = checkprime(n, i++);
	return (check);
}
/**
 * is_prime_number - returns the value of a prime number
 * @n: number to be checked
 * Return: 1 for prinme,0 otherwise\
 *
 */
int is_prime_number(int n)
{
	return (checkprime(n, 2));
}
