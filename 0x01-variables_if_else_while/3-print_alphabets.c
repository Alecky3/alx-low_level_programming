#include <stdio.h>
/**
 * main -entry point of program
 * Return: 0 Success
 */

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for  (i  =  0; i < 52; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
