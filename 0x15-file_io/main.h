#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_file_error(int from, int to, char *argv[]);
#endif /* end of _MAIN_H_ header */
