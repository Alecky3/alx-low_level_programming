#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation algorithm
 * @array: the array we are searching
 * @size: the number of elements in array
 * @value: the value we are serching for
 * Return: first index of value otherwise if value is not present in array or
 * array of null, return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	size_t m;


	if (array == NULL)
		return (-1);

	while (array[h] != array[l] && (value >= array[l]) &&
			(value <= array[h]))
	{
		m = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);

		if (array[m] < value)
			l = m + 1;
		else if (value < array[m])
			h = m - 1;
		else
			return (m);
	}

	if (value == array[l])
		return (l);
	else
		return (-1);
}
