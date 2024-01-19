#include "main.h"
/**
 * array_range - make an array of an int range
 * @min: minimu integer
 * @max: largest integer
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++, min++)
		arr[i] = min;
	return (arr);
}
