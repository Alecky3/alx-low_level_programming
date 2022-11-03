#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output;
 * @filename: name of file.
 * @letters: numbers of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readChars, writenChars;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	readChars = read(fd, buf, letters);
	writenChars = write(STDOUT_FILENO, buf, readChars);

	close(fd);

	free(buf);

	return (writenChars);
}
