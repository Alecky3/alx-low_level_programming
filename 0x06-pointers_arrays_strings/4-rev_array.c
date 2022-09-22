#include "main.h"
/**
 * reverse_array - reverses the parameter array
 * @a: pointer to the array to reverse
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j = n / 2, temp;

	for (i = 0; i < j; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - (i + 1)));
		*(a + (n - (i + 1))) = temp;
	}
}
