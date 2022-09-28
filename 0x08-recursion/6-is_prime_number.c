#include "main.h"

/**
 * is_prime_number - finds whether input parameter is prime
 * @n: the number to check if it's prime
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n == 2)
		return (1);

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
			return (1);
	}

	return (0);
}
