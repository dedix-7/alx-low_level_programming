#include "main.h"
/**
 * _calloc - clone stdlib's calloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: NUll of failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int length, i = 0;
	void *new;
	char *cas;

	length = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(length);
	cas = new;
	for (i = 0; i < length; i++)
		cas[i] = 0;
	return (new);
}
