#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file.
 * @text_content: text to add at the end of the file.
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letterCount;
	int writtenChars;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{

		letterCount = strlen(text_content);
		writtenChars = write(fd, text_content, letterCount);

		if (writtenChars == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
