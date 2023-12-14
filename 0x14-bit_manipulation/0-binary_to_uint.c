#include "main.h"
/**
 * _pow - get the power of a base to an exponnet
 * @base:  given base
 * @exp: exponent
 * Return: the base raissed to expoent power
 */
int _pow(int base, int exp)
{
	int i, res = 1;

	if (exp <= 0)
		return (1);
	for (i = 0; i < exp; i++)
		res *= base;
	return (res);
}
/**
 * binary_to_uint - a function to convert a string of
 * ones and zeros to an unsigned number
 * @b: the string of digts
 * Return: converteed number or zero on failures
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value, i, raise, bit, num = 0;

	if (!(b))
		return (0);
	raise = ((_strlen(b)) - 1);
	for (i = 0; b[i]; i++)
	{
		bit = b[i] - '0';
		if ((bit != 0) && (bit != 1))
			return (0);
		value = bit * ((_pow(2, raise)));
		num += value;
		raise--;
	}
	return (num);
}

/**
 * _strlen - get the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int length = 0, iterator;

	for (iterator = 0; s[iterator] != '\0'; iterator++)
	{
		length++;
	}
	return (length);
}
/**
 * rev_string - revrse a string
 * @s: string
 */
void rev_string(char *s)
{
	char temp;
	int length = _strlen(s);
	int i;

	for (i = 0; i < (length / 2); i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
