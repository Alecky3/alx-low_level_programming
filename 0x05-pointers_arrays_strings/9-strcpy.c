#include <string.h>
#include "main.h"

/**
 * _strcpy - copies the string src to dst
 * @dst: the destination to copy to
 * @src: the source to copy from
 * Return: pointer to destination
 */

char *_strcpy(char *dst, char *src)
{
	int i, len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dst[i] = src[i];
	}

	dst[len] = '\0';

	return (dst);
}
