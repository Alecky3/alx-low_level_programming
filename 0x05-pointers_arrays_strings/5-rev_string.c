#include "main.h"
#include <string.h>

/**
 * rev_string - prints the parameter string in reverse order
 * @s: the string to print
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char *str = s, temp;
	int len = strlen(str);

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
