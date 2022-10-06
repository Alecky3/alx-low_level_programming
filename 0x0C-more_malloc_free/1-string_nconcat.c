#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the string to be appended
 * @s2: the string to append to s1
 * @n: number of characters to take from s2
 * Return: pointer to newly allocated space, or NULL
 * if allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_ptr;
	unsigned int i, j;
	unsigned int len1 = strlen(s1), len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len2 = n;

	if (n >= strlen(s2))
	{
		len2 = strlen(s2);
	}

	concat_ptr = malloc(sizeof(s1) + len2);

	if (concat_ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(concat_ptr + i) = s1[i];

	for (j = 0; j < len2; j++)
		*(concat_ptr + i++) = s2[j];

	*(concat_ptr + i) = '\0';

	return (concat_ptr);
}

