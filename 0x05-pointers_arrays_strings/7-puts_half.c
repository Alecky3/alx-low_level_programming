#include "main.h"
#include <string.h>

/**
 * puts_half - prints the last half of the parameter string
 * @str: the string to print
 * Return: none
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int mid;

	if (mid % 2 == 0)
		mid = len / 2;
	else
		mid = (len - 1) / 2;

	int i = mid;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
