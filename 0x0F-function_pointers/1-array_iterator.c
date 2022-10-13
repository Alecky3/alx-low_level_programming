#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function parameter on each element
 * of the array
 * @array: the array to iterate over
 * @size: size of the array
 * @action: function to call on every element of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i, n = size;

	if (array && action)
		for (i = 0; i < n; i++)
			action(array[i]);
}
