#include "main.h"
/**
 * alloc_grid - allocate sspace for an 2d array and initializes it to zero
 * @width: width of each array
 * @height: height of the array
 * Return: address to array
 */
int **alloc_grid(int width, int height)
{
	int column, count, **array;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	array = malloc(sizeof (int *) * width);
	if (array == NULL)
		return (NULL);
	for (count = 0; count < height; count++)
	{
		array[count] = malloc(sizeof(int) * width);
	}
	for (count = 0; count < height; count++)
	{
		for (column = 0; column < width; width++)
		{
			array[count][column] = 0;
		}
	}
	return (array);
}
