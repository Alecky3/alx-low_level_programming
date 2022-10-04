#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two string given as parameters
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr_concat = malloc((len1 + len2) * sizeof(char) + 1);

	if (ptr_concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(ptr_concat + i) = s1[i];

	for (j = 0; j <= len2; j++)
		*(ptr_concat + i + j) = s2[j];

	return (ptr_concat);
}
