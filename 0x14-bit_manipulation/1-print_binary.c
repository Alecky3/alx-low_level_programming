#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}

	n % 2 == 0 ? _putchar('0') : _putchar('1');
}
