#include "main.h"
/**
 * squareroot - function that returns the squareroot
 * @n: number to find squareroot
 * @i: sqaureroot
 * Return: sqaureroot of the number
 */
int squareroot(int n, int i)
{
	int root;

	if ((i * i) >= n)
	{
		return i;
	}
	root = squareroot(n, (i++));
	return (root);
}
/**
 * _sqrt_recursion - finds the sqaureroot and returns it
 * @n: number whose squarerot is to be found
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int root;

	root = squareroot(n, 1);
	return (root);
}
