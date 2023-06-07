#include "main.h"
/**
 * _pow_recursion - return the power of a func
 * @x: the base
 * @y: the index
 * Return: value of the base raised to the index
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
