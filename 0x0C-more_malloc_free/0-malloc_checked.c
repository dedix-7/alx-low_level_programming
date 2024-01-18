#include "main.h"

/**
 * malloc_checked - wrapper around malloc that exits on failure
 * @b: size of the mem needed
 * Return: pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (!(ret))
		exit(98);
	return (ret);
}
