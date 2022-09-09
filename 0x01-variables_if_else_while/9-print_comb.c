#include <stdio.h>

/**
 * main - progrms entry point
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

