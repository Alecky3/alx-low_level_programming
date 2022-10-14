#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	if (separator == NULL)
	{
		va_end(args);
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("%s", "(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
