#include "main.h"
/**
 * create_array - creates an array of characters and initializes the,
 * @size: size of the array
 * @c: character to initialize
 * Return: pointer to the declared charcter
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int fillercount;

	array = malloc(size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (fillercount = 0; fillercount < size; fillercount++)
		{
			array[fillercount] = c;
		}
	}

	free(array);
	return (array);
}
