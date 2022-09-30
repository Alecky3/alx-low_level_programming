#include "main.h"
#include <string.h>

/**
 * _strcat - concatenated src to the end of dest
 * @dest: the string to prepend to
 * @src: the string to append to dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int destLen = strlen(dest), srcLen = strlen(src), i;

	for (i = 0; i < srcLen; i++)
	{
		*(dest + destLen) = *(src + i);
		destLen++;
	}

	return (dest);
}
