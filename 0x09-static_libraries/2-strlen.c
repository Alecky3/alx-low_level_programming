#include "main.h"

/**
 * _strlen - return the length of the string parameter
 * @s: the string to get its length
 * Return: void
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;

	return (count);
}
