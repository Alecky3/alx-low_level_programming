#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the parameter string
 * @name: the name to print
 * @f: the real function pointer to print the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
