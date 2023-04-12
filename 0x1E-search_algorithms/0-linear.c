#include "search_algos.h"
/**
 * linear_search - searches  for a value in an array of integers using the
 * linear serach algorithm
 * @array: the array to search
 * @size: size of the array
 * @value: the values we are searching
 * Return: first index where value is located else if value is not present
 * in the array or array is NULL return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
