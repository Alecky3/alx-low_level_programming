
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char format_args[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (format_args[j])
		{
			if (format[i] == format_args[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), c = 1;
			break;
		case 's':
			str = va_arg(args, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
