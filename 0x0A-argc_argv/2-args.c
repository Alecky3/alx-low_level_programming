#include <stdio.h>
/**
 * main - prints all arguments it receives from the commandline.
 * @argc: number of command line arguments passed.
 * @argv: array that contains the program command line arguments.
 * Return: 0  success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
