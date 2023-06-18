#include "main.h"
/**
 * create_array - creates an array and initializes it witha char
 * @size: size of the array
 * @c: character to intialize
 * Return: Null if size is 0 and pointer to new array
 */
char *create_array(unsigned int size, char c)
{
	char createdarray[];
	int fillcounter;

	createdarray = malloc(size);
	if (createdarray == NULL)
	{
		return (NULL);
	}
	else
	{
		for (fillcounter = 0; fillecounter < size; fillcounter++)
		{
			createdarray[fillcounter] = c;
		}
	}
	return (createdarray);
}
