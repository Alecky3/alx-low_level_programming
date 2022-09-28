#include "main.h"

/**
 * _print_rev_recursion - prints parameter string using recursion
 * in reverse order
 * @s: the string to print;
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_puts_recursion(s + 1);
	_putchar(*s);

}
