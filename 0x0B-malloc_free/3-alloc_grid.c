#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2 dimensional grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_int;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);
	ptr_int = malloc(height * sizeof(int *));

	if (ptr_int == NULL)
	{
		free(ptr_int);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr_int[i] = malloc(width * sizeof(int));
		if (ptr_int[i] == NULL)
		{
			free(ptr_int);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(ptr_int + i * height + j) = 0;
	}

	return (ptr_int);
}

