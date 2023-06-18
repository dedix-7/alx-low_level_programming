#include "main.h"
/**
 * alloc_grid - allocate sspace for an 2d array and initializes it to zero
 * @width: width of each array
 * @height: height of the array
 * Return: address to array
 */
int **alloc_grid(int width, int height)
{
	int **array, element, widthelement;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	array = malloc(width * height);
	if (array == NULL)
		return (NULL);
	for(element = 0; element < height; element++)
	{
		for (widthelement = 0; widthelement < width; width++)
		{
			array[element][widthelement] = 0;
		}
	}
	return (array);
}
