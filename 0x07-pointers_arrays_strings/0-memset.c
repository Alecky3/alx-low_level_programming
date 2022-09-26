#include "main.h"
/**
 * _memset - fills first n  memory with a constant byte,
 * @s: memory area.
 * @b: the constant byte.
 * @n: number of bytes to be filled.
 * Return: pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
