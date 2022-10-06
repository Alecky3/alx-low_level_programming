#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum element in the array
 * @max: maximum element in the array
 * Return: pointer to the allocated array else Null if allocation
 * fails
 */

int *array_range(int min, int max)
{
	int i, j;
	int *array_ptr;

	if (min > max)
		return (NULL);
	array_ptr = malloc(((max - min) + 1) * sizeof(int));

	if (array_ptr == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		array_ptr[i] = j;

	return (array_ptr);
}

