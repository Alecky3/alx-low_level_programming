#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to allocated memory, else if malloc fails
 * exix program with an exit code of 98
 */

void *malloc_checked(unsigned int b)
{
	void *alloc_ptr;

	alloc_ptr = malloc(b);

	if (alloc_ptr == NULL)
		exit(98);
	return (alloc_ptr);
}
