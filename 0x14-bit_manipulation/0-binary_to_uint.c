#include "main.h"
/**
 * binary_to_uint - a function to convert a string of
 * ones and zeros to an unsigned number
 * @b: the string of digts
 * Return: converteed number or zero on failures
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u = 0, i = 0;

	for (i = 0; b[i]; i++)
	{
		
