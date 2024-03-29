#include "main.h"
/**
 * create_array - creates an array and initializes it witha char
 * @size: size of the array
 * @c: character to intialize
 * Return: Null if size is 0 and pointer to new array
 */
char *create_array(unsigned int size, char c)
{
	char *createdarray;
	unsigned int fillcounter;

	createdarray = malloc(size);
	if (createdarray == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (fillcounter = 0; fillcounter < size; fillcounter++)
		{
			createdarray[fillcounter] = c;
		}
	}
	return (createdarray);
}
