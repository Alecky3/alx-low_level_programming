#include <string.h>
#include "main.h"
/**
 * string_toupper - converts lowercase chars to uppercase
 * @str: the string to converts the lowercase
 * Return: pointer to str
 */

char *string_toupper(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
	}

	return (str);
}
