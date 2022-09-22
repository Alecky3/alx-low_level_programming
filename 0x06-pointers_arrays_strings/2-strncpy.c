#include "main.h"
/**
 * _strncpy - copies n characters from src to dest
 * @dest: destination string.
 * @src: source string.
 * @n: amount of charactersto copy from src.
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
