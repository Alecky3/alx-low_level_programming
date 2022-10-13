#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search the integer
 * @size: size of the array
 * @cmp: the comparer function
 * Return: index of the first element for which the cmp function
 * does not return 0.
 * if no element matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n = size, res = -1;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < n; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (res);
}
