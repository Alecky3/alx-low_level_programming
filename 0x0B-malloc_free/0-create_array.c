#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with specified
 * character
 * @size: size of the array
 * @c: the character to initialize the array of chars
 * Return: NuLL is size == 0, pointer to the array of chars or NULL
 * if allocation of memory fails
 */

char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;

	if (size == 0)
		return (NULL);
	chars = malloc(size * sizeof(char));
	if (chars == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		chars[i] = c;
	}

	return (chars);
}
