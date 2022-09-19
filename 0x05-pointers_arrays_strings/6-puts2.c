#include "main.h"
#include <string.h>

/**
 * puts2 - prints every 2 character of a string
 * @str: the string to print
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
