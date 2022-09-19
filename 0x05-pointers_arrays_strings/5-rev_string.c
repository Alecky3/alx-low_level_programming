#include "main.h"
#include <string.h>

/**
 * rev_string - prints the parameter string in reverse order
 * @s: the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int count;
	int len = strlen(s);
	char res[len];
	int i = 0;

	count = len - 1;

	while (i < len)
	{
		res[i]=s[count];
		i++;
		count--;
	}

	s = res;
}
