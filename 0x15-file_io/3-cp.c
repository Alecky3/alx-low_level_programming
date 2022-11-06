#include "main.h"
#include <stdio.h>


/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from, to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file_error(from, to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from, buf, 1024);
		if (nchars == -1)
			check_file_error(-1, 0, argv);
		nwr = write(to, buf, nchars);
		if (nwr == -1)
			check_file_error(0, -1, argv);
	}

	err_close = close(from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	err_close = close(to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}

/**
 * check_file_error - checks if files for file errors.
 * @from: source file.
 * @to: destination file.
 * @argv: containst files names.
 * Return: void.
 */
void check_file_error(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
