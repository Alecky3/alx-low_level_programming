#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 Success
 */

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
