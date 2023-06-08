#include "main.h"
/**
 * squareroot - function that returns the squareroot
 * @n: number to find squareroot
 * @i: sqaureroot
 * Return: sqaureroot of the number
 */
int squareroot(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + squareroot(n, i + 1));
}
/**
 * _sqrt_recursion - finds the sqaureroot and returns it
 * @n: number whose squarerot is to be found
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n <= 0)
	{
		root = -1;
	}
	else if (n > 0)
	{
		root = squareroot(n, 2);
	}
	return (root);
}
