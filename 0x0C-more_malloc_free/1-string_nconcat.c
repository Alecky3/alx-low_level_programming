#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, lresult, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (len2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > len2)
		n = len2;

	lresult = len1 + n;

	result = malloc(lsout + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < lresult; i++)
		if (i < len1)
			result[i] = s1[i];
		else
			result[i] = s2[i - len1];

	result[i] = '\0';

	return (result);
}
