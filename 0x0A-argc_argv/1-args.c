#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments passed.
 * @argv: array that contains the program command line arguments.
 * Return: 0 success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
