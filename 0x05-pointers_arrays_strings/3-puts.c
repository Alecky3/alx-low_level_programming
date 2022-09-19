#include "main.h"
#include <string.h>

/**
 * _puts - prints the parameter string to stdout followed by newline
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;
	int len = strlen(str);

	for (count = 0; count < len; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
}
