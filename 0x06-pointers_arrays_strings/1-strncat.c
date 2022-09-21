#include "main.h"
#include <string.h>

/**
 * _strncat - concatenated n characters of src to the end of dest
 * @dest: the string to prepend to
 * @src: the string to append to dest
 * @n: the numbers of charactes to take from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen = strlen(dest), i;

	for (i = 0; i < n; i++)
	{
		*(dest + destLen) = *(src + i);
		destLen++;
	}

	return (dest);
}
