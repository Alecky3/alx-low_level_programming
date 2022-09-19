#include "main.h"

/**
 * _puts - prints the parameter string to stdout followed by newline
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (*str++){
		_putchar(str[count]);
		count++;

	}

	_putchar('\n');
}
