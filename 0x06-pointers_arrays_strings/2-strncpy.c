#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenated n characters of src to the end of dest
 * @dest: the string to copy to
 * @src: the string to copy from
 * @n: the numbers of charactes to take from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
