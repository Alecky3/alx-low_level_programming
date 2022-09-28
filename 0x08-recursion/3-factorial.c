#include "main.h"

/**
 * factorial - return the factorial of the parameter n
 * @n: the number for find it's factorial
 * Return: -1 if n < 0 else factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
