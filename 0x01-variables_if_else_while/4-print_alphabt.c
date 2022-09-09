#include <stdio.h>

/**
 * main - entry point of program
 * Return: 0 Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}

	return (0);
}
