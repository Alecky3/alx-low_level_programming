#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory
 * which contains a copy of the tring given as a parameter
 * @str: The tring parameter
 * Return: NULL if str is NULL else return pointer or NULL
 */

char *_strdup(char *str)
{
	char *ptr_str;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	len = (int) strlen(str);
	ptr_str = malloc(strlen(str) * sizeof(char) + 1);

	if (ptr_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		*(ptr_str + i) = str[i];
	}

	return (ptr_str);
}
