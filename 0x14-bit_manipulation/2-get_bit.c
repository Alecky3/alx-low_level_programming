#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit we want to get
 * Return: value of the bit at index or -1 if an error coccured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 1 << 63; i > 0; i = i / 2)
	{
		if (index == i)
			(n & i) ? return(1) : return(0);
	}

	return (-1);
}
