#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string.
 * @s2: the second string.
 * Return: 0 if s1 and s2 are equals,
 * else any other number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0, res = 0;

	while (res == 0)
	{
		if ((*(s1 + j) == '\0') && (*(s2 + j) == '\0'))
			break;
		res = *(s1 + j) - *(s2 + j);
		j++;
	}

	return (res);
}
