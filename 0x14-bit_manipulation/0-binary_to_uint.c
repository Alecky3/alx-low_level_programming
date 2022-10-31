#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 * Return: number or 0 if there is one or more chars in the string that
 * is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int len, base_two;

	if (!b)
		return (0);

	result = 0;
	len = strlen(b);

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			result += base_two;
		}
	}

	return (result);
}
