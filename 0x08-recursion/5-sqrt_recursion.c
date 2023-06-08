#include "main.h"
/**
 * squareroot - find the squareroot
 * @n: number to find root of
 * @i: iteratto recur
 * Return:  squareroot
 */
int squareroot(int n, int i)
{
	int root;

	if ((i * i) == n)
	{
		root = i;
		return (root);
	}
	else if (((i * i) > n) || (n < 0))
	{
		root = -1;
		return (root);
	}
	root = squareroot(n, (i + 1));
	return (root);
}
/**
 * _sqrt_recursion - find sqaureroot
 * @n: number to find root
 * Return: root of the number
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 0));
}
