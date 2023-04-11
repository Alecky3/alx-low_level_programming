#include "search_algos.h"

void print_array(int *array, size_t first, size_t last)
{
	size_t i;
	
	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		printf("%d", *(array + i));
		if (i < last)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - seraches for a value in a sorted array of integers using
 * the binary search algorithms
 * @array: the array to serch
 * @size: size of the array
 * @value: the value we are seraching
 * Return: index of the value otherwise is value is not present in array or if
 * array is NULL, the function return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;

	if (array == NULL)
		return (-1);
	while (l < r)
	{
		print_array(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;

	}

	if ( array[l] != value)
		return (-1);
	return (l);
}

