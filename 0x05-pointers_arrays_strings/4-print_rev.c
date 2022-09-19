#include "main.h"
#include <string.h>

/**
 * print_rev - prints the parameter string in reverse order
 * @s: the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int count;
	int len = strlen(s);

	count = len - 1;

	while (count >= 0)
	{
		_putchar(s[count]);
		count++;
	}

	_putchar('\n');
}
