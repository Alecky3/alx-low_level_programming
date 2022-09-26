#include "main.h"
/**
 * _strchr - locates first occurence of
 * a character parameter in the parameter string,
 * @s: string to find the character
 * @c: character to locate.
 * Return: the pointer to the first occurrence of the character c or NULL.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
