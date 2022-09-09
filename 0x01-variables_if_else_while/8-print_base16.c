#include <stdio.h>

/**
 * main - programs entry point
 * Return: 0 Success
 */

int main(void)
{
	char c[]="0123456789abcdef";
	int i;

	for (i = 0; i < 15; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');

	return (0);
}
